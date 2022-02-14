
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int replay; int replay_window; } ;
struct xfrm_state {TYPE_1__ stats; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {scalar_t__ seq; scalar_t__ replay_window; unsigned int* bmp; } ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct xfrm_state *VAR_1,
     struct sk_buff *VAR_2, __be32 VAR_3)
{
 unsigned int VAR_4, VAR_5;
 struct xfrm_replay_state_esn *VAR_6 = VAR_1->replay_esn;
 u32 VAR_7;
 u32 VAR_8 = FUNC_1(VAR_3);
 u32 VAR_9 = VAR_6->seq - VAR_8;

 if (!VAR_6->replay_window)
  return 0;

 if (FUNC_2(VAR_8 == 0))
  goto err;

 if (FUNC_0(VAR_8 > VAR_6->seq))
  return 0;

 if (VAR_9 >= VAR_6->replay_window) {
  VAR_1->stats.replay_window++;
  goto err;
 }

 VAR_7 = (VAR_6->seq - 1) % VAR_6->replay_window;

 if (VAR_7 >= VAR_9)
  VAR_4 = (VAR_7 - VAR_9) % VAR_6->replay_window;
 else
  VAR_4 = VAR_6->replay_window - (VAR_9 - VAR_7);

 VAR_5 = VAR_4 >> 5;
 VAR_4 = VAR_4 & 0x1F;
 if (VAR_6->bmp[VAR_5] & (1U << VAR_4))
  goto err_replay;

 return 0;

err_replay:
 VAR_1->stats.replay++;
err:
 FUNC_3(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}

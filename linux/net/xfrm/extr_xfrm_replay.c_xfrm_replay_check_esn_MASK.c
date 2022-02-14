
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int replay; int replay_window; } ;
struct xfrm_state {TYPE_1__ stats; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {int replay_window; int seq; scalar_t__ seq_hi; unsigned int* bmp; } ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct xfrm_state *VAR_1,
     struct sk_buff *VAR_2, __be32 VAR_3)
{
 unsigned int VAR_4, VAR_5;
 u32 VAR_6;
 struct xfrm_replay_state_esn *VAR_7 = VAR_1->replay_esn;
 u32 VAR_8;
 u32 VAR_9 = FUNC_1(VAR_3);
 u32 VAR_10 = VAR_7->replay_window;
 u32 VAR_11 = VAR_7->seq;
 u32 VAR_12 = VAR_11 - VAR_10 + 1;

 if (!VAR_10)
  return 0;

 if (FUNC_2(VAR_9 == 0 && VAR_7->seq_hi == 0 &&
       (VAR_7->seq < VAR_7->replay_window - 1)))
  goto err;

 VAR_6 = VAR_11 - VAR_9;

 if (FUNC_0(VAR_11 >= VAR_10 - 1)) {

  if (FUNC_0(VAR_9 > VAR_11) || VAR_9 < VAR_12)
   return 0;
 } else {

  if (FUNC_0(VAR_9 > VAR_11 && VAR_9 < VAR_12))
   return 0;
  if (VAR_9 >= VAR_12)
   VAR_6 = ~VAR_9 + VAR_11 + 1;
 }

 if (VAR_6 >= VAR_7->replay_window) {
  VAR_1->stats.replay_window++;
  goto err;
 }

 VAR_8 = (VAR_7->seq - 1) % VAR_7->replay_window;

 if (VAR_8 >= VAR_6)
  VAR_4 = (VAR_8 - VAR_6) % VAR_7->replay_window;
 else
  VAR_4 = VAR_7->replay_window - (VAR_6 - VAR_8);

 VAR_5 = VAR_4 >> 5;
 VAR_4 = VAR_4 & 0x1F;
 if (VAR_7->bmp[VAR_5] & (1U << VAR_4))
  goto err_replay;

 return 0;

err_replay:
 VAR_1->stats.replay++;
err:
 FUNC_3(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}

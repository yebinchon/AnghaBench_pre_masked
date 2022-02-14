
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int replay; int replay_window; } ;
struct TYPE_4__ {scalar_t__ seq; unsigned int bitmap; } ;
struct TYPE_6__ {scalar_t__ replay_window; } ;
struct xfrm_state {TYPE_2__ stats; TYPE_1__ replay; TYPE_3__ props; } ;
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
 u32 VAR_4;
 u32 VAR_5 = FUNC_1(VAR_3);

 if (!VAR_1->props.replay_window)
  return 0;

 if (FUNC_2(VAR_5 == 0))
  goto err;

 if (FUNC_0(VAR_5 > VAR_1->replay.seq))
  return 0;

 VAR_4 = VAR_1->replay.seq - VAR_5;
 if (VAR_4 >= VAR_1->props.replay_window) {
  VAR_1->stats.replay_window++;
  goto err;
 }

 if (VAR_1->replay.bitmap & (1U << VAR_4)) {
  VAR_1->stats.replay++;
  goto err;
 }
 return 0;

err:
 FUNC_3(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}

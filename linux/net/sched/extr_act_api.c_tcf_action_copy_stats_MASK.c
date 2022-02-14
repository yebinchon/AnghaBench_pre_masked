
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qlen; } ;
struct tc_action {scalar_t__ type; TYPE_1__ tcfa_qstats; int cpu_qstats; int tcfa_rate_est; int tcfa_bstats_hw; int cpu_bstats_hw; int tcfa_bstats; int cpu_bstats; int tcfa_lock; } ;
struct sk_buff {int dummy; } ;
struct gnet_dump {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,struct gnet_dump*,int ,int *) ;
 scalar_t__ FUNC_1 (int *,struct gnet_dump*,int ,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_4 (struct gnet_dump*) ;
 int FUNC_5 (struct sk_buff*,int ,int *,struct gnet_dump*,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int *,struct gnet_dump*,int ) ;

int FUNC_7(struct sk_buff *VAR_6, struct tc_action *VAR_7,
     int VAR_8)
{
 int VAR_9 = 0;
 struct gnet_dump VAR_10;

 if (VAR_7 == ((void*)0))
  goto errout;




 if (VAR_8) {
  if (VAR_7->type == VAR_2)
   VAR_9 = FUNC_6(VAR_6, 0,
          VAR_4,
          VAR_5,
          &VAR_7->tcfa_lock, &VAR_10,
          VAR_3);
  else
   return 0;
 } else
  VAR_9 = FUNC_5(VAR_6, VAR_1,
         &VAR_7->tcfa_lock, &VAR_10, VAR_0);

 if (VAR_9 < 0)
  goto errout;

 if (FUNC_0(((void*)0), &VAR_10, VAR_7->cpu_bstats, &VAR_7->tcfa_bstats) < 0 ||
     FUNC_1(((void*)0), &VAR_10, VAR_7->cpu_bstats_hw,
         &VAR_7->tcfa_bstats_hw) < 0 ||
     FUNC_3(&VAR_10, &VAR_7->tcfa_rate_est) < 0 ||
     FUNC_2(&VAR_10, VAR_7->cpu_qstats,
      &VAR_7->tcfa_qstats,
      VAR_7->tcfa_qstats.qlen) < 0)
  goto errout;

 if (FUNC_4(&VAR_10) < 0)
  goto errout;

 return 0;

errout:
 return -1;
}

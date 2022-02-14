
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct oom_control {int nodemask; int memcg; scalar_t__ order; int gfp_mask; } ;
struct TYPE_4__ {TYPE_1__* signal; int comm; } ;
struct TYPE_3__ {int oom_score_adj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct oom_control*,struct task_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct oom_control*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (struct oom_control*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_10(struct oom_control *VAR_4, struct task_struct *VAR_5)
{
 FUNC_8("%s invoked oom-killer: gfp_mask=%#x(%pGg), order=%d, oom_score_adj=%hd\n",
  VAR_2->comm, VAR_4->gfp_mask, &VAR_4->gfp_mask, VAR_4->order,
   VAR_2->signal->oom_score_adj);
 if (!FUNC_0(VAR_0) && VAR_4->order)
  FUNC_8("COMPACTION is disabled!!!\n");

 FUNC_2();
 if (FUNC_6(VAR_4))
  FUNC_7(VAR_4->memcg);
 else {
  FUNC_9(VAR_1, VAR_4->nodemask);
  if (FUNC_5())
   FUNC_4();
 }
 if (VAR_3)
  FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_1(VAR_4, VAR_5);
}

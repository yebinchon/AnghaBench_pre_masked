
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_queue {int chain; int last_branch_rb; int last_branch; int event_buf; int decoder; int thread; } ;


 int FUNC_0 (struct intel_pt_queue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct intel_pt_queue *VAR_1 = VAR_0;

 if (!VAR_1)
  return;
 FUNC_2(VAR_1->thread);
 FUNC_1(VAR_1->decoder);
 FUNC_3(&VAR_1->event_buf);
 FUNC_3(&VAR_1->last_branch);
 FUNC_3(&VAR_1->last_branch_rb);
 FUNC_3(&VAR_1->chain);
 FUNC_0(VAR_1);
}

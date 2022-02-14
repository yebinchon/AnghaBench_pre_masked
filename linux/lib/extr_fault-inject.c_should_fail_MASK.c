
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fault_attr {int probability; int interval; int count; int times; int space; scalar_t__ task_filter; } ;
typedef int ssize_t ;
struct TYPE_3__ {int fail_nth; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (struct fault_attr*) ;
 int FUNC_6 (struct fault_attr*) ;
 int FUNC_7 (struct fault_attr*,TYPE_1__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;

bool FUNC_10(struct fault_attr *VAR_1, ssize_t VAR_2)
{
 if (FUNC_8()) {
  unsigned int VAR_3 = FUNC_0(VAR_0->fail_nth);

  if (VAR_3) {
   if (!FUNC_1(VAR_0->fail_nth, VAR_3 - 1))
    goto fail;

   return 0;
  }
 }


 if (VAR_1->probability == 0)
  return 0;

 if (VAR_1->task_filter && !FUNC_7(VAR_1, VAR_0))
  return 0;

 if (FUNC_3(&VAR_1->times) == 0)
  return 0;

 if (FUNC_3(&VAR_1->space) > VAR_2) {
  FUNC_4(VAR_2, &VAR_1->space);
  return 0;
 }

 if (VAR_1->interval > 1) {
  VAR_1->count++;
  if (VAR_1->count % VAR_1->interval)
   return 0;
 }

 if (VAR_1->probability <= FUNC_9() % 100)
  return 0;

 if (!FUNC_6(VAR_1))
  return 0;

fail:
 FUNC_5(VAR_1);

 if (FUNC_3(&VAR_1->times) != -1)
  FUNC_2(&VAR_1->times);

 return 1;
}

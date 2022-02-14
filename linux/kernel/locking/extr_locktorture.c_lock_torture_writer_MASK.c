
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lock_stress_stats {int n_lock_acquired; int n_lock_fail; } ;
struct TYPE_4__ {TYPE_1__* cur_ops; } ;
struct TYPE_3__ {int (* task_boost ) (int *) ;int (* writeunlock ) () ;int (* write_delay ) (int *) ;int (* writelock ) () ;} ;
typedef int DEFINE_TORTURE_RANDOM ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(void *VAR_5)
{
 struct lock_stress_stats *VAR_6 = VAR_5;
 static DEFINE_TORTURE_RANDOM(VAR_7);

 FUNC_0("lock_torture_writer task started");
 FUNC_3(VAR_1, VAR_0);

 do {
  if ((FUNC_12(&VAR_7) & 0xfffff) == 0)
   FUNC_2(1);

  VAR_2.cur_ops->task_boost(&VAR_7);
  VAR_2.cur_ops->writelock();
  if (FUNC_1(VAR_4))
   VAR_6->n_lock_fail++;
  VAR_4 = 1;
  if (FUNC_1(VAR_3))
   VAR_6->n_lock_fail++;

  VAR_6->n_lock_acquired++;
  VAR_2.cur_ops->write_delay(&VAR_7);
  VAR_4 = 0;
  VAR_2.cur_ops->writeunlock();

  FUNC_9("lock_torture_writer");
 } while (!FUNC_11());

 VAR_2.cur_ops->task_boost(((void*)0));
 FUNC_10("lock_torture_writer");
 return 0;
}

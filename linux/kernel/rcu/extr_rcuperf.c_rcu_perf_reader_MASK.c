
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* readlock ) () ;int (* readunlock ) (int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (long) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int VAR_3 ;
 long VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;

__attribute__((used)) static int
FUNC_12(void *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 long VAR_8 = (long)VAR_5;

 FUNC_0("rcu_perf_reader task started");
 FUNC_6(VAR_2, FUNC_2(VAR_8 % VAR_4));
 FUNC_7(VAR_2, VAR_0);
 FUNC_1(&VAR_3);

 do {
  FUNC_4(VAR_6);
  VAR_7 = VAR_1->readlock();
  VAR_1->readunlock(VAR_7);
  FUNC_3(VAR_6);
  FUNC_5();
 } while (!FUNC_11());
 FUNC_10("rcu_perf_reader");
 return 0;
}

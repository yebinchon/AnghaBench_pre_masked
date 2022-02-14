
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fqs ) () ;} ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(void *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1("rcu_torture_fqs task started");
 do {
  VAR_7 = VAR_5 + VAR_4 * VAR_0;
  while (FUNC_0(VAR_5, VAR_7) &&
         !FUNC_2()) {
   FUNC_3(1);
  }
  VAR_8 = VAR_2;
  while (VAR_8 > 0 &&
         !FUNC_2()) {
   VAR_1->fqs();
   FUNC_8(VAR_3);
   VAR_8 -= VAR_3;
  }
  FUNC_5("rcu_torture_fqs");
 } while (!FUNC_7());
 FUNC_6("rcu_torture_fqs");
 return 0;
}

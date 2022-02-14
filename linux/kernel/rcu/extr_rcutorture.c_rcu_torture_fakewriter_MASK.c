
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* exp_sync ) () ;int (* sync ) () ;int (* cb_barrier ) () ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(void *VAR_7)
{
 FUNC_0(VAR_6);

 FUNC_1("rcu_torture_fakewriter task started");
 FUNC_3(VAR_2, VAR_0);

 do {
  FUNC_2(1 + FUNC_12(&VAR_6)%10);
  FUNC_13(FUNC_12(&VAR_6) & 0x3ff);
  if (VAR_1->cb_barrier != ((void*)0) &&
      FUNC_12(&VAR_6) % (VAR_5 * 8) == 0) {
   VAR_1->cb_barrier();
  } else if (VAR_4 == VAR_3) {
   if (VAR_1->sync && FUNC_12(&VAR_6) & 0x80)
    VAR_1->sync();
   else if (VAR_1->exp_sync)
    VAR_1->exp_sync();
  } else if (VAR_4 && VAR_1->sync) {
   VAR_1->sync();
  } else if (VAR_1->exp_sync) {
   VAR_1->exp_sync();
  }
  FUNC_9("rcu_torture_fakewriter");
 } while (!FUNC_11());

 FUNC_10("rcu_torture_fakewriter");
 return 0;
}

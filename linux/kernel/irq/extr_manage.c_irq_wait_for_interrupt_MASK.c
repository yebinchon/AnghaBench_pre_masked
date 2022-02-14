
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int thread_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct irqaction *VAR_3)
{
 for (;;) {
  FUNC_3(VAR_1);

  if (FUNC_1()) {

   if (FUNC_4(VAR_0,
            &VAR_3->thread_flags)) {
    FUNC_0(VAR_2);
    return 0;
   }
   FUNC_0(VAR_2);
   return -1;
  }

  if (FUNC_4(VAR_0,
           &VAR_3->thread_flags)) {
   FUNC_0(VAR_2);
   return 0;
  }
  FUNC_2();
 }
}

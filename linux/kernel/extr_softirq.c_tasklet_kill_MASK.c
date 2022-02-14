
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_struct {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct tasklet_struct*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 () ;

void FUNC_7(struct tasklet_struct *VAR_1)
{
 if (FUNC_1())
  FUNC_2("Attempt to kill tasklet from interrupt\n");

 while (FUNC_4(VAR_0, &VAR_1->state)) {
  do {
   FUNC_6();
  } while (FUNC_5(VAR_0, &VAR_1->state));
 }
 FUNC_3(VAR_1);
 FUNC_0(VAR_0, &VAR_1->state);
}

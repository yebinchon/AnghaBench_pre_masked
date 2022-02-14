
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {int * inp_file; int inp_hook; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct ud*) ;

void
FUNC_1(register struct ud* VAR_1, FILE* VAR_2)
{
  FUNC_0(VAR_1);
  VAR_1->inp_hook = VAR_0;
  VAR_1->inp_file = VAR_2;
}

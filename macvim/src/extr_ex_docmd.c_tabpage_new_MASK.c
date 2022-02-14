
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * arg; int * cmd; int cmdidx; } ;
typedef TYPE_1__ exarg_T ;
typedef int ea ;
typedef int char_u ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2()
{
    exarg_T VAR_1;

    FUNC_1(&VAR_1, 0, sizeof(VAR_1));
    VAR_1.cmdidx = VAR_0;
    VAR_1.cmd = (char_u *)"tabn";
    VAR_1.arg = (char_u *)"";
    FUNC_0(&VAR_1);
}

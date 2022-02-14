
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_respondent {int flags; int xrespondent; int backtrace; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (struct nn_respondent *VAR_1)
{
    if (VAR_1->flags & VAR_0)
        FUNC_0 (&VAR_1->backtrace);
    FUNC_1 (&VAR_1->xrespondent);
}

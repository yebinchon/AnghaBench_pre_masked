
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int * str; scalar_t__ sys_err; int zip_err; } ;


 int VAR_0 ;

void
FUNC_0(struct zip_error *VAR_1)
{
    VAR_1->zip_err = VAR_0;
    VAR_1->sys_err = 0;
    VAR_1->str = ((void*)0);
}

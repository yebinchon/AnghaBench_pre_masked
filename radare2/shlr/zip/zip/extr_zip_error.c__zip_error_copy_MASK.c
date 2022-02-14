
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int sys_err; int zip_err; } ;



void
FUNC_0(struct zip_error *VAR_0, const struct zip_error *VAR_1)
{
    VAR_0->zip_err = VAR_1->zip_err;
    VAR_0->sys_err = VAR_1->sys_err;
}

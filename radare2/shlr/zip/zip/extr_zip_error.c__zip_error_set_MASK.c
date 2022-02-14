
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int zip_err; int sys_err; } ;



void
FUNC_0(struct zip_error *VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_0) {
 VAR_0->zip_err = VAR_1;
 VAR_0->sys_err = VAR_2;
    }
}

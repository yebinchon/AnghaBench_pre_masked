
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int zip_err; int sys_err; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(const struct zip_error *VAR_1, int *VAR_2, int *VAR_3)
{
    if (VAR_2)
 *VAR_2 = VAR_1->zip_err;
    if (VAR_3) {
 if (FUNC_0(VAR_1->zip_err) != VAR_0)
     *VAR_3 = VAR_1->sys_err;
 else
     *VAR_3 = 0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refcnt; } ;
typedef TYPE_1__ reg_extmatch_T ;


 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static reg_extmatch_T *
FUNC_1()
{
    reg_extmatch_T *VAR_0;

    VAR_0 = (reg_extmatch_T *)FUNC_0((unsigned)sizeof(reg_extmatch_T));
    if (VAR_0 != ((void*)0))
 VAR_0->refcnt = 1;
    return VAR_0;
}

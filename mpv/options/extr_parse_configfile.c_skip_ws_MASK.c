
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; } ;
typedef TYPE_1__ bstr ;


 TYPE_1__ FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (TYPE_1__,char*) ;

__attribute__((used)) static bool FUNC_2(bstr *VAR_0)
{
    *VAR_0 = FUNC_0(*VAR_0);
    if (FUNC_1(*VAR_0, "#"))
        VAR_0->len = 0;
    return VAR_0->len;
}

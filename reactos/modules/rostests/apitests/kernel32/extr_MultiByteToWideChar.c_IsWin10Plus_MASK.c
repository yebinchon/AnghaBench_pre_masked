
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwMajorVersion; } ;
typedef TYPE_1__ RTL_OSVERSIONINFOW ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static BOOL FUNC_1(void)
{
    RTL_OSVERSIONINFOW *VAR_1 = FUNC_0();
    if (!VAR_1)
        return VAR_0;

    return VAR_1->dwMajorVersion >= 10;
}

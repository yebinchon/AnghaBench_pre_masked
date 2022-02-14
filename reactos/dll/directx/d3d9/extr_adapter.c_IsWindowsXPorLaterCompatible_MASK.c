
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwOSVersionInfoSize; int dwMajorVersion; int dwMinorVersion; } ;
typedef TYPE_1__ OSVERSIONINFOA ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static BOOL FUNC_2()
{
    OSVERSIONINFOA VAR_1;

    FUNC_1(&VAR_1, sizeof(OSVERSIONINFOA));
    VAR_1.dwOSVersionInfoSize = sizeof(OSVERSIONINFOA);

    if (FUNC_0(&VAR_1) != 0)
    {
        return ( (VAR_1.dwMajorVersion > 5) ||
               ( (VAR_1.dwMajorVersion == 5) && (VAR_1.dwMinorVersion >= 1) ));
    }

    return VAR_0;
}

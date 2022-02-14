
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwOSVersionInfoSize; int dwMajorVersion; int dwMinorVersion; } ;
typedef int OSVERSIONINFOW ;
typedef int LPOSVERSIONINFOW ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

BOOL FUNC_1()
{
    VAR_3.dwOSVersionInfoSize = sizeof(OSVERSIONINFOW);
    FUNC_0((LPOSVERSIONINFOW)&VAR_3);
    if (VAR_3.dwMajorVersion == 4)
    {
        VAR_2 = 0;
        return VAR_1;
    }
    else if (VAR_3.dwMajorVersion == 5)
    {
        if (VAR_3.dwMinorVersion == 0)
        {
            VAR_2 = 1;
            return VAR_1;
        }
        else if (VAR_3.dwMinorVersion == 1)
        {
            VAR_2 = 2;
            return VAR_1;
        }
        else if (VAR_3.dwMinorVersion == 2)
        {
            VAR_2 = 3;
            return VAR_1;
        }
    }
    else if (VAR_3.dwMajorVersion == 6)
    {
        VAR_2 = 4;
        return VAR_1;
    }
    return VAR_0;
}

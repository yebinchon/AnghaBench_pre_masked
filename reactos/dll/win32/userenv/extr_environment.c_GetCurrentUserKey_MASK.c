
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int **) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
HKEY
FUNC_5(HANDLE VAR_3)
{
    LONG VAR_4;
    UNICODE_STRING VAR_5;
    HKEY VAR_6;

    if (!FUNC_1(VAR_3, &VAR_5))
    {
        FUNC_0("GetUserSidFromToken() failed\n");
        return ((void*)0);
    }

    VAR_4 = FUNC_2(VAR_1,
                          VAR_5.Buffer,
                          0,
                          VAR_2,
                          &VAR_6);
    if (VAR_4 != VAR_0)
    {
        FUNC_0("RegOpenKeyExW() failed (Error %ld)\n", VAR_4);
        FUNC_3(&VAR_5);
        FUNC_4((DWORD)VAR_4);
        return ((void*)0);
    }

    FUNC_3(&VAR_5);

    return VAR_6;
}

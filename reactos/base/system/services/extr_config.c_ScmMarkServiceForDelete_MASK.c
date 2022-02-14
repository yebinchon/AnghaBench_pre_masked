
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpServiceName; } ;
typedef TYPE_1__* PSERVICE ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int **) ;

DWORD
FUNC_4(PSERVICE VAR_3)
{
    HKEY VAR_4 = ((void*)0);
    DWORD VAR_5 = 1;
    DWORD VAR_6;

    FUNC_0("ScmMarkServiceForDelete() called\n");

    VAR_6 = FUNC_3(VAR_3->lpServiceName,
                                VAR_1,
                                &VAR_4);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 = FUNC_2(VAR_4,
                             L"DeleteFlag",
                             0,
                             VAR_2,
                             (LPBYTE)&VAR_5,
                             sizeof(DWORD));

    FUNC_1(VAR_4);

    return VAR_6;
}

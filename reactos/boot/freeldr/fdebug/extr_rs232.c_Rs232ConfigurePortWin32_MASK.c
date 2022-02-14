
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dcb ;
struct TYPE_5__ {int DCBlength; } ;
typedef int TCHAR ;
typedef int DWORD ;
typedef TYPE_1__ DCB ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

BOOL FUNC_7(TCHAR* VAR_4)
{
    DCB VAR_5;
    DWORD VAR_6;
    FUNC_6(&VAR_5, 0, sizeof(DCB));
    VAR_5.DCBlength = sizeof(VAR_5);
    if (!FUNC_0(VAR_4, &VAR_5))
    {
        VAR_6 = FUNC_1();

        FUNC_5(FUNC_4("BuildCommDCB() failed. GetLastError() = %lu.\n"), VAR_6);

        return VAR_0;
    }

    if (!FUNC_3(VAR_3, &VAR_5))
    {
        VAR_6 = FUNC_1();

        FUNC_5(FUNC_4("SetCommState() failed. GetLastError() = %lu.\n"), VAR_6);

        return VAR_0;
    }


    if (!FUNC_2(VAR_1, 0, 0, 0, 0))
    {
        return VAR_0;
    }

    return VAR_2;
}

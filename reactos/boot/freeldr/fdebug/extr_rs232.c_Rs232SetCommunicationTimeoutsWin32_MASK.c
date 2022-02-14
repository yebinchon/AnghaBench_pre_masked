
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* WriteTotalTimeoutMultiplier; void* WriteTotalTimeoutConstant; void* ReadTotalTimeoutMultiplier; void* ReadTotalTimeoutConstant; void* ReadIntervalTimeout; } ;
typedef void* DWORD ;
typedef TYPE_1__ COMMTIMEOUTS ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 void* FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int ,void*) ;
 int VAR_2 ;

BOOL FUNC_5(DWORD VAR_3, DWORD VAR_4, DWORD VAR_5, DWORD VAR_6, DWORD VAR_7)
{
    COMMTIMEOUTS VAR_8;
    DWORD VAR_9;

    if (!FUNC_0(VAR_2, &VAR_8))
    {
        VAR_9 = FUNC_1();

        FUNC_4(FUNC_3("GetCommTimeouts() failed. GetLastError() = %lu.\n"), VAR_9);

        return VAR_0;
    }

    VAR_8.ReadIntervalTimeout = VAR_3;
    VAR_8.ReadTotalTimeoutConstant = VAR_5;
    VAR_8.ReadTotalTimeoutMultiplier = VAR_4;
    VAR_8.WriteTotalTimeoutConstant = VAR_7;
    VAR_8.WriteTotalTimeoutMultiplier = VAR_6;

    if (!FUNC_2(VAR_2, &VAR_8))
    {
        VAR_9 = FUNC_1();

        FUNC_4(FUNC_3("SetCommTimeouts() failed. GetLastError() = %lu.\n"), VAR_9);

        return VAR_0;
    }

    return VAR_1;
}

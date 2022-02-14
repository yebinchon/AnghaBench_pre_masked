
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int QuadPart; } ;
struct TYPE_6__ {int wYear; int wMonth; int wDay; scalar_t__ wMilliseconds; scalar_t__ wSecond; scalar_t__ wMinute; scalar_t__ wHour; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int LONGLONG ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef scalar_t__ FILETIME ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;

__attribute__((used)) static DWORD
FUNC_4(ULONG VAR_1)
{
    FILETIME VAR_2;
    LARGE_INTEGER VAR_3;
    SYSTEMTIME VAR_4;


    VAR_4.wYear = 1900;
    VAR_4.wMonth = 1;
    VAR_4.wDay = 1;
    VAR_4.wHour = 0;
    VAR_4.wMinute = 0;
    VAR_4.wSecond = 0;
    VAR_4.wMilliseconds = 0;


    if (!FUNC_3(&VAR_4, &VAR_2))
    {
        return FUNC_1();
    }


    VAR_3 = *(LARGE_INTEGER *)&VAR_2;
    VAR_3.QuadPart += (LONGLONG)10000000 * VAR_1;
    VAR_2 = * (FILETIME *)&VAR_3;


    if (!FUNC_0(&VAR_2, &VAR_4))
    {
        return FUNC_1();
    }

    if (!FUNC_2(&VAR_4))
    {
        return FUNC_1();
    }

    return VAR_0;
}

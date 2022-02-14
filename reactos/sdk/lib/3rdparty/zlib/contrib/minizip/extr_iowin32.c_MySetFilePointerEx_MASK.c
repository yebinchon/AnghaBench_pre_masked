
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int LowPart; int HighPart; } ;
typedef int LONG ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int,int *,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__,TYPE_1__*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static BOOL FUNC_3(HANDLE VAR_3, LARGE_INTEGER VAR_4, LARGE_INTEGER *VAR_5, DWORD VAR_6)
{



    LONG VAR_7 = VAR_4.HighPart;
    DWORD VAR_8 = FUNC_1(VAR_3, VAR_4.LowPart, &VAR_7, VAR_6);
    BOOL VAR_9 = VAR_2;
    if (VAR_8 == 0xFFFFFFFF)
        if (FUNC_0() != VAR_1)
            VAR_9 = VAR_0;
    if ((VAR_5 != ((void*)0)) && (VAR_9))
    {
        VAR_5->LowPart = VAR_8;
        VAR_5->HighPart = VAR_7;
    }
    return VAR_9;

}

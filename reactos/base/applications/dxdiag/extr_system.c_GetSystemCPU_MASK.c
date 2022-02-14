
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_4__ {int wProcessorArchitecture; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef int (* ISWOW64PROC ) (int ,scalar_t__*) ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;




 int VAR_1 ;
 int FUNC_5 (int *,char*) ;

VOID FUNC_6(WCHAR *VAR_2)
{
    SYSTEM_INFO VAR_3;
    ISWOW64PROC VAR_4;
    BOOL VAR_5 = VAR_0;





    VAR_4 = (ISWOW64PROC)FUNC_3(
        FUNC_1(L"kernel32"), "IsWow64Process");

    if (VAR_4 != ((void*)0))
        VAR_4(FUNC_0(), &VAR_5);






    if (VAR_5)
        FUNC_2(&VAR_3);
    else
        FUNC_4(&VAR_3);


    if(VAR_3.wProcessorArchitecture != VAR_1)
    {
        switch(VAR_3.wProcessorArchitecture)
        {
        case 128:
        {
            FUNC_5(VAR_2, L"32-bit");
            break;
        }
        case 131:
        {
            FUNC_5(VAR_2, L"64-bit");
            break;
        }
        case 129:
        {
            FUNC_5(VAR_2, L"Itanium");
            break;
        }
        case 130:
        {
            FUNC_5(VAR_2, L"ARM");
            break;
        }
        default:break;
        }
    }
}

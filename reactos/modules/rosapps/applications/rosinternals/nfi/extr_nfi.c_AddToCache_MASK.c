
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_6__ {int Name; int NameLen; int MftId; struct TYPE_6__* Next; } ;
typedef int PWSTR ;
typedef TYPE_1__* PNAME_CACHE_ENTRY ;
typedef int NAME_CACHE_ENTRY ;
typedef int DWORD ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,int ) ;

PNAME_CACHE_ENTRY FUNC_4(PWSTR VAR_1, DWORD VAR_2, ULONGLONG VAR_3)
{
    PNAME_CACHE_ENTRY VAR_4;


    VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 != ((void*)0))
    {
        return VAR_4;
    }


    VAR_4 = FUNC_3(FUNC_2(), 0, sizeof(NAME_CACHE_ENTRY) + VAR_2);
    if (VAR_4 == ((void*)0))
    {
        return ((void*)0);
    }


    VAR_4->Next = VAR_0;
    VAR_0 = VAR_4;

    VAR_4->MftId = VAR_3;
    VAR_4->NameLen = VAR_2;
    FUNC_0(VAR_4->Name, VAR_1, VAR_2);

    return VAR_4;
}

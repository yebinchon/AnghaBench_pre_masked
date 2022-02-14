
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ OriginalFirstThunk; } ;
struct TYPE_13__ {int e_lfanew; } ;
struct TYPE_12__ {scalar_t__ FirstThunk; scalar_t__ Name; } ;
struct TYPE_10__ {TYPE_1__* DataDirectory; } ;
struct TYPE_11__ {TYPE_2__ OptionalHeader; } ;
struct TYPE_9__ {scalar_t__ VirtualAddress; int Size; } ;
typedef int * PIMAGE_THUNK_DATA ;
typedef TYPE_3__* PIMAGE_NT_HEADERS ;
typedef TYPE_4__* PIMAGE_IMPORT_DESCRIPTOR ;
typedef TYPE_5__* PIMAGE_DOS_HEADER ;
typedef TYPE_4__* LPCSTR ;
typedef int * HMODULE ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;


 int * FUNC_0 (char*) ;
 size_t VAR_0 ;
 void* FUNC_1 (scalar_t__,int *) ;
 TYPE_7__ FUNC_2 (TYPE_4__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HMODULE VAR_1 = ((void*)0);
    PIMAGE_DOS_HEADER VAR_2;
    PIMAGE_NT_HEADERS VAR_3;
    DWORD VAR_4;
    DWORD_PTR VAR_5;
    PIMAGE_IMPORT_DESCRIPTOR VAR_6;


    VAR_1 = FUNC_0("kernel32.dll");
    FUNC_3( VAR_1 != ((void*)0) );


    VAR_2 = (PIMAGE_DOS_HEADER) VAR_1;
    VAR_3 = (PIMAGE_NT_HEADERS) (((char*) VAR_2) +
            VAR_2->e_lfanew);


    VAR_4 = VAR_3->OptionalHeader.DataDirectory[VAR_0].Size;
    if (!VAR_4)
    {
        FUNC_5("Unable to continue testing due to missing import directory.\n");
        return;
    }


    VAR_5 = VAR_3->OptionalHeader.DataDirectory[VAR_0].VirtualAddress;
    VAR_6 = FUNC_1(VAR_5, VAR_1);
    FUNC_4(VAR_6 != 0, "Invalid import_chunk: %p\n", VAR_6);
    if (!VAR_6) return;







    for (; VAR_6->FirstThunk; VAR_6++)
    {
        LPCSTR VAR_7 = FUNC_1(VAR_6->Name, VAR_1);
        PIMAGE_THUNK_DATA VAR_8 = FUNC_1(
                FUNC_2(*VAR_6).OriginalFirstThunk, VAR_1);
        PIMAGE_THUNK_DATA VAR_9 = FUNC_1(
                VAR_6->FirstThunk, VAR_1);
        FUNC_4(VAR_7 != ((void*)0), "Imported module name should not be NULL\n");
        FUNC_4(VAR_8 != ((void*)0),
                "Name table for imported module %s should not be NULL\n",
                VAR_7);
        FUNC_4(VAR_9 != ((void*)0), "IAT for imported module %s should not be NULL\n",
                VAR_7);
    }
}

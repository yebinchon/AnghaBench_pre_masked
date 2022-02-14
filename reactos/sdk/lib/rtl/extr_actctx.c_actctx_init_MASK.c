
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ctx ;
typedef int WCHAR ;
struct TYPE_8__ {TYPE_1__* ProcessEnvironmentBlock; } ;
struct TYPE_7__ {int NtSystemRoot; } ;
struct TYPE_6__ {int cbSize; int dwFlags; int * lpSource; int * lpResourceName; int * hModule; } ;
struct TYPE_5__ {int * ImageBaseAddress; } ;
typedef int PVOID ;
typedef int NTSTATUS ;
typedef int * LPCWSTR ;
typedef int HANDLE ;
typedef TYPE_2__ ACTCTXW ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (void*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ,int ) ;
 TYPE_3__* VAR_3 ;
 void* FUNC_9 (int ) ;
 void* VAR_4 ;
 void* VAR_5 ;

void FUNC_10(PVOID* VAR_6)
{
    ACTCTXW VAR_7;
    HANDLE VAR_8;
    WCHAR VAR_9[1024];
    NTSTATUS VAR_10;

    VAR_7.cbSize = sizeof(VAR_7);
    VAR_7.lpSource = ((void*)0);
    VAR_7.dwFlags = VAR_1 | VAR_0;
    VAR_7.hModule = FUNC_3()->ProcessEnvironmentBlock->ImageBaseAddress;
    VAR_7.lpResourceName = (LPCWSTR)VAR_2;

    if (FUNC_2(FUNC_6(0, (PVOID)&VAR_7, 0, ((void*)0), ((void*)0), &VAR_8)))
    {
        VAR_5 = FUNC_9(VAR_8);
    }



    FUNC_1(VAR_5, VAR_6);


    VAR_7.dwFlags = 0;
    VAR_7.hModule = ((void*)0);
    VAR_7.lpResourceName = ((void*)0);
    VAR_7.lpSource = VAR_9;
    FUNC_8(VAR_9, FUNC_4(VAR_9), VAR_3->NtSystemRoot);

    if (FUNC_5())
    {
        FUNC_7(VAR_9, FUNC_4(VAR_9), L"\\winsxs\\manifests\\forwardcompatible.manifest");
    }
    else
    {
        FUNC_7(VAR_9, FUNC_4(VAR_9), L"\\winsxs\\manifests\\systemcompatible.manifest");
    }

    VAR_10 = FUNC_6(0, (PVOID)&VAR_7, 0, ((void*)0), ((void*)0), &VAR_8);
    if (FUNC_2(VAR_10))
    {
        VAR_4 = FUNC_9(VAR_8);
    }
    else
    {
        FUNC_0("Failed to create the implicit act ctx. Status: 0x%x!!!\n", VAR_10);
    }
}

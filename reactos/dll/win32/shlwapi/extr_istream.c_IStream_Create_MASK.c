
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IStream_iface; scalar_t__ grfStateBits; scalar_t__ type; int lpszPath; int dwMode; int hFile; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ IStream ;
typedef TYPE_2__ ISHFileStream ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_2__*) ;

__attribute__((used)) static IStream *FUNC_4(LPCWSTR VAR_1, HANDLE VAR_2, DWORD VAR_3)
{
    ISHFileStream *VAR_4;

    VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(ISHFileStream));
    if (!VAR_4) return ((void*)0);

    VAR_4->IStream_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->hFile = VAR_2;
    VAR_4->dwMode = VAR_3;
    VAR_4->lpszPath = FUNC_2(VAR_1);
    VAR_4->type = 0;
    VAR_4->grfStateBits = 0;

    FUNC_3 ("Returning %p\n", VAR_4);
    return &VAR_4->IStream_iface;
}

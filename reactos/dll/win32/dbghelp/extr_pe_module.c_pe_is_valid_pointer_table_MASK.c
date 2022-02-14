
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ NumberOfSymbols; scalar_t__ PointerToSymbolTable; } ;
struct TYPE_5__ {TYPE_1__ FileHeader; } ;
typedef int IMAGE_SYMBOL ;
typedef TYPE_2__ IMAGE_NT_HEADERS ;
typedef int DWORD64 ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_0(const IMAGE_NT_HEADERS* VAR_1, const void* VAR_2, DWORD64 VAR_3)
{
    DWORD64 VAR_4;


    VAR_4 = (DWORD64)VAR_1->FileHeader.PointerToSymbolTable;
    VAR_4 += (DWORD64)VAR_1->FileHeader.NumberOfSymbols * sizeof(IMAGE_SYMBOL);
    if (VAR_4 + sizeof(DWORD) > VAR_3) return VAR_0;

    VAR_4 += *(DWORD*)((const char*)VAR_2 + VAR_4);
    return VAR_4 <= VAR_3;
}

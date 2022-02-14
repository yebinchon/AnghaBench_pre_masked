
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ e_magic; int e_lfanew; } ;
struct TYPE_5__ {scalar_t__ Signature; } ;
typedef TYPE_1__* PIMAGE_NT_HEADERS ;
typedef TYPE_1__ IMAGE_NT_HEADERS ;
typedef TYPE_3__ IMAGE_DOS_HEADER ;
typedef scalar_t__ HMODULE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static PIMAGE_NT_HEADERS FUNC_0(HMODULE VAR_2)
{
    IMAGE_NT_HEADERS *VAR_3 = ((void*)0);
    IMAGE_DOS_HEADER *VAR_4 = (IMAGE_DOS_HEADER *)VAR_2;

    if (VAR_4->e_magic == VAR_0)
    {
        VAR_3 = (IMAGE_NT_HEADERS *)((char *)VAR_4 + VAR_4->e_lfanew);
        if (VAR_3->Signature != VAR_1) VAR_3 = ((void*)0);
    }
    return VAR_3;
}

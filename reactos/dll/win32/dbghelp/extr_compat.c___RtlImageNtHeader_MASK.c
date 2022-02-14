
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ e_magic; scalar_t__ e_lfanew; } ;
struct TYPE_4__ {scalar_t__ Signature; } ;
typedef TYPE_1__* PIMAGE_NT_HEADERS ;
typedef TYPE_2__* PIMAGE_DOS_HEADER ;
typedef scalar_t__ PCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

PIMAGE_NT_HEADERS FUNC_0(void *VAR_2)
{
    PIMAGE_DOS_HEADER VAR_3 = (PIMAGE_DOS_HEADER)VAR_2;
    PIMAGE_NT_HEADERS VAR_4;
    PCHAR VAR_5;
    if (VAR_3->e_magic != VAR_0)
        return ((void*)0);
    VAR_5 = ((PCHAR)VAR_2) + VAR_3->e_lfanew;
    VAR_4 = (PIMAGE_NT_HEADERS)VAR_5;
    if (VAR_4->Signature != VAR_1)
        return ((void*)0);
    return VAR_4;
}

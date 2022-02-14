
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ e_magic; int e_lfanew; } ;
struct TYPE_4__ {scalar_t__ Signature; } ;
typedef TYPE_1__ IMAGE_NT_HEADERS ;
typedef TYPE_2__ IMAGE_DOS_HEADER ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static IMAGE_NT_HEADERS *FUNC_0( void *VAR_2, DWORD VAR_3 )
{
    IMAGE_NT_HEADERS *VAR_4;
    IMAGE_DOS_HEADER *VAR_5;

    if (VAR_3<sizeof (*VAR_5))
        return ((void*)0);

    VAR_5 = VAR_2;
    if (VAR_5->e_magic != VAR_0)
        return ((void*)0);

    if ((VAR_5->e_lfanew + sizeof (*VAR_4)) > VAR_3)
        return ((void*)0);

    VAR_4 = (void*) ((BYTE*)VAR_2 + VAR_5->e_lfanew);

    if (VAR_4->Signature != VAR_1)
        return ((void*)0);

    return VAR_4;
}

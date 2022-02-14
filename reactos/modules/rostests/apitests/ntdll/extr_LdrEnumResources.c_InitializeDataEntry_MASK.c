
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Reserved; scalar_t__ CodePage; int Size; scalar_t__ OffsetToData; } ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PIMAGE_RESOURCE_DATA_ENTRY ;



__attribute__((used)) static
VOID
FUNC_0(
    PVOID VAR_0,
    PIMAGE_RESOURCE_DATA_ENTRY VAR_1,
    PVOID VAR_2,
    ULONG VAR_3)
{

    VAR_1->OffsetToData = (PUCHAR)VAR_2 - (PUCHAR)VAR_0;
    VAR_1->Size = VAR_3;
    VAR_1->CodePage = 0;
    VAR_1->Reserved = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* ULONG ;
struct TYPE_3__ {int Length; char* Next; char Version; char* AugString; int AugStringLength; char* AugData; char* Instructions; int AugLength; int ReturnAddressRegister; int DataAlign; int CodeAlign; void* CieId; } ;
typedef TYPE_1__* PDW2CIE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;

unsigned long
FUNC_3(PDW2CIE VAR_0, char *VAR_1)
{
    VAR_0->Length = *(ULONG*)VAR_1;
    VAR_0->Next = VAR_1 + 4 + VAR_0->Length;
    VAR_0->CieId = *(ULONG*)(VAR_1 + 4);
    VAR_0->Version = VAR_1[8];
    VAR_0->AugString = VAR_1 + 9;
    VAR_0->AugStringLength = FUNC_2(VAR_0->AugString);
    VAR_1 = VAR_0->AugString + VAR_0->AugStringLength + 1;
    VAR_1 += FUNC_1(&VAR_0->CodeAlign, VAR_1);
    VAR_1 += FUNC_0(&VAR_0->DataAlign, VAR_1);
    VAR_1 += FUNC_1(&VAR_0->ReturnAddressRegister, VAR_1);
    VAR_1 += FUNC_1(&VAR_0->AugLength, VAR_1);
    VAR_0->AugData = VAR_1;
    VAR_1 += VAR_0->AugLength;
    VAR_0->Instructions = VAR_1;

    return VAR_0->Length + 4;
}

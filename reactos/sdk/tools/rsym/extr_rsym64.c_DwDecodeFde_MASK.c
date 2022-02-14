
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int Length; char* Next; char* CiePointer; int PcBegin; int PcRange; int AugLength; char* AugData; char* Instructions; } ;
typedef TYPE_1__* PDW2FDE ;


 int FUNC_0 (int*,char*) ;

unsigned long
FUNC_1(PDW2FDE VAR_0, char *VAR_1)
{
    VAR_0->Length = *(ULONG*)VAR_1;
    VAR_0->Next = VAR_1 + 4 + VAR_0->Length;
    VAR_0->CiePointer = VAR_1 + 4 - *(ULONG*)(VAR_1 + 4);
    VAR_0->PcBegin = *(ULONG*)(VAR_1 + 8);
    VAR_0->PcRange = *(ULONG*)(VAR_1 + 12);
    VAR_1 += 16;
    VAR_1 += FUNC_0(&VAR_0->AugLength, VAR_1);
    VAR_0->AugData = VAR_1;
    VAR_0->Instructions = VAR_0->AugData + VAR_0->AugLength;

    return VAR_0->Length + 4;
}

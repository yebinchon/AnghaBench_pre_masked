
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int EaNameLength; scalar_t__ EaValueLength; scalar_t__ EaName; int Flags; int NextEntryOffset; } ;
typedef TYPE_1__* PFILE_FULL_EA_INFORMATION ;


 int FUNC_0 (char*,int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,unsigned char*,unsigned char*,scalar_t__) ;

void FUNC_2(int VAR_0, PFILE_FULL_EA_INFORMATION VAR_1)
{
    if (!VAR_0) return;
    FUNC_0("FULL_EA_INFO: NextOffset=%d Flags=%x EaNameLength=%d "
        "ExValueLength=%x EaName=%s\n", VAR_1->NextEntryOffset, VAR_1->Flags,
        VAR_1->EaNameLength, VAR_1->EaValueLength, VAR_1->EaName);
    if (VAR_1->EaValueLength)
        FUNC_1(0, (unsigned char *)"eavalue",
            (unsigned char *)VAR_1->EaName + VAR_1->EaNameLength + 1,
            VAR_1->EaValueLength);
}

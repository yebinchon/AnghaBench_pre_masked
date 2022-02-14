
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int EaName; int EaNameLength; int NextEntryOffset; } ;
typedef TYPE_1__* PFILE_GET_EA_INFORMATION ;


 int FUNC_0 (char*,int ,int ,int ) ;

void FUNC_1(int VAR_0, PFILE_GET_EA_INFORMATION VAR_1)
{
    if (!VAR_0 || !VAR_1) return;
    FUNC_0("GET_EA_INFO: NextOffset=%d EaNameLength=%d EaName=%s\n",
        VAR_1->NextEntryOffset, VAR_1->EaNameLength, VAR_1->EaName);
}

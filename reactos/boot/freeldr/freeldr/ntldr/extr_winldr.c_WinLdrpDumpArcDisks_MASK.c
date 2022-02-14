
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {TYPE_4__* Flink; } ;
struct TYPE_13__ {TYPE_1__ ListEntry; int Signature; int CheckSum; int ArcName; } ;
struct TYPE_12__ {struct TYPE_12__* Flink; } ;
struct TYPE_11__ {TYPE_2__* ArcDiskInformation; } ;
struct TYPE_10__ {TYPE_4__ DiskSignatureListHead; } ;
typedef TYPE_3__* PLOADER_PARAMETER_BLOCK ;
typedef TYPE_4__* PLIST_ENTRY ;
typedef TYPE_5__* PARC_DISK_SIGNATURE ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ) ;

VOID
FUNC_2(PLOADER_PARAMETER_BLOCK VAR_2)
{
    PLIST_ENTRY VAR_3;
    PARC_DISK_SIGNATURE VAR_4;

    VAR_3 = VAR_2->ArcDiskInformation->DiskSignatureListHead.Flink;

    while (VAR_3 != &VAR_2->ArcDiskInformation->DiskSignatureListHead)
    {
        VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1);

        FUNC_1("ArcDisk %s checksum: 0x%X, signature: 0x%X\n",
            VAR_4->ArcName, VAR_4->CheckSum, VAR_4->Signature);

        VAR_3 = VAR_4->ListEntry.Flink;
    }
}

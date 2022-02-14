
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {scalar_t__ MediaType; scalar_t__ PartitionType; int BytesPerSector; } ;
struct TYPE_8__ {scalar_t__* Unused0; scalar_t__* Unused3; int BytesPerSector; int SectorsPerCluster; } ;
struct TYPE_9__ {TYPE_1__ BPB; int OEMID; } ;
typedef int PVOID ;
typedef int PDEVICE_OBJECT ;
typedef TYPE_2__* PBOOT_SECTOR ;
typedef TYPE_3__ PARTITION_INFORMATION ;
typedef int NTSTATUS ;
typedef TYPE_3__ DISK_GEOMETRY ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 TYPE_2__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int *,int ,TYPE_3__*,int*,int ) ;
 int FUNC_6 (int ,int ,int,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static
NTSTATUS
FUNC_8(PDEVICE_OBJECT VAR_9)
{
    PARTITION_INFORMATION VAR_10;
    DISK_GEOMETRY VAR_11;
    ULONG VAR_12, VAR_13, VAR_14;
    PBOOT_SECTOR VAR_15;
    NTSTATUS VAR_16;

    FUNC_0("NtfsHasFileSystem() called\n");

    VAR_13 = sizeof(DISK_GEOMETRY);
    VAR_16 = FUNC_5(VAR_9,
                                 VAR_1,
                                 ((void*)0),
                                 0,
                                 &VAR_11,
                                 &VAR_13,
                                 VAR_8);
    if (!FUNC_4(VAR_16))
    {
        FUNC_1("NtfsDeviceIoControl() failed (Status %lx)\n", VAR_16);
        return VAR_16;
    }

    if (VAR_11.MediaType == VAR_0)
    {

        VAR_13 = sizeof(PARTITION_INFORMATION);
        VAR_16 = FUNC_5(VAR_9,
                                     VAR_2,
                                     ((void*)0),
                                     0,
                                     &VAR_10,
                                     &VAR_13,
                                     VAR_8);
        if (!FUNC_4(VAR_16))
        {
            FUNC_1("NtfsDeviceIoControl() failed (Status %lx)\n", VAR_16);
            return VAR_16;
        }

        if (VAR_10.PartitionType != VAR_4)
        {
            FUNC_1("Invalid partition type\n");
            return VAR_6;
        }
    }

    FUNC_1("BytesPerSector: %lu\n", VAR_11.BytesPerSector);
    VAR_15 = FUNC_2(VAR_3,
                                       VAR_11.BytesPerSector,
                                       VAR_7);
    if (VAR_15 == ((void*)0))
    {
        return VAR_5;
    }

    VAR_16 = FUNC_6(VAR_9,
                             0,
                             1,
                             VAR_11.BytesPerSector,
                             (PVOID)VAR_15,
                             VAR_8);
    if (!FUNC_4(VAR_16))
    {
        goto ByeBye;
    }







    if (FUNC_7(VAR_15->OEMID, "NTFS    ", 8) != 8)
    {
        FUNC_1("Failed with NTFS-identifier: [%.8s]\n", VAR_15->OEMID);
        VAR_16 = VAR_6;
        goto ByeBye;
    }


    for (VAR_14 = 0; VAR_14 < 7; VAR_14++)
    {
        if (VAR_15->BPB.Unused0[VAR_14] != 0)
        {
            FUNC_1("Failed in field Unused0: [%.7s]\n", VAR_15->BPB.Unused0);
            VAR_16 = VAR_6;
            goto ByeBye;
        }
    }


    for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
    {
        if (VAR_15->BPB.Unused3[VAR_14] != 0)
        {
            FUNC_1("Failed in field Unused3: [%.4s]\n", VAR_15->BPB.Unused3);
            VAR_16 = VAR_6;
            goto ByeBye;
        }
    }


    VAR_12 = VAR_15->BPB.BytesPerSector * VAR_15->BPB.SectorsPerCluster;
    if (VAR_12 != 512 && VAR_12 != 1024 &&
        VAR_12 != 2048 && VAR_12 != 4096 &&
        VAR_12 != 8192 && VAR_12 != 16384 &&
        VAR_12 != 32768 && VAR_12 != 65536)
    {
        FUNC_1("Cluster size failed: %hu, %hu, %hu\n",
                VAR_15->BPB.BytesPerSector,
                VAR_15->BPB.SectorsPerCluster,
                VAR_12);
        VAR_16 = VAR_6;
        goto ByeBye;
    }

ByeBye:
    FUNC_3(VAR_15);

    return VAR_16;
}

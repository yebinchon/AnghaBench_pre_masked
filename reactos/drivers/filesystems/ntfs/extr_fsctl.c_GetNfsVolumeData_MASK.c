
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_56__ TYPE_9__ ;
typedef struct TYPE_55__ TYPE_8__ ;
typedef struct TYPE_54__ TYPE_7__ ;
typedef struct TYPE_53__ TYPE_6__ ;
typedef struct TYPE_52__ TYPE_5__ ;
typedef struct TYPE_51__ TYPE_4__ ;
typedef struct TYPE_50__ TYPE_3__ ;
typedef struct TYPE_49__ TYPE_2__ ;
typedef struct TYPE_48__ TYPE_24__ ;
typedef struct TYPE_47__ TYPE_23__ ;
typedef struct TYPE_46__ TYPE_22__ ;
typedef struct TYPE_45__ TYPE_21__ ;
typedef struct TYPE_44__ TYPE_20__ ;
typedef struct TYPE_43__ TYPE_1__ ;
typedef struct TYPE_42__ TYPE_19__ ;
typedef struct TYPE_41__ TYPE_18__ ;
typedef struct TYPE_40__ TYPE_17__ ;
typedef struct TYPE_39__ TYPE_16__ ;
typedef struct TYPE_38__ TYPE_15__ ;
typedef struct TYPE_37__ TYPE_14__ ;
typedef struct TYPE_36__ TYPE_13__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_56__ {int QuadPart; } ;
struct TYPE_55__ {int QuadPart; } ;
struct TYPE_54__ {int QuadPart; } ;
struct TYPE_53__ {long long QuadPart; } ;
struct TYPE_52__ {int QuadPart; } ;
struct TYPE_51__ {int QuadPart; } ;
struct TYPE_50__ {int QuadPart; } ;
struct TYPE_49__ {int QuadPart; } ;
struct TYPE_33__ {int QuadPart; } ;
struct TYPE_40__ {int BytesPerCluster; int BytesPerFileRecord; int MinorVersion; int MajorVersion; TYPE_10__ MftMirrStart; TYPE_8__ MftStart; int BytesPerSector; int ClusterCount; int SectorCount; int SerialNumber; } ;
struct TYPE_48__ {TYPE_17__ NtfsInfo; int MasterFileTable; } ;
struct TYPE_38__ {int OutputBufferLength; } ;
struct TYPE_39__ {TYPE_15__ FileSystemControl; } ;
struct TYPE_47__ {TYPE_16__ Parameters; } ;
struct TYPE_41__ {int Information; } ;
struct TYPE_43__ {scalar_t__ SystemBuffer; } ;
struct TYPE_46__ {TYPE_18__ IoStatus; int * UserBuffer; TYPE_1__ AssociatedIrp; } ;
struct TYPE_37__ {int DataSize; } ;
struct TYPE_45__ {scalar_t__ Type; TYPE_14__ NonResident; int IsNonResident; } ;
struct TYPE_44__ {int ByteCount; int MinorVersion; int MajorVersion; } ;
struct TYPE_36__ {int QuadPart; } ;
struct TYPE_35__ {scalar_t__ QuadPart; } ;
struct TYPE_34__ {scalar_t__ QuadPart; } ;
struct TYPE_42__ {int BytesPerCluster; int BytesPerFileRecordSegment; int ClustersPerFileRecordSegment; TYPE_13__ MftValidDataLength; TYPE_12__ MftZoneEnd; TYPE_11__ MftZoneStart; TYPE_9__ Mft2StartLcn; TYPE_7__ MftStartLcn; int BytesPerSector; TYPE_6__ TotalReserved; TYPE_5__ FreeClusters; TYPE_4__ TotalClusters; TYPE_3__ NumberSectors; TYPE_2__ VolumeSerialNumber; } ;
typedef TYPE_19__* PNTFS_VOLUME_DATA_BUFFER ;
typedef TYPE_20__* PNTFS_EXTENDED_VOLUME_DATA ;
typedef TYPE_21__* PNTFS_ATTR_RECORD ;
typedef TYPE_22__* PIRP ;
typedef TYPE_23__* PIO_STACK_LOCATION ;
typedef TYPE_24__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int NTFS_VOLUME_DATA_BUFFER ;
typedef int NTFS_EXTENDED_VOLUME_DATA ;
typedef int FIND_ATTR_CONTXT ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_24__*,int ,int ,TYPE_21__**) ;
 int FUNC_4 (int *,TYPE_21__**) ;
 TYPE_23__* FUNC_5 (TYPE_22__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_24__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
NTSTATUS
FUNC_8(PDEVICE_EXTENSION VAR_4,
                 PIRP VAR_5)
{
    PIO_STACK_LOCATION VAR_6;
    PNTFS_VOLUME_DATA_BUFFER VAR_7;
    PNTFS_ATTR_RECORD VAR_8;
    FIND_ATTR_CONTXT VAR_9;
    NTSTATUS VAR_10;

    VAR_7 = (PNTFS_VOLUME_DATA_BUFFER)VAR_5->AssociatedIrp.SystemBuffer;
    VAR_6 = FUNC_5(VAR_5);

    if (VAR_6->Parameters.FileSystemControl.OutputBufferLength < sizeof(NTFS_VOLUME_DATA_BUFFER) ||
        VAR_5->UserBuffer == ((void*)0))
    {
        FUNC_1("Invalid output! %d %p\n", VAR_6->Parameters.FileSystemControl.OutputBufferLength, VAR_5->UserBuffer);
        return VAR_2;
    }

    VAR_7->VolumeSerialNumber.QuadPart = VAR_4->NtfsInfo.SerialNumber;
    VAR_7->NumberSectors.QuadPart = VAR_4->NtfsInfo.SectorCount;
    VAR_7->TotalClusters.QuadPart = VAR_4->NtfsInfo.ClusterCount;
    VAR_7->FreeClusters.QuadPart = FUNC_7(VAR_4);
    VAR_7->TotalReserved.QuadPart = 0LL;
    VAR_7->BytesPerSector = VAR_4->NtfsInfo.BytesPerSector;
    VAR_7->BytesPerCluster = VAR_4->NtfsInfo.BytesPerCluster;
    VAR_7->BytesPerFileRecordSegment = VAR_4->NtfsInfo.BytesPerFileRecord;
    VAR_7->ClustersPerFileRecordSegment = VAR_4->NtfsInfo.BytesPerFileRecord / VAR_4->NtfsInfo.BytesPerCluster;
    VAR_7->MftStartLcn.QuadPart = VAR_4->NtfsInfo.MftStart.QuadPart;
    VAR_7->Mft2StartLcn.QuadPart = VAR_4->NtfsInfo.MftMirrStart.QuadPart;
    VAR_7->MftZoneStart.QuadPart = 0;
    VAR_7->MftZoneEnd.QuadPart = 0;

    VAR_10 = FUNC_3(&VAR_9, VAR_4, VAR_4->MasterFileTable, VAR_1, &VAR_8);
    while (FUNC_6(VAR_10))
    {
        if (VAR_8->Type == VAR_0)
        {
            FUNC_0(VAR_8->IsNonResident);
            VAR_7->MftValidDataLength.QuadPart = VAR_8->NonResident.DataSize;

            break;
        }

        VAR_10 = FUNC_4(&VAR_9, &VAR_8);
    }
    FUNC_2(&VAR_9);

    VAR_5->IoStatus.Information = sizeof(NTFS_VOLUME_DATA_BUFFER);

    if (VAR_6->Parameters.FileSystemControl.OutputBufferLength >= sizeof(NTFS_EXTENDED_VOLUME_DATA) + sizeof(NTFS_VOLUME_DATA_BUFFER))
    {
        PNTFS_EXTENDED_VOLUME_DATA VAR_11 = (PNTFS_EXTENDED_VOLUME_DATA)((ULONG_PTR)VAR_5->UserBuffer + sizeof(NTFS_VOLUME_DATA_BUFFER));

        VAR_11->ByteCount = sizeof(NTFS_EXTENDED_VOLUME_DATA);
        VAR_11->MajorVersion = VAR_4->NtfsInfo.MajorVersion;
        VAR_11->MinorVersion = VAR_4->NtfsInfo.MinorVersion;
        VAR_5->IoStatus.Information += sizeof(NTFS_EXTENDED_VOLUME_DATA);
    }

    return VAR_3;
}

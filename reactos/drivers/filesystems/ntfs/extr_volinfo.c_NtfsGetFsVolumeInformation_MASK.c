
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {TYPE_2__* Vpb; } ;
struct TYPE_7__ {scalar_t__ QuadPart; } ;
struct TYPE_9__ {int VolumeLabelLength; int SupportsObjects; TYPE_1__ VolumeCreationTime; int VolumeLabel; int VolumeSerialNumber; } ;
struct TYPE_8__ {int VolumeLabelLength; int VolumeLabel; int SerialNumber; } ;
typedef int* PULONG ;
typedef TYPE_3__* PFILE_FS_VOLUME_INFORMATION ;
typedef TYPE_4__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int FILE_FS_VOLUME_INFORMATION ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PDEVICE_OBJECT VAR_4,
                           PFILE_FS_VOLUME_INFORMATION VAR_5,
                           PULONG VAR_6)
{
    FUNC_0("NtfsGetFsVolumeInformation() called\n");
    FUNC_0("FsVolumeInfo = %p\n", VAR_5);
    FUNC_0("BufferLength %lu\n", *VAR_6);

    FUNC_0("Vpb %p\n", VAR_4->Vpb);

    FUNC_0("Required length %lu\n",
           sizeof(FILE_FS_VOLUME_INFORMATION) + VAR_4->Vpb->VolumeLabelLength);
    FUNC_0("LabelLength %hu\n",
           VAR_4->Vpb->VolumeLabelLength);
    FUNC_0("Label %.*S\n",
           VAR_4->Vpb->VolumeLabelLength / sizeof(WCHAR),
           VAR_4->Vpb->VolumeLabel);

    if (*VAR_6 < sizeof(FILE_FS_VOLUME_INFORMATION))
        return VAR_2;

    if (*VAR_6 < (sizeof(FILE_FS_VOLUME_INFORMATION) + VAR_4->Vpb->VolumeLabelLength))
        return VAR_1;


    VAR_5->VolumeSerialNumber = VAR_4->Vpb->SerialNumber;
    VAR_5->VolumeLabelLength = VAR_4->Vpb->VolumeLabelLength;
    FUNC_1(VAR_5->VolumeLabel,
           VAR_4->Vpb->VolumeLabel,
           VAR_4->Vpb->VolumeLabelLength);


    VAR_5->VolumeCreationTime.QuadPart = 0;
    VAR_5->SupportsObjects = VAR_0;

    *VAR_6 -= (sizeof(FILE_FS_VOLUME_INFORMATION) + VAR_4->Vpb->VolumeLabelLength);

    FUNC_0("BufferLength %lu\n", *VAR_6);
    FUNC_0("NtfsGetFsVolumeInformation() done\n");

    return VAR_3;
}

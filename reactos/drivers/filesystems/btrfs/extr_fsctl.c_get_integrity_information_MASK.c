
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sector_size; } ;
struct TYPE_6__ {TYPE_1__ superblock; } ;
typedef TYPE_2__ device_extension ;
typedef int ULONG ;
struct TYPE_7__ {int ClusterSizeInBytes; int ChecksumChunkSizeInBytes; scalar_t__ Flags; scalar_t__ Reserved; scalar_t__ ChecksumAlgorithm; } ;
typedef int PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef TYPE_3__ FSCTL_GET_INTEGRITY_INFORMATION_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_1(device_extension* VAR_2, PFILE_OBJECT VAR_3, void* VAR_4, ULONG VAR_5) {
    FSCTL_GET_INTEGRITY_INFORMATION_BUFFER* VAR_6 = (FSCTL_GET_INTEGRITY_INFORMATION_BUFFER*)VAR_4;

    FUNC_0("FSCTL_GET_INTEGRITY_INFORMATION\n");



    if (!VAR_3)
        return VAR_0;

    if (!VAR_4 || VAR_5 < sizeof(FSCTL_GET_INTEGRITY_INFORMATION_BUFFER))
        return VAR_0;

    VAR_6->ChecksumAlgorithm = 0;
    VAR_6->Reserved = 0;
    VAR_6->Flags = 0;
    VAR_6->ChecksumChunkSizeInBytes = VAR_2->superblock.sector_size;
    VAR_6->ClusterSizeInBytes = VAR_2->superblock.sector_size;

    return VAR_1;
}

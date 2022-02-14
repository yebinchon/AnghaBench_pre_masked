
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {TYPE_5__* subvol; int inode; TYPE_3__* Vcb; } ;
typedef TYPE_6__ fcb ;
struct TYPE_13__ {int * Identifier; } ;
struct TYPE_16__ {TYPE_4__ FileId; int VolumeSerialNumber; } ;
struct TYPE_14__ {int id; } ;
struct TYPE_10__ {int * uuid; } ;
struct TYPE_11__ {TYPE_1__ uuid; } ;
struct TYPE_12__ {TYPE_2__ superblock; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_7__ FILE_ID_INFORMATION ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static NTSTATUS FUNC_1(FILE_ID_INFORMATION* VAR_1, fcb* VAR_2, LONG* VAR_3) {
    FUNC_0(&VAR_1->VolumeSerialNumber, &VAR_2->Vcb->superblock.uuid.uuid[8], sizeof(uint64_t));
    FUNC_0(&VAR_1->FileId.Identifier[0], &VAR_2->inode, sizeof(uint64_t));
    FUNC_0(&VAR_1->FileId.Identifier[sizeof(uint64_t)], &VAR_2->subvol->id, sizeof(uint64_t));

    *VAR_3 -= sizeof(FILE_ID_INFORMATION);

    return VAR_0;
}

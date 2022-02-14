
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int inode; int subvol; } ;
typedef TYPE_2__ fcb ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_8__ {TYPE_1__ IndexNumber; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_3__ FILE_INTERNAL_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static NTSTATUS FUNC_1(FILE_INTERNAL_INFORMATION* VAR_1, fcb* VAR_2, LONG* VAR_3) {
    *VAR_3 -= sizeof(FILE_INTERNAL_INFORMATION);

    VAR_1->IndexNumber.QuadPart = FUNC_0(VAR_2->subvol, VAR_2->inode);

    return VAR_0;
}

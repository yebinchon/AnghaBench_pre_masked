
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int st_size; int st_blocks; int st_mode; } ;
struct TYPE_9__ {int atts; TYPE_3__* Vcb; TYPE_1__ inode_item; } ;
typedef TYPE_4__ fcb ;
struct TYPE_7__ {int sector_size; } ;
struct TYPE_8__ {TYPE_2__ superblock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline uint64_t FUNC_2(fcb* VAR_1) {
    if (FUNC_0(VAR_1->inode_item.st_mode))
        return 0;
    else if (VAR_1->atts & VAR_0)
        return VAR_1->inode_item.st_blocks;
    else
        return FUNC_1(VAR_1->inode_item.st_size, VAR_1->Vcb->superblock.sector_size);
}

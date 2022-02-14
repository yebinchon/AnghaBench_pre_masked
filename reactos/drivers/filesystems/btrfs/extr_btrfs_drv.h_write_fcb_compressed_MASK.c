
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int flags; } ;
struct TYPE_9__ {int Flags2; } ;
struct TYPE_13__ {TYPE_3__* Vcb; TYPE_4__ inode_item; TYPE_2__ Header; TYPE_1__* subvol; } ;
typedef TYPE_6__ fcb ;
struct TYPE_12__ {scalar_t__ compress; scalar_t__ compress_force; } ;
struct TYPE_10__ {TYPE_5__ options; } ;
struct TYPE_8__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline bool FUNC_0(fcb* VAR_4) {

    if (VAR_4->subvol->id == VAR_2 || VAR_4->Header.Flags2 & VAR_3)
        return 0;

    if (VAR_4->Vcb->options.compress_force)
        return 1;

    if (VAR_4->inode_item.flags & VAR_1)
        return 0;

    if (VAR_4->inode_item.flags & VAR_0 || VAR_4->Vcb->options.compress)
        return 1;

    return 0;
}

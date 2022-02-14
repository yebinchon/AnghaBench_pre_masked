
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* mp_obj_t ;
struct TYPE_9__ {void** ioctl; } ;
struct TYPE_10__ {int flags; TYPE_3__ u; void** writeblocks; void** readblocks; } ;
struct TYPE_8__ {TYPE_5__* drv; } ;
struct TYPE_7__ {int * type; } ;
struct TYPE_11__ {TYPE_4__ blockdev; TYPE_2__ fatfs; TYPE_1__ base; } ;
typedef TYPE_5__ fs_user_mount_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_0(fs_user_mount_t *VAR_9) {
    VAR_9->base.type = &VAR_2;
    VAR_9->blockdev.flags |= VAR_1 | VAR_0;
    VAR_9->fatfs.drv = VAR_9;
    VAR_9->blockdev.readblocks[0] = (mp_obj_t)&VAR_5;
    VAR_9->blockdev.readblocks[1] = (mp_obj_t)&VAR_4;
    VAR_9->blockdev.readblocks[2] = (mp_obj_t)VAR_7;
    VAR_9->blockdev.writeblocks[0] = (mp_obj_t)&VAR_6;
    VAR_9->blockdev.writeblocks[1] = (mp_obj_t)&VAR_4;
    VAR_9->blockdev.writeblocks[2] = (mp_obj_t)VAR_8;
    VAR_9->blockdev.u.ioctl[0] = (mp_obj_t)&VAR_3;
    VAR_9->blockdev.u.ioctl[1] = (mp_obj_t)&VAR_4;
}

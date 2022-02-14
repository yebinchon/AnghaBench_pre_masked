
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct grub_fs {int dummy; } ;
struct grub_file {struct grub_fs* fs; TYPE_2__* device; } ;
struct grub_disk {int dummy; } ;
struct grub_device {int dummy; } ;
typedef TYPE_3__* grub_disk_dev_t ;
struct TYPE_9__ {struct grub_file* file; } ;
struct TYPE_8__ {int read; } ;
struct TYPE_7__ {TYPE_1__* disk; } ;
struct TYPE_6__ {void* data; TYPE_3__* dev; } ;
typedef TYPE_4__ GrubFS ;


 void* FUNC_0 (int) ;
 int VAR_0 ;

GrubFS *FUNC_1 (struct grub_fs *VAR_1, void *VAR_2) {
 struct grub_file *VAR_3;
 GrubFS *VAR_4 = FUNC_0 (sizeof (GrubFS));

 VAR_4->file = VAR_3 = FUNC_0 (sizeof (struct grub_file));
 VAR_3->device = FUNC_0 (sizeof (struct grub_device)+1024);
 VAR_3->device->disk = FUNC_0 (sizeof (struct grub_disk));
 VAR_3->device->disk->dev = (grub_disk_dev_t)VAR_3->device;
 VAR_3->device->disk->dev->read = VAR_0;
 VAR_3->device->disk->data = VAR_2;

 VAR_3->fs = VAR_1;
 return VAR_4;
}

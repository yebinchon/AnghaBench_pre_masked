
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int grub_fs_t ;
typedef TYPE_1__* grub_file_t ;
typedef TYPE_2__* grub_disk_dev_t ;
struct TYPE_7__ {TYPE_2__* dev; struct TYPE_7__* disk; } ;
struct TYPE_6__ {int read; } ;
struct TYPE_5__ {int size; void* data; scalar_t__ offset; int fs; TYPE_4__* device; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (void*,int,int,int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

grub_file_t FUNC_6(grub_fs_t VAR_2, const char *VAR_3) {
 grub_file_t VAR_4 = FUNC_3 (1024);
 VAR_4->device = FUNC_3 (1024);
 FUNC_4 (VAR_4->device, 0, 1024);
 VAR_4->device->disk = FUNC_3 (1024);
 FUNC_4 (VAR_4->device->disk, 0, 1024);

 VAR_4->device->disk->dev = (grub_disk_dev_t)VAR_4->device;

 VAR_4->device->disk->dev->read = VAR_1;




 VAR_4->fs = VAR_2;
 return VAR_4;
}

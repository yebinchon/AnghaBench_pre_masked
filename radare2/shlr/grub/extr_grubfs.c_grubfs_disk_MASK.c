
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_disk_dev {int dummy; } ;
struct grub_disk {void* data; TYPE_1__* dev; } ;
typedef struct grub_disk* grub_disk_t ;
struct TYPE_2__ {int read; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;

grub_disk_t FUNC_1 (void *VAR_1) {
 struct grub_disk *VAR_2 = FUNC_0 (sizeof (struct grub_disk));
 VAR_2->dev = FUNC_0 (sizeof (struct grub_disk_dev));
 VAR_2->dev->read = VAR_0;
 VAR_2->data = VAR_1;
 return VAR_2;
}

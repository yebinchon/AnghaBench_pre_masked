
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_sfs_data {char* label; } ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct grub_sfs_data*) ;
 struct grub_sfs_data* FUNC_1 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_2 (grub_device_t VAR_1, char **VAR_2)
{
  struct grub_sfs_data *VAR_3;
  grub_disk_t VAR_4 = VAR_1->disk;

  VAR_3 = FUNC_1 (VAR_4);
  if (VAR_3)
    *VAR_2 = VAR_3->label;

  FUNC_0 (VAR_3);

  return VAR_0;
}

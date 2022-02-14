
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_ntfs_data {scalar_t__ uuid; } ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct grub_ntfs_data*) ;
 struct grub_ntfs_data* FUNC_3 (int ) ;
 char* FUNC_4 (char*,unsigned long long) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_5 (grub_device_t VAR_2, char **VAR_3)
{
  struct grub_ntfs_data *VAR_4;
  grub_disk_t VAR_5 = VAR_2->disk;

  FUNC_0 (VAR_1);

  VAR_4 = FUNC_3 (VAR_5);
  if (VAR_4)
    {
      *VAR_3 = FUNC_4 ("%016llx", (unsigned long long) VAR_4->uuid);
    }
  else
    *VAR_3 = ((void*)0);

  FUNC_1 (VAR_1);

  FUNC_2 (VAR_4);

  return VAR_0;
}

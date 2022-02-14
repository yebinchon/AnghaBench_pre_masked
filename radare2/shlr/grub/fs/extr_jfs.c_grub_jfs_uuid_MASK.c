
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uuid; } ;
struct grub_jfs_data {TYPE_1__ sblock; } ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct grub_jfs_data*) ;
 struct grub_jfs_data* FUNC_3 (int ) ;
 char* FUNC_4 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_5 (grub_device_t VAR_2, char **VAR_3)
{
  struct grub_jfs_data *VAR_4;
  grub_disk_t VAR_5 = VAR_2->disk;

  FUNC_0 (VAR_1);

  VAR_4 = FUNC_3 (VAR_5);
  if (VAR_4)
    {
      *VAR_3 = FUNC_4 ("%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-"
        "%02x%02x%02x%02x%02x%02x",
        VAR_4->sblock.uuid[0], VAR_4->sblock.uuid[1],
        VAR_4->sblock.uuid[2], VAR_4->sblock.uuid[3],
        VAR_4->sblock.uuid[4], VAR_4->sblock.uuid[5],
        VAR_4->sblock.uuid[6], VAR_4->sblock.uuid[7],
        VAR_4->sblock.uuid[8], VAR_4->sblock.uuid[9],
        VAR_4->sblock.uuid[10], VAR_4->sblock.uuid[11],
        VAR_4->sblock.uuid[12], VAR_4->sblock.uuid[13],
        VAR_4->sblock.uuid[14], VAR_4->sblock.uuid[15]);
    }
  else
    *VAR_3 = ((void*)0);

  FUNC_1 (VAR_1);

  FUNC_2 (VAR_4);

  return VAR_0;
}

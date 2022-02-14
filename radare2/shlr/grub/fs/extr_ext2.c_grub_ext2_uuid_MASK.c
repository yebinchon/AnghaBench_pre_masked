
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uuid; } ;
struct grub_ext2_data {TYPE_1__ sblock; } ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct grub_ext2_data* FUNC_3 (int ) ;
 int FUNC_4 (struct grub_ext2_data*) ;
 char* FUNC_5 (char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_6 (grub_device_t VAR_2, char **VAR_3)
{
  struct grub_ext2_data *VAR_4;
  grub_disk_t VAR_5 = VAR_2->disk;

  FUNC_1 (VAR_1);

  VAR_4 = FUNC_3 (VAR_5);
  if (VAR_4)
    {
      *VAR_3 = FUNC_5 ("%04x%04x-%04x-%04x-%04x-%04x%04x%04x",
        FUNC_0 (VAR_4->sblock.uuid[0]),
        FUNC_0 (VAR_4->sblock.uuid[1]),
        FUNC_0 (VAR_4->sblock.uuid[2]),
        FUNC_0 (VAR_4->sblock.uuid[3]),
        FUNC_0 (VAR_4->sblock.uuid[4]),
        FUNC_0 (VAR_4->sblock.uuid[5]),
        FUNC_0 (VAR_4->sblock.uuid[6]),
        FUNC_0 (VAR_4->sblock.uuid[7]));
    }
  else
    *VAR_3 = ((void*)0);

  FUNC_2 (VAR_1);

  FUNC_4 (VAR_4);

  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uuid; } ;
struct grub_btrfs_data {TYPE_1__ sblock; } ;
typedef int grub_err_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int FUNC_0 (int ) ;
 struct grub_btrfs_data* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct grub_btrfs_data*) ;
 char* FUNC_3 (char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static grub_err_t
FUNC_4 (grub_device_t VAR_1, char **VAR_2)
{
  struct grub_btrfs_data *VAR_3;

  *VAR_2 = ((void*)0);

  VAR_3 = FUNC_1 (VAR_1->disk);
  if (! VAR_3)
    return VAR_0;

  *VAR_2 = FUNC_3 ("%04x%04x-%04x-%04x-%04x-%04x%04x%04x",
     FUNC_0 (VAR_3->sblock.uuid[0]),
     FUNC_0 (VAR_3->sblock.uuid[1]),
     FUNC_0 (VAR_3->sblock.uuid[2]),
     FUNC_0 (VAR_3->sblock.uuid[3]),
     FUNC_0 (VAR_3->sblock.uuid[4]),
     FUNC_0 (VAR_3->sblock.uuid[5]),
     FUNC_0 (VAR_3->sblock.uuid[6]),
     FUNC_0 (VAR_3->sblock.uuid[7]));

  FUNC_2 (VAR_3);

  return VAR_0;
}

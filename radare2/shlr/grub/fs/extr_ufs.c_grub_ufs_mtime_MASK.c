
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mtime; int mtime2; } ;
struct grub_ufs_data {int be; TYPE_1__ sblock; } ;
typedef int grub_int32_t ;
typedef int grub_err_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct grub_ufs_data*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct grub_ufs_data* FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_6 (grub_device_t VAR_2, grub_int32_t *VAR_3)
{
  struct grub_ufs_data *VAR_4 = 0;

  FUNC_0 (VAR_1);

  VAR_4 = FUNC_5 (VAR_2->disk);
  if (!VAR_4)
    *VAR_3 = 0;
  else



    *VAR_3 = FUNC_3 (VAR_4->sblock.mtime, VAR_4->be);


  FUNC_1 (VAR_1);

  FUNC_2 (VAR_4);

  return VAR_0;
}

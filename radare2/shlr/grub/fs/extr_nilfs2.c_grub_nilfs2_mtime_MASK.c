
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_mtime; } ;
struct grub_nilfs2_data {TYPE_1__ sblock; } ;
typedef scalar_t__ grub_int32_t ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct grub_nilfs2_data*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct grub_nilfs2_data* FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_5 (grub_device_t VAR_2, grub_int32_t * VAR_3)
{
  struct grub_nilfs2_data *VAR_4;
  grub_disk_t VAR_5 = VAR_2->disk;

  FUNC_0 (VAR_1);

  VAR_4 = FUNC_4 (VAR_5);
  if (!VAR_4)
    *VAR_3 = 0;
  else
    *VAR_3 = (grub_int32_t) FUNC_3 (VAR_4->sblock.s_mtime);

  FUNC_1 (VAR_1);

  FUNC_2 (VAR_4);

  return VAR_0;
}

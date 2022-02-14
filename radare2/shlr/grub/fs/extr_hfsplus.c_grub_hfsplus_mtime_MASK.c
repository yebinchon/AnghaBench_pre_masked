
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int utime; } ;
struct grub_hfsplus_data {TYPE_1__ volheader; } ;
typedef scalar_t__ grub_int32_t ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct grub_hfsplus_data*) ;
 struct grub_hfsplus_data* FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_5 (grub_device_t VAR_2, grub_int32_t *VAR_3)
{
  struct grub_hfsplus_data *VAR_4;
  grub_disk_t VAR_5 = VAR_2->disk;

  FUNC_1 (VAR_1);

  VAR_4 = FUNC_4 (VAR_5);
  if (!VAR_4)
    *VAR_3 = 0;
  else
    *VAR_3 = FUNC_0 (VAR_4->volheader.utime) - 2082844800;

  FUNC_2 (VAR_1);

  FUNC_3 (VAR_4);

  return VAR_0;

}

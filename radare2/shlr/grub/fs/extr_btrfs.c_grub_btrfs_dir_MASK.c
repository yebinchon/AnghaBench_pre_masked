
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_btrfs_data {int dummy; } ;
typedef scalar_t__ grub_err_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 scalar_t__ VAR_0 ;
 struct grub_btrfs_data* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct grub_btrfs_data*) ;

__attribute__((used)) static grub_err_t
FUNC_2 (grub_device_t VAR_2,
                const char *VAR_3 ,
                int (*VAR_4) (const char *VAR_5,
                             const struct grub_dirhook_info *VAR_6))
{
  struct grub_btrfs_data *VAR_7 = FUNC_0 (VAR_2->disk);
  if (VAR_1)
    return VAR_1;

  FUNC_1 (VAR_7);

  return VAR_0;
}

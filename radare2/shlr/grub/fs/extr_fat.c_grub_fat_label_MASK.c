
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_fat_data {int attr; } ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct grub_fat_data*,int ,char**) ;
 int VAR_3 ;
 struct grub_fat_data* FUNC_4 (int ) ;
 int FUNC_5 (struct grub_fat_data*) ;
 int VAR_4 ;

__attribute__((used)) static grub_err_t
FUNC_6 (grub_device_t VAR_5, char **VAR_6)
{
  struct grub_fat_data *VAR_7;
  grub_disk_t VAR_8 = VAR_5->disk;

  FUNC_0 (VAR_4);

  VAR_7 = FUNC_4 (VAR_8);
  if (! VAR_7)
    goto fail;

  if (! (VAR_7->attr & VAR_1))
    {
      FUNC_2 (VAR_0, "not a directory");
      return 0;
    }

  *VAR_6 = 0;

  FUNC_3 (VAR_8, VAR_7, VAR_3, VAR_6);

 fail:

  FUNC_1 (VAR_4);

  FUNC_5 (VAR_7);

  return VAR_2;
}

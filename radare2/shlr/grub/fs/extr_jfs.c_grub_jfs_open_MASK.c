
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int mode; } ;
struct grub_jfs_data {TYPE_2__ currinode; } ;
struct grub_file {int size; struct grub_jfs_data* data; TYPE_1__* device; } ;
typedef scalar_t__ grub_err_t ;
struct TYPE_3__ {int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct grub_jfs_data*) ;
 int FUNC_4 (struct grub_jfs_data*,char const*) ;
 struct grub_jfs_data* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static grub_err_t
FUNC_8 (struct grub_file *VAR_5, const char *VAR_6)
{
  struct grub_jfs_data *VAR_7;

  FUNC_0 (VAR_4);

  VAR_7 = FUNC_5 (VAR_5->device->disk);
  if (!VAR_7)
    goto fail;

  FUNC_4 (VAR_7, VAR_6);
  if (VAR_3)
    goto fail;


  if (! ((FUNC_6 (VAR_7->currinode.mode)
   & VAR_1) == VAR_2))
    {
      FUNC_2 (VAR_0, "not a regular file");
      goto fail;
    }

  VAR_5->data = VAR_7;
  VAR_5->size = FUNC_7 (VAR_7->currinode.size);

  return 0;

 fail:

  FUNC_1 (VAR_4);

  FUNC_3 (VAR_7);

  return VAR_3;
}

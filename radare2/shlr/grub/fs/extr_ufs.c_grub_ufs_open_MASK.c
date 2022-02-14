
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_ufs_data {int dummy; } ;
struct grub_file {int size; struct grub_ufs_data* data; TYPE_1__* device; } ;
typedef scalar_t__ grub_err_t ;
struct TYPE_2__ {int disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct grub_ufs_data*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct grub_ufs_data*) ;
 int FUNC_3 (struct grub_ufs_data*,char const*) ;
 struct grub_ufs_data* FUNC_4 (int ) ;
 int FUNC_5 (struct grub_ufs_data*,int,int ) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_file *VAR_3, const char *VAR_4)
{
  struct grub_ufs_data *VAR_5;
  VAR_5 = FUNC_4 (VAR_3->device->disk);
  if (!VAR_5)
    return VAR_2;

  FUNC_5 (VAR_5, 2, 0);
  if (VAR_2)
    {
      FUNC_2 (VAR_5);
      return VAR_2;
    }

  if (!VAR_4 || VAR_4[0] != '/')
    {
      FUNC_1 (VAR_0, "bad filename");
      return VAR_2;
    }

  FUNC_3 (VAR_5, VAR_4);
  if (VAR_2)
    {
      FUNC_2 (VAR_5);
      return VAR_2;
    }

  VAR_3->data = VAR_5;
  VAR_3->size = FUNC_0 (VAR_5);

  return VAR_1;
}

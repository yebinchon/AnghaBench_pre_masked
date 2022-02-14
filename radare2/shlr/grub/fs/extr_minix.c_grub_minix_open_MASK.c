
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_minix_data {int dummy; } ;
struct grub_file {int size; struct grub_minix_data* data; TYPE_1__* device; } ;
typedef scalar_t__ grub_err_t ;
struct TYPE_2__ {int disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct grub_minix_data*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct grub_minix_data*) ;
 int FUNC_3 (struct grub_minix_data*,char const*) ;
 struct grub_minix_data* FUNC_4 (int ) ;
 int FUNC_5 (struct grub_minix_data*,int ) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_file *VAR_4, const char *VAR_5)
{
  struct grub_minix_data *VAR_6;
  VAR_6 = FUNC_4 (VAR_4->device->disk);
  if (!VAR_6)
    return VAR_3;


  FUNC_5 (VAR_6, VAR_2);
  if (VAR_3)
    {
      FUNC_2 (VAR_6);
      return VAR_3;
    }

  if (!VAR_5 || VAR_5[0] != '/')
    {
      FUNC_1 (VAR_0, "bad filename");
      return VAR_3;
    }



  FUNC_3 (VAR_6, VAR_5);
  if (VAR_3)
    {
      FUNC_2 (VAR_6);
      return VAR_3;
    }

  VAR_4->data = VAR_6;
  VAR_4->size = FUNC_0 (VAR_6);

  return VAR_1;
}

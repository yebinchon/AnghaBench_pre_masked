
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_fat_data {int attr; int file_size; } ;
typedef TYPE_2__* grub_file_t ;
typedef scalar_t__ grub_err_t ;
struct TYPE_5__ {int size; struct grub_fat_data* data; TYPE_1__* device; } ;
struct TYPE_4__ {int disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ,struct grub_fat_data*,char*,int ,int ) ;
 struct grub_fat_data* FUNC_4 (int ) ;
 int FUNC_5 (struct grub_fat_data*) ;
 int VAR_4 ;

__attribute__((used)) static grub_err_t
FUNC_6 (grub_file_t VAR_5, const char *VAR_6)
{
  struct grub_fat_data *VAR_7 = 0;
  char *VAR_8 = (char *) VAR_6;

  FUNC_0 (VAR_4);

  VAR_7 = FUNC_4 (VAR_5->device->disk);
  if (! VAR_7)
    goto fail;

  do
    {
      VAR_8 = FUNC_3 (VAR_5->device->disk, VAR_7, VAR_8, 0, 0);
      if (VAR_3 != VAR_1)
 goto fail;
    }
  while (VAR_8);

  if (VAR_7->attr & VAR_2)
    {
      FUNC_2 (VAR_0, "not a file");
      goto fail;
    }

  VAR_5->data = VAR_7;
  VAR_5->size = VAR_7->file_size;

  return VAR_1;

 fail:

  FUNC_5 (VAR_7);

  FUNC_1 (VAR_4);

  return VAR_3;
}

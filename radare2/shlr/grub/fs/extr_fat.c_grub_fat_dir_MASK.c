
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char grub_fat_data ;
typedef int grub_size_t ;
typedef scalar_t__ grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (int ,char*,char*,int (*) (char const*,struct grub_dirhook_info const*,void*),void*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static grub_err_t
FUNC_8 (grub_device_t VAR_3, const char *VAR_4,
       int (*VAR_5) (const char *VAR_6,
      const struct grub_dirhook_info *VAR_7, void *VAR_8),
       void *VAR_9)
{
  struct grub_fat_data *VAR_10 = 0;
  grub_disk_t VAR_11 = VAR_3->disk;
  grub_size_t VAR_12;
  char *VAR_13 = 0;
  char *VAR_14;

  FUNC_0 (VAR_2);

  VAR_10 = FUNC_3 (VAR_11);
  if (! VAR_10)
    goto fail;


  VAR_12 = FUNC_7 (VAR_4);
  VAR_13 = FUNC_5 (VAR_12 + 1 + 1);
  if (! VAR_13)
    goto fail;
  FUNC_6 (VAR_13, VAR_4, VAR_12);
  VAR_14 = VAR_13 + VAR_12;
  if (VAR_12>0 && VAR_4[VAR_12 - 1] != '/')
    *VAR_14++ = '/';
  *VAR_14 = '\0';
  VAR_14 = VAR_13;

  do
    {
      VAR_14 = FUNC_2 (VAR_11, VAR_10, VAR_14, VAR_5, VAR_9);
    }
  while (VAR_14 && VAR_1 == VAR_0);

 fail:

  FUNC_4 (VAR_13);
  FUNC_4 (VAR_10);

  FUNC_1 (VAR_2);

  return VAR_1;
}

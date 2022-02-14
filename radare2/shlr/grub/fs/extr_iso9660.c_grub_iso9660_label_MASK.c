
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ volname; } ;
struct grub_iso9660_data {TYPE_1__ voldesc; scalar_t__ joliet; } ;
typedef int grub_uint16_t ;
typedef int grub_err_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct grub_iso9660_data*) ;
 char* FUNC_1 (int *,int) ;
 struct grub_iso9660_data* FUNC_2 (int ) ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static grub_err_t
FUNC_4 (grub_device_t VAR_1, char **VAR_2)
{
  struct grub_iso9660_data *VAR_3;
  VAR_3 = FUNC_2 (VAR_1->disk);

  if (VAR_3)
    {
      if (VAR_3->joliet)
        *VAR_2 = FUNC_1
                 ((grub_uint16_t *) &VAR_3->voldesc.volname, 16);
      else
        *VAR_2 = FUNC_3 ((char *) VAR_3->voldesc.volname, 32);
      FUNC_0 (VAR_3);
    }
  else
    *VAR_2 = 0;

  return VAR_0;
}

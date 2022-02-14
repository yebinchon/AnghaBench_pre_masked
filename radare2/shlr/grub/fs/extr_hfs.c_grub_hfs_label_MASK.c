
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * volname; } ;
struct grub_hfs_data {TYPE_1__ sblock; } ;
typedef int grub_err_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct grub_hfs_data*) ;
 struct grub_hfs_data* FUNC_1 (int ) ;
 char* FUNC_2 (char*,int ) ;

__attribute__((used)) static grub_err_t
FUNC_3 (grub_device_t VAR_1, char **VAR_2)
{
  struct grub_hfs_data *VAR_3;

  VAR_3 = FUNC_1 (VAR_1->disk);

  if (VAR_3)
    *VAR_2 = FUNC_2 ((char *) (VAR_3->sblock.volname + 1),
      *VAR_3->sblock.volname);
  else
    *VAR_2 = 0;

  FUNC_0 (VAR_3);
  return VAR_0;
}

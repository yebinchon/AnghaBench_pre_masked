
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ident; } ;
struct grub_udf_data {TYPE_1__ lvd; } ;
typedef int grub_err_t ;
typedef TYPE_2__* grub_device_t ;
struct TYPE_5__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct grub_udf_data*) ;
 char* FUNC_1 (char*) ;
 struct grub_udf_data* FUNC_2 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_3 (grub_device_t VAR_1, char **VAR_2)
{
  struct grub_udf_data *VAR_3;
  VAR_3 = FUNC_2 (VAR_1->disk);

  if (VAR_3)
    {
      *VAR_2 = FUNC_1 ((char *) &VAR_3->lvd.ident[1]);
      FUNC_0 (VAR_3);
    }
  else
    *VAR_2 = 0;

  return VAR_0;
}

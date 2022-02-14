
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ grub_disk_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_5__ {scalar_t__ net; scalar_t__ disk; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

grub_device_t
FUNC_6 (const char *VAR_1)
{
  grub_disk_t VAR_2 = 0;
  grub_device_t VAR_3 = 0;

  if (! VAR_1)
    {
      VAR_1 = FUNC_2 ("root");
      if (*VAR_1 == '\0')
 {
   FUNC_3 (VAR_0, "no device is set");
   goto fail;
 }
    }

  VAR_3 = FUNC_5 (sizeof (*VAR_3));
  if (! VAR_3)
    goto fail;


  VAR_2 = FUNC_1 (VAR_1);
  if (! VAR_2)
    goto fail;

  VAR_3->disk = VAR_2;
  VAR_3->net = 0;

  return VAR_3;

 fail:
  if (VAR_2)
    FUNC_0 (VAR_2);

  FUNC_4 (VAR_3);

  return 0;
}

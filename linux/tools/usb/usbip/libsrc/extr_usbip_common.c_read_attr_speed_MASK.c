
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udev_device {int dummy; } ;
struct TYPE_2__ {int num; int * speed; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*,int *) ;
 char* FUNC_2 (struct udev_device*,char*) ;

int FUNC_3(struct udev_device *VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_2(VAR_2, "speed");
 if (!VAR_3) {
  FUNC_0("udev_device_get_sysattr_value failed");
  goto err;
 }

 for (int VAR_4 = 0; VAR_1[VAR_4].speed != ((void*)0); VAR_4++) {
  if (!FUNC_1(VAR_3, VAR_1[VAR_4].speed))
   return VAR_1[VAR_4].num;
 }

err:

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udev_device {int dummy; } ;
typedef int **** dirent ;
struct TYPE_2__ {int hc_device; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ******) ;
 int FUNC_2 (int ,int *******,int ,int *) ;
 struct udev_device* FUNC_3 (int ) ;
 int FUNC_4 (struct udev_device*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct dirent **VAR_2;
 struct udev_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0->hc_device);
 if (VAR_3 == ((void*)0))
  return -1;

 VAR_4 = FUNC_2(FUNC_4(VAR_3), &VAR_2, VAR_1, ((void*)0));
 if (VAR_4 < 0)
  FUNC_0("scandir failed");
 else {
  for (int VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   FUNC_1(VAR_2[VAR_5]);
  FUNC_1(VAR_2);
 }

 return VAR_4;
}

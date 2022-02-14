
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_host_driver {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usbip_host_driver*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

int FUNC_4(struct usbip_host_driver *VAR_1)
{
 int VAR_2;

 VAR_0 = FUNC_2();
 if (!VAR_0) {
  FUNC_0("udev_new failed");
  return -1;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  goto err;
 return 0;
err:
 FUNC_3(VAR_0);
 return -1;
}

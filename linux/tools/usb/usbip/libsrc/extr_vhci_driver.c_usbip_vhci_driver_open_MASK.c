
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usbip_vhci_driver {int dummy; } ;
struct usbip_imported_device {int dummy; } ;
struct udev_device {int dummy; } ;
struct TYPE_4__ {int nports; int ncontrollers; struct udev_device* hc_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct udev_device*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_2 ;
 struct udev_device* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct udev_device*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 TYPE_1__* VAR_3 ;

int FUNC_11(void)
{
 int VAR_4;
 struct udev_device *VAR_5;

 VAR_2 = FUNC_9();
 if (!VAR_2) {
  FUNC_2("udev_new failed");
  return -1;
 }


 VAR_5 =
  FUNC_7(VAR_2,
             VAR_0,
             VAR_1);
 if (!VAR_5) {
  FUNC_2("udev_device_new_from_subsystem_sysname failed");
  goto err;
 }

 VAR_4 = FUNC_5(VAR_5);
 if (VAR_4 <= 0) {
  FUNC_2("no available ports");
  goto err;
 }
 FUNC_1("available ports: %d", VAR_4);

 VAR_3 = FUNC_0(1, sizeof(struct usbip_vhci_driver) +
   VAR_4 * sizeof(struct usbip_imported_device));
 if (!VAR_3) {
  FUNC_2("vhci_driver allocation failed");
  goto err;
 }

 VAR_3->nports = VAR_4;
 VAR_3->hc_device = VAR_5;
 VAR_3->ncontrollers = FUNC_4();
 FUNC_1("available controllers: %d", VAR_3->ncontrollers);

 if (VAR_3->ncontrollers <=0) {
  FUNC_2("no available usb controllers");
  goto err;
 }

 if (FUNC_6())
  goto err;

 return 0;

err:
 FUNC_8(VAR_5);

 if (VAR_3)
  FUNC_3(VAR_3);

 VAR_3 = ((void*)0);

 FUNC_10(VAR_2);

 return -1;
}

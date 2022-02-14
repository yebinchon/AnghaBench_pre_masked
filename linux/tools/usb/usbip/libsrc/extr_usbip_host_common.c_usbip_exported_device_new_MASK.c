
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbip_usb_interface {int dummy; } ;
struct TYPE_5__ {scalar_t__ (* read_device ) (scalar_t__,TYPE_2__*) ;int (* read_interface ) (TYPE_2__*,int,int *) ;} ;
struct usbip_host_driver {TYPE_1__ ops; } ;
struct TYPE_6__ {int bNumInterfaces; } ;
struct usbip_exported_device {scalar_t__ status; scalar_t__ sudev; int * uinf; TYPE_2__ udev; } ;


 struct usbip_exported_device* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct usbip_exported_device*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 struct usbip_exported_device* FUNC_5 (struct usbip_exported_device*,size_t) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int ,char const*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static
struct usbip_exported_device *FUNC_10(
  struct usbip_host_driver *VAR_1, const char *VAR_2)
{
 struct usbip_exported_device *VAR_3 = ((void*)0);
 struct usbip_exported_device *VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(1, sizeof(struct usbip_exported_device));

 VAR_3->sudev =
  FUNC_8(VAR_0, VAR_2);
 if (!VAR_3->sudev) {
  FUNC_2("udev_device_new_from_syspath: %s", VAR_2);
  goto err;
 }

 if (VAR_1->ops.read_device(VAR_3->sudev, &VAR_3->udev) < 0)
  goto err;

 VAR_3->status = FUNC_4(&VAR_3->udev);
 if (VAR_3->status < 0)
  goto err;


 VAR_5 = sizeof(struct usbip_exported_device) +
  VAR_3->udev.bNumInterfaces * sizeof(struct usbip_usb_interface);

 VAR_4 = VAR_3;
 VAR_3 = FUNC_5(VAR_3, VAR_5);
 if (!VAR_3) {
  VAR_3 = VAR_4;
  FUNC_1("realloc failed");
  goto err;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->udev.bNumInterfaces; VAR_6++) {

  if (!VAR_1->ops.read_interface)
   break;
  VAR_1->ops.read_interface(&VAR_3->udev, VAR_6, &VAR_3->uinf[VAR_6]);
 }

 return VAR_3;
err:
 if (VAR_3->sudev)
  FUNC_9(VAR_3->sudev);
 if (VAR_3)
  FUNC_3(VAR_3);

 return ((void*)0);
}

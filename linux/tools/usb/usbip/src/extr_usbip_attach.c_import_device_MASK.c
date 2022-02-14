
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usbip_usb_device {int speed; int devnum; int busnum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,int,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(int VAR_2, struct usbip_usb_device *VAR_3)
{
 int VAR_4;
 int VAR_5;
 uint32_t VAR_6 = VAR_3->speed;

 VAR_4 = FUNC_4();
 if (VAR_4 < 0) {
  FUNC_1("open vhci_driver");
  goto err_out;
 }

 do {
  VAR_5 = FUNC_5(VAR_6);
  if (VAR_5 < 0) {
   FUNC_1("no free port");
   goto err_driver_close;
  }

  FUNC_0("got free port %d", VAR_5);

  VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3->busnum,
           VAR_3->devnum, VAR_3->speed);
  if (VAR_4 < 0 && VAR_1 != VAR_0) {
   FUNC_1("import device");
   goto err_driver_close;
  }
 } while (VAR_4 < 0);

 FUNC_3();

 return VAR_5;

err_driver_close:
 FUNC_3();
err_out:
 return -1;
}

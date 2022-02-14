
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbip_imported_device {int dummy; } ;
struct TYPE_2__ {int nports; struct usbip_imported_device* idev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct usbip_imported_device*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_2;
 struct usbip_imported_device *VAR_3;
 int VAR_4;

 if (FUNC_3(VAR_0))
  FUNC_0("failed to open %s", VAR_0);

 VAR_4 = FUNC_5();
 if (VAR_4 < 0) {
  FUNC_0("open vhci_driver");
  goto err_names_free;
 }

 FUNC_1("Imported USB devices\n");
 FUNC_1("====================\n");

 for (VAR_2 = 0; VAR_2 < VAR_1->nports; VAR_2++) {
  VAR_3 = &VAR_1->idev[VAR_2];

  if (FUNC_6(VAR_3) < 0)
   goto err_driver_close;
 }

 FUNC_4();
 FUNC_2();

 return VAR_4;

err_driver_close:
 FUNC_4();
err_names_free:
 FUNC_2();
 return -1;
}

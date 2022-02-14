
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintf ;
typedef int uint16_t ;
typedef int udev ;
struct usbip_usb_interface {unsigned int ndev; char* busid; char* path; int bNumInterfaces; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int idProduct; int idVendor; } ;
struct usbip_usb_device {unsigned int ndev; char* busid; char* path; int bNumInterfaces; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int idProduct; int idVendor; } ;
struct op_devlist_reply {unsigned int ndev; char* busid; char* path; int bNumInterfaces; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int idProduct; int idVendor; } ;
typedef int reply ;
typedef int product_name ;
typedef int class_name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct usbip_usb_interface*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct usbip_usb_interface*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,int ,int ,int ) ;
 int FUNC_7 (char*,int,int ,int ) ;
 int FUNC_8 (int ,struct usbip_usb_interface*) ;
 int FUNC_9 (int ,struct usbip_usb_interface*) ;
 int FUNC_10 (int,struct usbip_usb_interface*,int) ;
 int FUNC_11 (int,int *,int*) ;
 int FUNC_12 (int,int ,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(char *VAR_2, int VAR_3)
{
 char VAR_4[100];
 char VAR_5[100];
 struct op_devlist_reply VAR_6;
 uint16_t VAR_7 = VAR_0;
 struct usbip_usb_device VAR_8;
 struct usbip_usb_interface VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = FUNC_12(VAR_3, VAR_1, 0);
 if (VAR_11 < 0) {
  FUNC_1("usbip_net_send_op_common failed");
  return -1;
 }

 VAR_11 = FUNC_11(VAR_3, &VAR_7, &VAR_13);
 if (VAR_11 < 0) {
  FUNC_2("Exported Device List Request failed - %s\n",
      FUNC_13(VAR_13));
  return -1;
 }

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_11 = FUNC_10(VAR_3, &VAR_6, sizeof(VAR_6));
 if (VAR_11 < 0) {
  FUNC_1("usbip_net_recv_op_devlist failed");
  return -1;
 }
 FUNC_0(0, &VAR_6);
 FUNC_1("exportable devices: %d\n", VAR_6.ndev);

 if (VAR_6.ndev == 0) {
  FUNC_3("no exportable devices found on %s", VAR_2);
  return 0;
 }

 FUNC_5("Exportable USB devices\n");
 FUNC_5("======================\n");
 FUNC_5(" - %s\n", VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_6.ndev; VAR_10++) {
  FUNC_4(&VAR_8, 0, sizeof(VAR_8));
  VAR_11 = FUNC_10(VAR_3, &VAR_8, sizeof(VAR_8));
  if (VAR_11 < 0) {
   FUNC_1("usbip_net_recv failed: usbip_usb_device[%d]", VAR_10);
   return -1;
  }
  FUNC_8(0, &VAR_8);

  FUNC_7(VAR_4, sizeof(VAR_4),
     VAR_8.idVendor, VAR_8.idProduct);
  FUNC_6(VAR_5, sizeof(VAR_5),
          VAR_8.bDeviceClass, VAR_8.bDeviceSubClass,
          VAR_8.bDeviceProtocol);
  FUNC_5("%11s: %s\n", VAR_8.busid, VAR_4);
  FUNC_5("%11s: %s\n", "", VAR_8.path);
  FUNC_5("%11s: %s\n", "", VAR_5);

  for (VAR_12 = 0; VAR_12 < VAR_8.bNumInterfaces; VAR_12++) {
   VAR_11 = FUNC_10(VAR_3, &VAR_9, sizeof(VAR_9));
   if (VAR_11 < 0) {
    FUNC_2("usbip_net_recv failed: usbip_usb_intf[%d]",
      VAR_12);

    return -1;
   }
   FUNC_9(0, &VAR_9);

   FUNC_6(VAR_5, sizeof(VAR_5),
     VAR_9.bInterfaceClass,
     VAR_9.bInterfaceSubClass,
     VAR_9.bInterfaceProtocol);
   FUNC_5("%11s: %2d - %s\n", "", VAR_12, VAR_5);
  }

  FUNC_5("\n");
 }

 return 0;
}

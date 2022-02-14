
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ vid; scalar_t__ pid; int lower_speed; scalar_t__ speed; scalar_t__ port; } ;
typedef TYPE_4__ usb_device_props ;
typedef int conn_info_v2 ;
typedef int conn_info ;
struct TYPE_13__ {scalar_t__ DeviceIsSuperSpeedCapableOrHigher; scalar_t__ DeviceIsSuperSpeedPlusCapableOrHigher; scalar_t__ DeviceIsOperatingAtSuperSpeedOrHigher; scalar_t__ DeviceIsOperatingAtSuperSpeedPlusOrHigher; } ;
struct TYPE_12__ {int Usb300; } ;
struct TYPE_11__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_15__ {int Length; TYPE_3__ Flags; TYPE_2__ SupportedUsbProtocols; void* ConnectionIndex; scalar_t__ Speed; TYPE_1__ DeviceDescriptor; } ;
typedef TYPE_5__ USB_NODE_CONNECTION_INFORMATION_EX_V2 ;
typedef TYPE_5__ USB_NODE_CONNECTION_INFORMATION_EX ;
typedef void* ULONG ;
typedef int PVOID ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int DEVINST ;
typedef scalar_t__ CONFIGRET ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (scalar_t__,int ,TYPE_5__*,int,TYPE_5__*,int,int*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_6 (int ,int ,int *,int ,int*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_9(char* VAR_17, char* VAR_18, usb_device_props* VAR_19)
{
 BOOL VAR_20 = VAR_4;
 CONFIGRET VAR_21;
 HANDLE VAR_22 = VAR_8;
 DWORD VAR_23;
 DEVINST VAR_24;
 USB_NODE_CONNECTION_INFORMATION_EX VAR_25;
 USB_NODE_CONNECTION_INFORMATION_EX_V2 VAR_26;
 FUNC_3(VAR_1, VAR_3);

 if ((VAR_17 == ((void*)0)) || (VAR_18 == ((void*)0)) || (VAR_19 == ((void*)0)) ||
  (&FUNC_6 == ((void*)0))) {
  goto out;
 }

 VAR_21 = FUNC_0(&VAR_24, VAR_18, 0);
 if (VAR_21 != VAR_2) {
  FUNC_8("Could not get device instance handle for '%s': CR error %d", VAR_18, VAR_21);
  goto out;
 }

 VAR_19->port = 0;
 VAR_23 = sizeof(VAR_19->port);
 VAR_21 = FUNC_6(VAR_24, VAR_0, ((void*)0), (PVOID)&VAR_19->port, &VAR_23, 0);
 if (VAR_21 != VAR_2) {
  FUNC_8("Could not get port for '%s': CR error %d", VAR_18, VAR_21);
  goto out;
 }

 VAR_22 = FUNC_1(VAR_17, VAR_7, VAR_6, ((void*)0), VAR_11, VAR_5, ((void*)0));
 if (VAR_22 == VAR_8) {
  FUNC_8("Could not open hub %s: %s", VAR_17, FUNC_4());
  goto out;
 }
 VAR_23 = sizeof(VAR_25);
 FUNC_5(&VAR_25, 0, VAR_23);
 VAR_25.ConnectionIndex = (ULONG)VAR_19->port;

 if (!FUNC_2(VAR_22, VAR_9, &VAR_25, VAR_23, &VAR_25, VAR_23, &VAR_23, ((void*)0))) {
  FUNC_8("Could not get node connection information for '%s': %s", VAR_18, FUNC_4());
  goto out;
 }




 if ((VAR_25.DeviceDescriptor.idVendor != 0) || (VAR_25.DeviceDescriptor.idProduct != 0)) {
  VAR_19->vid = VAR_25.DeviceDescriptor.idVendor;
  VAR_19->pid = VAR_25.DeviceDescriptor.idProduct;
  VAR_19->speed = VAR_25.Speed + 1;
  VAR_20 = VAR_12;
 }


 if (VAR_16 >= VAR_15) {
  VAR_23 = sizeof(VAR_26);
  FUNC_5(&VAR_26, 0, VAR_23);
  VAR_26 = (ULONG)VAR_19->port;
  VAR_26 = VAR_23;
  VAR_26 = 1;
  if (!FUNC_2(VAR_22, VAR_10, &VAR_26, VAR_23, &VAR_26, VAR_23, &VAR_23, ((void*)0))) {
   FUNC_8("Could not get node connection information (V2) for device '%s': %s", VAR_18, FUNC_4());
  } else if (VAR_26) {
   VAR_19->speed = VAR_14;
  } else if (VAR_26) {
   VAR_19->speed = VAR_13;
  } else if (VAR_26) {
   VAR_19->lower_speed = 2;
  } else if (VAR_26) {
   VAR_19->lower_speed = 1;
  }
 }

out:
 FUNC_7(VAR_22);
 return VAR_20;
}

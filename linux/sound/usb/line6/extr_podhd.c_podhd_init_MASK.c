
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* properties; int ifcdev; } ;
struct usb_line6_podhd {TYPE_2__ line6; } ;
struct usb_line6 {int startup_work; int card; int usbdev; int startup; int disconnect; } ;
struct usb_interface {int dummy; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct TYPE_3__ {int capabilities; int ctrl_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (struct usb_line6*,int *) ;
 struct usb_line6_podhd* FUNC_2 (struct usb_line6*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,struct usb_interface*,int *) ;
 struct usb_interface* FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct usb_line6 *VAR_13,
        const struct usb_device_id *VAR_14)
{
 int VAR_15;
 struct usb_line6_podhd *VAR_16 = FUNC_2(VAR_13);
 struct usb_interface *VAR_17;

 VAR_13->disconnect = VAR_8;
 VAR_13->startup = VAR_11;

 if (VAR_16->line6.properties->capabilities & VAR_1) {

  VAR_17 = FUNC_8(VAR_13->usbdev,
     VAR_16->line6.properties->ctrl_if);
  if (!VAR_17) {
   FUNC_0(VAR_16->line6.ifcdev, "interface %d not found\n",
    VAR_16->line6.properties->ctrl_if);
   return -VAR_0;
  }

  VAR_15 = FUNC_7(&VAR_9, VAR_17, ((void*)0));
  if (VAR_15 != 0) {
   FUNC_0(VAR_16->line6.ifcdev, "can't claim interface %d, error %d\n",
    VAR_16->line6.properties->ctrl_if, VAR_15);
   return VAR_15;
  }
 }

 if (VAR_16->line6.properties->capabilities & VAR_2) {

  VAR_15 = FUNC_5(VAR_13->card, &VAR_7);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (VAR_16->line6.properties->capabilities & VAR_3) {

  VAR_15 = FUNC_1(VAR_13,
   (VAR_14->driver_info == VAR_4 ||
   VAR_14->driver_info == VAR_5) ? &VAR_12 :
   &VAR_10);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (!(VAR_16->line6.properties->capabilities & VAR_2)) {

  return FUNC_6(VAR_13->card);
 }


 FUNC_4(&VAR_13->startup_work,
         FUNC_3(VAR_6));
 return 0;
}

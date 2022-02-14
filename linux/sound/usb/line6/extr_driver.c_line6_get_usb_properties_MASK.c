
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {int iso_buffers; int intervals_per_second; int max_packet_size; int interval; int ifcdev; struct line6_properties* properties; struct usb_device* usbdev; } ;
struct TYPE_2__ {int wMaxPacketSize; int bInterval; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_device {scalar_t__ speed; struct usb_host_endpoint** ep_in; } ;
struct line6_properties {int capabilities; int ep_ctrl_r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct usb_line6 *VAR_9)
{
 struct usb_device *VAR_10 = VAR_9->usbdev;
 const struct line6_properties *VAR_11 = VAR_9->properties;
 int VAR_12;
 struct usb_host_endpoint *VAR_13 = ((void*)0);

 if (VAR_11->capabilities & VAR_0) {
  if (VAR_11->capabilities & VAR_1) {
   VAR_12 = FUNC_4(VAR_9->usbdev,
    VAR_9->properties->ep_ctrl_r);
  } else {
   VAR_12 = FUNC_3(VAR_9->usbdev,
    VAR_9->properties->ep_ctrl_r);
  }
  VAR_13 = VAR_10->ep_in[FUNC_2(VAR_12)];
 }


 if (VAR_13) {
  VAR_9->interval = VAR_13->desc.bInterval;
  VAR_9->max_packet_size = FUNC_1(VAR_13->desc.wMaxPacketSize);
 } else {
  if (VAR_11->capabilities & VAR_0) {
   FUNC_0(VAR_9->ifcdev,
    "endpoint not available, using fallback values");
  }
  VAR_9->interval = VAR_2;
  VAR_9->max_packet_size = VAR_3;
 }


 if (VAR_10->speed == VAR_8) {
  VAR_9->intervals_per_second = VAR_6;
  VAR_9->iso_buffers = VAR_7;
 } else {
  VAR_9->intervals_per_second = VAR_4;
  VAR_9->iso_buffers = VAR_5;
 }
}

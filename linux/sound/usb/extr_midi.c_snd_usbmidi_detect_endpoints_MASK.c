
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_endpoint_descriptor {int bInterval; } ;
struct snd_usb_midi_endpoint_info {int in_interval; void* in_ep; int out_interval; void* out_ep; } ;
struct snd_usb_midi {struct usb_interface* iface; int usb_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct usb_endpoint_descriptor* FUNC_1 (struct usb_host_interface*,int) ;
 struct usb_interface_descriptor* FUNC_2 (struct usb_host_interface*) ;
 int FUNC_3 (struct snd_usb_midi*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor*) ;
 void* FUNC_6 (struct usb_endpoint_descriptor*) ;
 int FUNC_7 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_9(struct snd_usb_midi *VAR_1,
     struct snd_usb_midi_endpoint_info *VAR_2,
     int VAR_3)
{
 struct usb_interface *VAR_4;
 struct usb_host_interface *VAR_5;
 struct usb_interface_descriptor *VAR_6;
 struct usb_endpoint_descriptor *VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10 = 0;

 if (FUNC_0(VAR_1->usb_id) == 0x0582)
  FUNC_3(VAR_1);

 if (VAR_2[0].out_ep || VAR_2[0].in_ep)
  return 0;

 VAR_4 = VAR_1->iface;
 if (!VAR_4 || VAR_4->num_altsetting < 1)
  return -VAR_0;
 VAR_5 = VAR_4->cur_altsetting;
 VAR_6 = FUNC_2(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_6->bNumEndpoints; ++VAR_8) {
  VAR_7 = FUNC_1(VAR_5, VAR_8);
  if (!FUNC_7(VAR_7) &&
      !FUNC_8(VAR_7))
   continue;
  if (VAR_9 < VAR_3 &&
      FUNC_5(VAR_7)) {
   VAR_2[VAR_9].out_ep = FUNC_6(VAR_7);
   if (FUNC_8(VAR_7))
    VAR_2[VAR_9].out_interval = VAR_7->bInterval;
   ++VAR_9;
  }
  if (VAR_10 < VAR_3 &&
      FUNC_4(VAR_7)) {
   VAR_2[VAR_10].in_ep = FUNC_6(VAR_7);
   if (FUNC_8(VAR_7))
    VAR_2[VAR_10].in_interval = VAR_7->bInterval;
   ++VAR_10;
  }
 }
 return (VAR_9 || VAR_10) ? 0 : -VAR_0;
}

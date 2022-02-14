
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int* extra; int extralen; } ;
struct snd_usb_midi_endpoint_info {int in_cables; int out_cables; } ;
struct snd_usb_midi {struct usb_interface* iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_interface_descriptor* FUNC_0 (struct usb_host_interface*) ;
 int FUNC_1 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_usb_midi *VAR_4,
         struct snd_usb_midi_endpoint_info *VAR_5)
{
 struct usb_interface *VAR_6;
 struct usb_host_interface *VAR_7;
 struct usb_interface_descriptor *VAR_8;
 uint8_t *VAR_9;

 VAR_6 = VAR_4->iface;
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_6->altsetting;
 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8->bNumEndpoints < 1)
  return -VAR_0;





 for (VAR_9 = VAR_7->extra;
      VAR_9 < VAR_7->extra + VAR_7->extralen && VAR_9[0] >= 2;
      VAR_9 += VAR_9[0]) {
  if (VAR_9[1] == VAR_3) {
   if (VAR_9[2] == VAR_1)
    VAR_5->in_cables =
     (VAR_5->in_cables << 1) | 1;
   else if (VAR_9[2] == VAR_2)
    VAR_5->out_cables =
     (VAR_5->out_cables << 1) | 1;
  }
 }
 if (!VAR_5->in_cables && !VAR_5->out_cables)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_5, 1);
}

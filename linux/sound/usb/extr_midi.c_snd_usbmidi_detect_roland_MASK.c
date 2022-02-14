
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int* extra; int extralen; } ;
struct snd_usb_midi_endpoint_info {int in_cables; int out_cables; } ;
struct snd_usb_midi {struct usb_interface* iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*,int) ;
 int FUNC_1 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*) ;

__attribute__((used)) static int FUNC_2(struct snd_usb_midi *VAR_4,
         struct snd_usb_midi_endpoint_info *VAR_5)
{
 struct usb_interface *VAR_6;
 struct usb_host_interface *VAR_7;
 u8 *VAR_8;

 VAR_6 = VAR_4->iface;
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = VAR_6->altsetting;




 for (VAR_8 = VAR_7->extra;
      VAR_8 < VAR_7->extra + VAR_7->extralen && VAR_8[0] >= 2;
      VAR_8 += VAR_8[0]) {
  if (VAR_8[0] >= 6 &&
      VAR_8[1] == VAR_3 &&
      VAR_8[2] == 0xf1 &&
      VAR_8[3] == 0x02) {
   VAR_5->in_cables = (1 << VAR_8[4]) - 1;
   VAR_5->out_cables = (1 << VAR_8[5]) - 1;
   return FUNC_0(VAR_4, VAR_5, 1);
  } else if (VAR_8[0] >= 7 &&
      VAR_8[1] == VAR_3 &&
      VAR_8[2] == VAR_2) {
   return FUNC_1(VAR_4, VAR_5);
  }
 }

 return -VAR_0;
}

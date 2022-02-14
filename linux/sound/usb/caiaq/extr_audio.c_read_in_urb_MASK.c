
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {scalar_t__ actual_length; } ;
struct urb {int dummy; } ;
struct TYPE_2__ {int data_alignment; } ;
struct snd_usb_caiaqdev {scalar_t__ bpp; int warned; scalar_t__ output_panic; scalar_t__ input_panic; TYPE_1__ spec; int streaming; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct snd_usb_caiaqdev*) ;
 int FUNC_1 (struct device*,char*,char*,char*) ;
 int FUNC_2 (struct snd_usb_caiaqdev*,struct urb const*,struct usb_iso_packet_descriptor const*) ;
 int FUNC_3 (struct snd_usb_caiaqdev*,struct urb const*,struct usb_iso_packet_descriptor const*) ;
 int FUNC_4 (struct snd_usb_caiaqdev*,struct urb const*,struct usb_iso_packet_descriptor const*) ;

__attribute__((used)) static void FUNC_5(struct snd_usb_caiaqdev *VAR_0,
   const struct urb *VAR_1,
   const struct usb_iso_packet_descriptor *VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_0->streaming)
  return;

 if (VAR_2->actual_length < VAR_0->bpp)
  return;

 switch (VAR_0->spec.data_alignment) {
 case 0:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 2:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  break;
 case 3:
  FUNC_4(VAR_0, VAR_1, VAR_2);
  break;
 }

 if ((VAR_0->input_panic || VAR_0->output_panic) && !VAR_0->warned) {
  FUNC_1(VAR_3, "streaming error detected %s %s\n",
    VAR_0->input_panic ? "(input)" : "",
    VAR_0->output_panic ? "(output)" : "");
  VAR_0->warned = 1;
 }
}

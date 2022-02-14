
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbmidi_out_port {int state; struct snd_rawmidi_substream* substream; } ;
struct snd_usb_midi {TYPE_3__* endpoints; } ;
struct snd_rawmidi_substream {TYPE_4__* runtime; TYPE_1__* rmidi; } ;
struct TYPE_8__ {struct usbmidi_out_port* private_data; } ;
struct TYPE_7__ {TYPE_2__* out; } ;
struct TYPE_6__ {struct usbmidi_out_port* ports; } ;
struct TYPE_5__ {struct snd_usb_midi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct snd_rawmidi_substream*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_3)
{
 struct snd_usb_midi *VAR_4 = VAR_3->rmidi->private_data;
 struct usbmidi_out_port *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
  if (VAR_4->endpoints[VAR_6].out)
   for (VAR_7 = 0; VAR_7 < 0x10; ++VAR_7)
    if (VAR_4->endpoints[VAR_6].out->ports[VAR_7].substream == VAR_3) {
     VAR_5 = &VAR_4->endpoints[VAR_6].out->ports[VAR_7];
     break;
    }
 if (!VAR_5) {
  FUNC_0();
  return -VAR_0;
 }

 VAR_3->runtime->private_data = VAR_5;
 VAR_5->state = VAR_2;
 return FUNC_1(VAR_3, 0, 1);
}

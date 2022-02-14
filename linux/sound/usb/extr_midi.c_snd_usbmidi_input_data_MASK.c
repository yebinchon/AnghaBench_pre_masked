
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct usbmidi_in_port {TYPE_3__* substream; } ;
struct snd_usb_midi_in_endpoint {TYPE_2__* umidi; struct usbmidi_in_port* ports; } ;
struct TYPE_6__ {int number; } ;
struct TYPE_5__ {int input_triggered; TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_midi_in_endpoint *VAR_0,
       int VAR_1, uint8_t *VAR_2, int VAR_3)
{
 struct usbmidi_in_port *VAR_4 = &VAR_0->ports[VAR_1];

 if (!VAR_4->substream) {
  FUNC_0(&VAR_0->umidi->dev->dev, "unexpected port %d!\n", VAR_1);
  return;
 }
 if (!FUNC_2(VAR_4->substream->number, &VAR_0->umidi->input_triggered))
  return;
 FUNC_1(VAR_4->substream, VAR_2, VAR_3);
}

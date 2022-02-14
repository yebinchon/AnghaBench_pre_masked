
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {struct snd_line6_midi* line6midi; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct snd_line6_midi {scalar_t__ num_active_send_urbs; int send_wait; } ;
struct TYPE_2__ {struct usb_line6* line6; } ;


 TYPE_1__* FUNC_0 (struct snd_rawmidi_substream*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_0)
{
 struct usb_line6 *VAR_1 =
     FUNC_0(VAR_0)->line6;
 struct snd_line6_midi *VAR_2 = VAR_1->line6midi;

 FUNC_1(VAR_2->send_wait,
     VAR_2->num_active_send_urbs == 0);
}

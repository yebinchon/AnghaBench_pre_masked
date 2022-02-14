
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* line6midi; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct TYPE_4__ {struct usb_line6* line6; } ;
struct TYPE_3__ {struct snd_rawmidi_substream* substream_receive; } ;


 TYPE_2__* FUNC_0 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi_substream *VAR_0,
         int VAR_1)
{
 struct usb_line6 *VAR_2 =
     FUNC_0(VAR_0)->line6;

 if (VAR_1)
  VAR_2->line6midi->substream_receive = VAR_0;
 else
  VAR_2->line6midi->substream_receive = ((void*)0);
}

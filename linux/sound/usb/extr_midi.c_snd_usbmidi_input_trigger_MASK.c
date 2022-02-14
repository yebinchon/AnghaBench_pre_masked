
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_midi {int input_triggered; } ;
struct snd_rawmidi_substream {int number; TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_usb_midi* private_data; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_0,
          int VAR_1)
{
 struct snd_usb_midi *VAR_2 = VAR_0->rmidi->private_data;

 if (VAR_1)
  FUNC_1(VAR_0->number, &VAR_2->input_triggered);
 else
  FUNC_0(VAR_0->number, &VAR_2->input_triggered);
}

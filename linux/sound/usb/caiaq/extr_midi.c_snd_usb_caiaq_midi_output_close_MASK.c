
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_caiaqdev {scalar_t__ midi_out_active; int midi_out_urb; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_usb_caiaqdev* private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_usb_caiaqdev *VAR_1 = VAR_0->rmidi->private_data;
 if (VAR_1->midi_out_active) {
  FUNC_0(&VAR_1->midi_out_urb);
  VAR_1->midi_out_active = 0;
 }
 return 0;
}

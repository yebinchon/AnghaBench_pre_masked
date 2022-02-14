
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_midi {struct snd_rawmidi* rmidi; TYPE_1__* card; int next_midi_device; } ;
struct snd_rawmidi {int info_flags; int private_free; struct snd_usb_midi* private_data; int * ops; int name; } ;
struct TYPE_2__ {int shortname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_midi *VAR_9,
          int VAR_10, int VAR_11)
{
 struct snd_rawmidi *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_9->card, "USB MIDI",
         VAR_9->next_midi_device++,
         VAR_10, VAR_11, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_2(VAR_12->name, VAR_9->card->shortname);
 VAR_12->info_flags = VAR_2 |
       VAR_1 |
       VAR_0;
 VAR_12->ops = &VAR_6;
 VAR_12->private_data = VAR_9;
 VAR_12->private_free = VAR_8;
 FUNC_1(VAR_12, VAR_4,
       &VAR_7);
 FUNC_1(VAR_12, VAR_3,
       &VAR_5);

 VAR_9->rmidi = VAR_12;
 return 0;
}

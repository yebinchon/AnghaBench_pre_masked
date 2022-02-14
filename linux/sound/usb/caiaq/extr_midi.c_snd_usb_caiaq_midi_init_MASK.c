
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_midi_out; scalar_t__ num_midi_in; } ;
struct TYPE_3__ {int card; } ;
struct snd_usb_caiaqdev {struct snd_rawmidi* rmidi; TYPE_2__ spec; int product_name; TYPE_1__ chip; } ;
struct snd_rawmidi {int info_flags; struct snd_usb_caiaqdev* private_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct snd_usb_caiaqdev *VAR_7)
{
 int VAR_8;
 struct snd_rawmidi *VAR_9;

 VAR_8 = FUNC_0(VAR_7->chip.card, VAR_7->product_name, 0,
     VAR_7->spec.num_midi_out,
     VAR_7->spec.num_midi_in,
     &VAR_9);

 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(VAR_9->name, VAR_7->product_name, sizeof(VAR_9->name));

 VAR_9->info_flags = VAR_0;
 VAR_9->private_data = VAR_7;

 if (VAR_7->spec.num_midi_out > 0) {
  VAR_9->info_flags |= VAR_2;
  FUNC_1(VAR_9, VAR_4,
        &VAR_6);
 }

 if (VAR_7->spec.num_midi_in > 0) {
  VAR_9->info_flags |= VAR_1;
  FUNC_1(VAR_9, VAR_3,
        &VAR_5);
 }

 VAR_7->rmidi = VAR_9;

 return 0;
}

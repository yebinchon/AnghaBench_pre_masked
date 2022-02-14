
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {int info_flags; int private_free; struct emu10k1x_midi* private_data; int name; } ;
struct emu10k1x_midi {struct snd_rawmidi* rmidi; int output_lock; int input_lock; int open_lock; struct emu10k1x* emu; } ;
struct emu10k1x {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct emu10k1x *VAR_8,
         struct emu10k1x_midi *VAR_9, int VAR_10,
         char *VAR_11)
{
 struct snd_rawmidi *VAR_12;
 int VAR_13;

 if ((VAR_13 = FUNC_0(VAR_8->card, VAR_11, VAR_10, 1, 1, &VAR_12)) < 0)
  return VAR_13;
 VAR_9->emu = VAR_8;
 FUNC_2(&VAR_9->open_lock);
 FUNC_2(&VAR_9->input_lock);
 FUNC_2(&VAR_9->output_lock);
 FUNC_3(VAR_12->name, VAR_11);
 FUNC_1(VAR_12, VAR_4, &VAR_7);
 FUNC_1(VAR_12, VAR_3, &VAR_6);
 VAR_12->info_flags |= VAR_2 |
                      VAR_1 |
                      VAR_0;
 VAR_12->private_data = VAR_9;
 VAR_12->private_free = VAR_5;
 VAR_9->rmidi = VAR_12;
 return 0;
}

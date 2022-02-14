
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {scalar_t__ hardware; struct snd_rawmidi* rmidi; int midi_timer; int card; } ;
struct snd_rawmidi {int info_flags; struct snd_sb* private_data; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(struct snd_sb *VAR_9, int VAR_10)
{
 struct snd_rawmidi *VAR_11;
 int VAR_12;

 if ((VAR_12 = FUNC_0(VAR_9->card, "SB8 MIDI", VAR_10, 1, 1, &VAR_11)) < 0)
  return VAR_12;
 FUNC_2(VAR_11->name, "SB8 MIDI");
 FUNC_1(VAR_11, VAR_5, &VAR_7);
 FUNC_1(VAR_11, VAR_4, &VAR_6);
 VAR_11->info_flags |= VAR_3 | VAR_2;
 if (VAR_9->hardware >= VAR_0)
  VAR_11->info_flags |= VAR_1;
 VAR_11->private_data = VAR_9;
 FUNC_3(&VAR_9->midi_timer, VAR_8, 0);
 VAR_9->rmidi = VAR_11;
 return 0;
}

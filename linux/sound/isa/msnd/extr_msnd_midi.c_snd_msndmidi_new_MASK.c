
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {int info_flags; int name; int private_free; struct snd_msndmidi* private_data; } ;
struct snd_msndmidi {int input_lock; struct snd_msnd* dev; } ;
struct snd_msnd {struct snd_msndmidi* msndmidi_mpu; } ;
struct snd_card {struct snd_msnd* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_msndmidi* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_card*,struct snd_rawmidi*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct snd_card*,char*,int,int,int,struct snd_rawmidi**) ;
 int FUNC_3 (struct snd_rawmidi*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct snd_card *VAR_6, int VAR_7)
{
 struct snd_msnd *VAR_8 = VAR_6->private_data;
 struct snd_msndmidi *VAR_9;
 struct snd_rawmidi *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_6, "MSND-MIDI", VAR_7, 1, 1, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_6, VAR_10);
  return -VAR_0;
 }
 VAR_9->dev = VAR_8;
 VAR_8->msndmidi_mpu = VAR_9;
 VAR_10->private_data = VAR_9;
 VAR_10->private_free = VAR_4;
 FUNC_4(&VAR_9->input_lock);
 FUNC_5(VAR_10->name, "MSND MIDI");
 FUNC_3(VAR_10, VAR_3,
       &VAR_5);
 VAR_10->info_flags |= VAR_2;
 return 0;
}

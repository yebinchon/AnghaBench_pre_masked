
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {int info_flags; struct snd_cs46xx* private_data; int name; } ;
struct snd_cs46xx {struct snd_rawmidi* rmidi; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct snd_cs46xx *VAR_7, int VAR_8)
{
 struct snd_rawmidi *VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_0(VAR_7->card, "CS46XX", VAR_8, 1, 1, &VAR_9)) < 0)
  return VAR_10;
 FUNC_2(VAR_9->name, "CS46XX");
 FUNC_1(VAR_9, VAR_4, &VAR_6);
 FUNC_1(VAR_9, VAR_3, &VAR_5);
 VAR_9->info_flags |= VAR_2 | VAR_1 | VAR_0;
 VAR_9->private_data = VAR_7;
 VAR_7->rmidi = VAR_9;
 return 0;
}

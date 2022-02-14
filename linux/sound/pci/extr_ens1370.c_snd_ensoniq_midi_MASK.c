
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {int info_flags; struct ensoniq* private_data; int name; } ;
struct ensoniq {struct snd_rawmidi* rmidi; int card; } ;


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
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ensoniq *VAR_8, int VAR_9)
{
 struct snd_rawmidi *VAR_10;
 int VAR_11;

 if ((VAR_11 = FUNC_0(VAR_8->card, "ES1370/1", VAR_9, 1, 1, &VAR_10)) < 0)
  return VAR_11;
 FUNC_2(VAR_10->name, VAR_0);
 FUNC_1(VAR_10, VAR_5, &VAR_7);
 FUNC_1(VAR_10, VAR_4, &VAR_6);
 VAR_10->info_flags |= VAR_3 | VAR_2 |
  VAR_1;
 VAR_10->private_data = VAR_8;
 VAR_8->rmidi = VAR_10;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_info {int dummy; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (struct snd_card*,struct snd_rawmidi_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

int FUNC_3(struct snd_card *VAR_1, struct snd_rawmidi_info *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0);
 return VAR_3;
}

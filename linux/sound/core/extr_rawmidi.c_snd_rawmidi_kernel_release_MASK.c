
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_file {struct snd_rawmidi* rmidi; } ;
struct snd_rawmidi {TYPE_1__* card; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_rawmidi_file*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct snd_rawmidi_file *VAR_1)
{
 struct snd_rawmidi *VAR_2;

 if (FUNC_2(!VAR_1))
  return -VAR_0;

 VAR_2 = VAR_1->rmidi;
 FUNC_1(VAR_1);
 FUNC_0(VAR_2->card->module);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {char* name; unsigned int index; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct hdspm {int io_type; int system_sample_rate; unsigned int qs_out_channels; unsigned int ds_out_channels; unsigned int ss_out_channels; scalar_t__ tco; struct snd_kcontrol** playback_mixer_ctls; } ;




 unsigned int FUNC_0 (struct snd_kcontrol_new*) ;



 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new*,struct hdspm*) ;
 struct snd_kcontrol_new* VAR_0 ;
 struct snd_kcontrol_new* VAR_1 ;
 struct snd_kcontrol_new* VAR_2 ;
 struct snd_kcontrol_new* VAR_3 ;
 struct snd_kcontrol_new* VAR_4 ;
 struct snd_kcontrol_new* VAR_5 ;
 struct snd_kcontrol_new VAR_6 ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_7,
     struct hdspm *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11;
 struct snd_kcontrol *VAR_12;
 struct snd_kcontrol_new *VAR_13 = ((void*)0);

 switch (VAR_8->io_type) {
 case 130:
  VAR_13 = VAR_2;
  VAR_10 = FUNC_0(VAR_2);
  break;
 case 129:
  VAR_13 = VAR_3;
  VAR_10 = FUNC_0(VAR_3);
  break;
 case 131:
  VAR_13 = VAR_1;
  VAR_10 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_13 = VAR_4;
  VAR_10 = FUNC_0(VAR_4);
  break;
 case 132:
  VAR_13 = VAR_0;
  VAR_10 = FUNC_0(VAR_0);
  break;
 }

 if (VAR_13) {
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   VAR_11 = FUNC_1(VAR_7,
     FUNC_2(&VAR_13[VAR_9], VAR_8));
   if (VAR_11 < 0)
    return VAR_11;
  }
 }



 VAR_6.name = "Chn";
 if (VAR_8->system_sample_rate >= 128000) {
  VAR_10 = VAR_8->qs_out_channels;
 } else if (VAR_8->system_sample_rate >= 64000) {
  VAR_10 = VAR_8->ds_out_channels;
 } else {
  VAR_10 = VAR_8->ss_out_channels;
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
  VAR_6.index = VAR_9 + 1;
  VAR_12 = FUNC_2(&VAR_6, VAR_8);
  VAR_11 = FUNC_1(VAR_7, VAR_12);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_8->playback_mixer_ctls[VAR_9] = VAR_12;
 }


 if (VAR_8->tco) {

  VAR_13 = VAR_5;
  VAR_10 = FUNC_0(VAR_5);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   VAR_11 = FUNC_1(VAR_7,
     FUNC_2(&VAR_13[VAR_9], VAR_8));
   if (VAR_11 < 0)
    return VAR_11;
  }
 }

 return 0;
}

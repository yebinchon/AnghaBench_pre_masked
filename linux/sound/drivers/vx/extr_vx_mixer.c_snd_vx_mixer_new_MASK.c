
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {TYPE_2__* hw; struct snd_card* card; } ;
struct TYPE_3__ {int p; } ;
struct snd_kcontrol_new {unsigned int index; char* name; int private_value; TYPE_1__ tlv; } ;
struct snd_card {int driver; int mixername; } ;
struct TYPE_4__ {unsigned int num_outs; unsigned int num_ins; int output_level_db_scale; } ;


 int FUNC_0 (struct snd_card*,int ) ;
 int FUNC_1 (struct snd_kcontrol_new*,struct vx_core*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 struct snd_kcontrol_new VAR_0 ;
 struct snd_kcontrol_new VAR_1 ;
 struct snd_kcontrol_new VAR_2 ;
 struct snd_kcontrol_new VAR_3 ;
 struct snd_kcontrol_new VAR_4 ;
 struct snd_kcontrol_new VAR_5 ;
 struct snd_kcontrol_new VAR_6 ;
 struct snd_kcontrol_new VAR_7 ;
 struct snd_kcontrol_new VAR_8 ;
 struct snd_kcontrol_new VAR_9 ;
 struct snd_kcontrol_new VAR_10 ;
 struct snd_kcontrol_new VAR_11 ;
 int FUNC_4 (struct vx_core*) ;

int FUNC_5(struct vx_core *VAR_12)
{
 unsigned int VAR_13, VAR_14;
 int VAR_15;
 struct snd_kcontrol_new VAR_16;
 struct snd_card *VAR_17 = VAR_12->card;
 char VAR_18[32];

 FUNC_3(VAR_17->mixername, VAR_17->driver);


 for (VAR_13 = 0; VAR_13 < VAR_12->hw->num_outs; VAR_13++) {
  VAR_16 = VAR_7;
  VAR_16.index = VAR_13;
  VAR_16.tlv.p = VAR_12->hw->output_level_db_scale;
  if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
   return VAR_15;
 }


 for (VAR_13 = 0; VAR_13 < VAR_12->hw->num_outs; VAR_13++) {
  int VAR_19 = VAR_13 * 2;
  VAR_16 = VAR_0;
  VAR_16.index = VAR_13;
  VAR_16.name = "PCM Playback Volume";
  VAR_16.private_value = VAR_19;
  if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
   return VAR_15;
  VAR_16 = VAR_8;
  VAR_16.index = VAR_13;
  VAR_16.private_value = VAR_19;
  if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
   return VAR_15;
  VAR_16 = VAR_5;
  VAR_16.index = VAR_13;
  VAR_16.private_value = VAR_19;
  if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
   return VAR_15;
  VAR_16 = VAR_6;
  VAR_16.index = VAR_13;
  VAR_16.private_value = VAR_19;
  if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
   return VAR_15;
 }
 for (VAR_13 = 0; VAR_13 < VAR_12->hw->num_outs; VAR_13++) {
  VAR_16 = VAR_0;
  VAR_16.index = VAR_13;
  VAR_16.name = "PCM Capture Volume";
  VAR_16.private_value = (VAR_13 * 2) | (1 << 8);
  if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
   return VAR_15;
 }


 if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_1, VAR_12))) < 0)
  return VAR_15;

 if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_2, VAR_12))) < 0)
  return VAR_15;

 if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_4, VAR_12))) < 0)
  return VAR_15;
 if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_3, VAR_12))) < 0)
  return VAR_15;

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  static char *VAR_20[2] = { "Output", "Input" };
  for (VAR_13 = 0; VAR_13 < VAR_12->hw->num_ins; VAR_13++) {
   int VAR_21 = (VAR_13 * 2) | (VAR_14 << 8);
   if (VAR_14 == 1) {
    VAR_16 = VAR_10;
    VAR_16.index = VAR_13;
    VAR_16.private_value = VAR_21;
    if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
     return VAR_15;
   }
   FUNC_2(VAR_18, "%s VU Meter", VAR_20[VAR_14]);
   VAR_16 = VAR_11;
   VAR_16.index = VAR_13;
   VAR_16.name = VAR_18;
   VAR_16.private_value = VAR_21;
   if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
    return VAR_15;
   FUNC_2(VAR_18, "%s Peak Meter", VAR_20[VAR_14]);
   VAR_16 = VAR_9;
   VAR_16.index = VAR_13;
   VAR_16.name = VAR_18;
   VAR_16.private_value = VAR_21;
   if ((VAR_15 = FUNC_0(VAR_17, FUNC_1(&VAR_16, VAR_12))) < 0)
    return VAR_15;
  }
 }
 FUNC_4(VAR_12);
 return 0;
}

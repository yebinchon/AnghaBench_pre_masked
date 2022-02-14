
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_enum {scalar_t__ items; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_card {struct snd_soc_dapm_context dapm; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_6__ {scalar_t__* item; } ;
struct TYPE_7__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_8__ {TYPE_1__* card; } ;
struct TYPE_5__ {int pop_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short* VAR_8 ;
 TYPE_4__* VAR_9 ;
 struct snd_soc_card* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_10,
     struct snd_ctl_elem_value *VAR_11)
{
 struct snd_soc_card *VAR_12 = FUNC_0(VAR_10);
 struct snd_soc_dapm_context *VAR_13 = &VAR_12->dapm;
 struct soc_enum *VAR_14 = (struct soc_enum *)VAR_10->private_value;
 unsigned short VAR_15;
 int VAR_16, VAR_17 = 0;


 if (!VAR_9->card->pop_time)
  return -VAR_6;

 if (VAR_11->value.enumerated.item[0] >= VAR_14->items)
  return -VAR_5;

 FUNC_4(VAR_13);


 VAR_15 = VAR_8[VAR_11->value.enumerated.item[0]];


 VAR_16 = !!(VAR_15 & (1 << VAR_3));

 if (VAR_16 != FUNC_3(VAR_13, "Mouthpiece")) {
  VAR_17 = 1;
  if (VAR_16)
   FUNC_2(VAR_13, "Mouthpiece");
  else
   FUNC_1(VAR_13, "Mouthpiece");
 }
 VAR_16 = !!(VAR_15 & (1 << VAR_1));
 if (VAR_16 != FUNC_3(VAR_13, "Earpiece")) {
  VAR_17 = 1;
  if (VAR_16)
   FUNC_2(VAR_13, "Earpiece");
  else
   FUNC_1(VAR_13, "Earpiece");
 }
 VAR_16 = !!(VAR_15 & (1 << VAR_2));
 if (VAR_16 != FUNC_3(VAR_13, "Microphone")) {
  VAR_17 = 1;
  if (VAR_16)
   FUNC_2(VAR_13, "Microphone");
  else
   FUNC_1(VAR_13, "Microphone");
 }
 VAR_16 = !!(VAR_15 & (1 << VAR_4));
 if (VAR_16 != FUNC_3(VAR_13, "Speaker")) {
  VAR_17 = 1;
  if (VAR_16)
   FUNC_2(VAR_13, "Speaker");
  else
   FUNC_1(VAR_13, "Speaker");
 }
 VAR_16 = !!(VAR_15 & (1 << VAR_0));
 if (VAR_16 != VAR_7) {
  VAR_7 = VAR_16;
  VAR_17 = 1;
  if (VAR_16)
   FUNC_2(VAR_13, "AGCIN");
  else
   FUNC_1(VAR_13, "AGCIN");
 }

 if (VAR_17)
  FUNC_6(VAR_13);

 FUNC_5(VAR_13);

 return VAR_17;
}

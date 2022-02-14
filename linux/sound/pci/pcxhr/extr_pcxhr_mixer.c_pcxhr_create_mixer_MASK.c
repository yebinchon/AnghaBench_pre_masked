
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int num_cards; scalar_t__ nb_streams_play; scalar_t__ nb_streams_capt; int card; scalar_t__ is_hr_stereo; struct snd_pcxhr** chip; int mixer_mutex; } ;
struct TYPE_2__ {int p; } ;
struct snd_kcontrol_new {char* name; int private_value; int count; TYPE_1__ tlv; } ;
struct pcxhr_mgr {int num_cards; scalar_t__ nb_streams_play; scalar_t__ nb_streams_capt; int card; scalar_t__ is_hr_stereo; struct pcxhr_mgr** chip; int mixer_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcxhr*) ;
 int FUNC_1 (int *) ;
 struct snd_kcontrol_new VAR_5 ;
 struct snd_kcontrol_new VAR_6 ;
 struct snd_kcontrol_new VAR_7 ;
 struct snd_kcontrol_new VAR_8 ;
 struct snd_kcontrol_new VAR_9 ;
 struct snd_kcontrol_new VAR_10 ;
 struct snd_kcontrol_new VAR_11 ;
 struct snd_kcontrol_new VAR_12 ;
 struct snd_kcontrol_new VAR_13 ;
 struct snd_kcontrol_new VAR_14 ;
 struct snd_kcontrol_new VAR_15 ;
 struct snd_kcontrol_new VAR_16 ;
 int FUNC_2 (struct snd_pcxhr*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_kcontrol_new*,struct snd_pcxhr*) ;
 struct snd_kcontrol_new VAR_17 ;

int FUNC_5(struct pcxhr_mgr *VAR_18)
{
 struct snd_pcxhr *VAR_19;
 int VAR_20, VAR_21;

 FUNC_1(&VAR_18->mixer_mutex);

 for (VAR_21 = 0; VAR_21 < VAR_18->num_cards; VAR_21++) {
  struct snd_kcontrol_new VAR_22;
  VAR_19 = VAR_18->chip[VAR_21];

  if (VAR_19->nb_streams_play) {

   VAR_22 = VAR_5;
   VAR_22.name = "Master Playback Volume";
   VAR_22.private_value = 0;
   if (VAR_18->is_hr_stereo)
    VAR_22.tlv.p = VAR_2;
   else
    VAR_22.tlv.p = VAR_4;
   VAR_20 = FUNC_3(VAR_19->card,
       FUNC_4(&VAR_22, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;


   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_13,
          VAR_19));
   if (VAR_20 < 0)
    return VAR_20;

   VAR_22 = VAR_17;
   VAR_22.name = "PCM Playback Volume";
   VAR_22.count = VAR_0;
   VAR_22.private_value = 0;
   VAR_20 = FUNC_3(VAR_19->card,
       FUNC_4(&VAR_22, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;

   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_14, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;


   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_16,
          VAR_19));
   if (VAR_20 < 0)
    return VAR_20;

   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_15,
          VAR_19));
   if (VAR_20 < 0)
    return VAR_20;
  }
  if (VAR_19->nb_streams_capt) {

   VAR_22 = VAR_5;
   VAR_22.name = "Line Capture Volume";
   VAR_22.private_value = 1;
   if (VAR_18->is_hr_stereo)
    VAR_22.tlv.p = VAR_1;
   else
    VAR_22.tlv.p = VAR_3;

   VAR_20 = FUNC_3(VAR_19->card,
       FUNC_4(&VAR_22, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;

   VAR_22 = VAR_17;
   VAR_22.name = "PCM Capture Volume";
   VAR_22.count = 1;
   VAR_22.private_value = 1;

   VAR_20 = FUNC_3(VAR_19->card,
       FUNC_4(&VAR_22, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;


   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_6, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;


   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_8,
          VAR_19));
   if (VAR_20 < 0)
    return VAR_20;

   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_7,
          VAR_19));
   if (VAR_20 < 0)
    return VAR_20;

   if (VAR_18->is_hr_stereo) {
    VAR_20 = FUNC_0(VAR_19);
    if (VAR_20 < 0)
     return VAR_20;
   }
  }

  if (VAR_19->nb_streams_capt > 0 && VAR_19->nb_streams_play > 0) {

   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_12, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;

   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_11, VAR_19));
   if (VAR_20 < 0)
    return VAR_20;
  }

  if (VAR_21 == 0) {

   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_10, VAR_18));
   if (VAR_20 < 0)
    return VAR_20;



   VAR_20 = FUNC_3(VAR_19->card,
    FUNC_4(&VAR_9, VAR_18));
   if (VAR_20 < 0)
    return VAR_20;
  }


  FUNC_2(VAR_19);
 }

 return 0;
}

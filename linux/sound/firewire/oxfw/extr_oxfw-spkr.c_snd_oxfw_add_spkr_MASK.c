
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_oxfw {TYPE_1__* card; int unit; struct fw_spkr* spec; } ;
struct snd_kcontrol_new {char* name; int put; int get; int info; int const iface; } ;
struct fw_spkr {int mixer_channels; int mute_fb_id; int volume_fb_id; int * volume; int mute; int volume_max; int volume_min; } ;
struct TYPE_2__ {int card_dev; } ;


 unsigned int FUNC_0 (struct snd_kcontrol_new const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,int,int *,unsigned int,int ,int ) ;
 struct fw_spkr* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

 int FUNC_5 (struct snd_kcontrol_new const*,struct snd_oxfw*) ;






int FUNC_6(struct snd_oxfw *VAR_6, bool VAR_7)
{
 static const struct snd_kcontrol_new VAR_8[] = {
  {
   .iface = 134,
   .name = "PCM Playback Switch",
   .info = 133,
   .get = 132,
   .put = 131,
  },
  {
   .iface = 134,
   .name = "PCM Playback Volume",
   .info = 129,
   .get = 130,
   .put = 128,
  },
 };
 struct fw_spkr *VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3(&VAR_6->card->card_dev, sizeof(struct fw_spkr),
       VAR_5);
 if (!VAR_9)
  return -VAR_4;
 VAR_6->spec = VAR_9;

 if (VAR_7) {
  VAR_9->mixer_channels = 1;
  VAR_9->mute_fb_id = 0x01;
  VAR_9->volume_fb_id = 0x01;
 } else {
  VAR_9->mixer_channels = 6;
  VAR_9->mute_fb_id = 0x01;
  VAR_9->volume_fb_id = 0x02;
 }

 VAR_12 = FUNC_2(VAR_6->unit, VAR_9->volume_fb_id,
           &VAR_9->volume_min, 0, VAR_2, VAR_3);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = FUNC_2(VAR_6->unit, VAR_9->volume_fb_id,
           &VAR_9->volume_max, 0, VAR_1, VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_6->unit, VAR_9->mute_fb_id, &VAR_9->mute,
         VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = VAR_9->mixer_channels == 1 ? 0 : 1;
 for (VAR_10 = 0; VAR_10 < VAR_9->mixer_channels; ++VAR_10) {
  VAR_12 = FUNC_2(VAR_6->unit, VAR_9->volume_fb_id,
            &VAR_9->volume[VAR_10], VAR_11 + VAR_10,
            VAR_0, VAR_3);
  if (VAR_12 < 0)
   return VAR_12;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8); ++VAR_10) {
  VAR_12 = FUNC_4(VAR_6->card,
      FUNC_5(&VAR_8[VAR_10], VAR_6));
  if (VAR_12 < 0)
   return VAR_12;
 }

 return 0;
}

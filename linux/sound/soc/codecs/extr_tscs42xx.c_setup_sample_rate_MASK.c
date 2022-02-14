
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs42xx {unsigned int samplerate; int audio_params_lock; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tscs42xx* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_12,
  unsigned int VAR_13)
{
 struct tscs42xx *VAR_14 = FUNC_3(VAR_12);
 unsigned int VAR_15, VAR_16;
 int VAR_17;

 switch (VAR_13) {
 case 8000:
  VAR_15 = VAR_7;
  VAR_16 = VAR_5;
  break;
 case 16000:
  VAR_15 = VAR_7;
  VAR_16 = VAR_6;
  break;
 case 24000:
  VAR_15 = VAR_9;
  VAR_16 = VAR_6;
  break;
 case 32000:
  VAR_15 = VAR_7;
  VAR_16 = VAR_3;
  break;
 case 48000:
  VAR_15 = VAR_9;
  VAR_16 = VAR_3;
  break;
 case 96000:
  VAR_15 = VAR_9;
  VAR_16 = VAR_4;
  break;
 case 11025:
  VAR_15 = VAR_8;
  VAR_16 = VAR_5;
  break;
 case 22050:
  VAR_15 = VAR_8;
  VAR_16 = VAR_6;
  break;
 case 44100:
  VAR_15 = VAR_8;
  VAR_16 = VAR_3;
  break;
 case 88200:
  VAR_15 = VAR_8;
  VAR_16 = VAR_4;
  break;
 default:
  FUNC_0(VAR_12->dev, "Unsupported sample rate %d\n", VAR_13);
  return -VAR_0;
 }


 VAR_17 = FUNC_4(VAR_12,
   VAR_11, VAR_2, VAR_15);
 if (VAR_17 < 0) {
  FUNC_0(VAR_12->dev,
    "Failed to update register (%d)\n", VAR_17);
  return VAR_17;
 }
 VAR_17 = FUNC_4(VAR_12,
   VAR_11, VAR_1, VAR_16);
 if (VAR_17 < 0) {
  FUNC_0(VAR_12->dev,
    "Failed to update register (%d)\n", VAR_17);
  return VAR_17;
 }
 VAR_17 = FUNC_4(VAR_12,
   VAR_10, VAR_2, VAR_15);
 if (VAR_17 < 0) {
  FUNC_0(VAR_12->dev,
    "Failed to update register (%d)\n", VAR_17);
  return VAR_17;
 }
 VAR_17 = FUNC_4(VAR_12,
   VAR_10, VAR_1, VAR_16);
 if (VAR_17 < 0) {
  FUNC_0(VAR_12->dev,
    "Failed to update register (%d)\n", VAR_17);
  return VAR_17;
 }

 FUNC_1(&VAR_14->audio_params_lock);

 VAR_14->samplerate = VAR_13;

 FUNC_2(&VAR_14->audio_params_lock);

 return 0;
}

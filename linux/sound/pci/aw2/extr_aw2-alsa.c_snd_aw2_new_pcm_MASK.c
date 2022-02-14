
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {struct aw2_pcm_device* private_data; int name; } ;
struct aw2_pcm_device {size_t stream_number; struct aw2* chip; struct snd_pcm* pcm; } ;
struct aw2 {TYPE_1__* card; int pci; struct aw2_pcm_device* device_capture; struct aw2_pcm_device* device_playback; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,struct aw2*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_6 (struct snd_pcm*,int ,int *) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct aw2 *VAR_9)
{
 struct snd_pcm *VAR_10;
 struct snd_pcm *VAR_11;
 struct snd_pcm *VAR_12;
 struct aw2_pcm_device *VAR_13;
 int VAR_14 = 0;



 VAR_14 = FUNC_5(VAR_9->card, "Audiowerk2 analog playback", 0, 1, 0,
     &VAR_10);
 if (VAR_14 < 0) {
  FUNC_0(VAR_9->card->dev, "snd_pcm_new error (0x%X)\n", VAR_14);
  return VAR_14;
 }


 VAR_13 = &VAR_9->device_playback[VAR_1];


 FUNC_7(VAR_10->name, "Analog playback");

 VAR_10->private_data = VAR_13;

 FUNC_6(VAR_10, VAR_5,
   &VAR_8);

 VAR_13->pcm = VAR_10;


 VAR_13->chip = VAR_9;

 VAR_13->stream_number = VAR_1;



 FUNC_4(VAR_10,
           VAR_3,
           FUNC_3(VAR_9->pci),
           64 * 1024, 64 * 1024);

 VAR_14 = FUNC_5(VAR_9->card, "Audiowerk2 digital playback", 1, 1, 0,
     &VAR_11);

 if (VAR_14 < 0) {
  FUNC_0(VAR_9->card->dev, "snd_pcm_new error (0x%X)\n", VAR_14);
  return VAR_14;
 }

 VAR_13 = &VAR_9->device_playback[VAR_2];


 FUNC_7(VAR_11->name, "Digital playback");

 VAR_11->private_data = VAR_13;

 FUNC_6(VAR_11, VAR_5,
   &VAR_8);

 VAR_13->pcm = VAR_11;


 VAR_13->chip = VAR_9;

 VAR_13->stream_number = VAR_2;



 FUNC_4(VAR_11,
           VAR_3,
           FUNC_3(VAR_9->pci),
           64 * 1024, 64 * 1024);

 VAR_14 = FUNC_5(VAR_9->card, "Audiowerk2 capture", 2, 0, 1,
     &VAR_12);

 if (VAR_14 < 0) {
  FUNC_0(VAR_9->card->dev, "snd_pcm_new error (0x%X)\n", VAR_14);
  return VAR_14;
 }


 VAR_13 = &VAR_9->device_capture[VAR_0];


 FUNC_7(VAR_12->name, "Capture");

 VAR_12->private_data = VAR_13;

 FUNC_6(VAR_12, VAR_4,
   &VAR_7);

 VAR_13->pcm = VAR_12;


 VAR_13->chip = VAR_9;

 VAR_13->stream_number = VAR_0;



 FUNC_4(VAR_12,
           VAR_3,
           FUNC_3(VAR_9->pci),
           64 * 1024, 64 * 1024);


 VAR_14 = FUNC_1(VAR_9->card, FUNC_2(&VAR_6, VAR_9));
 if (VAR_14 < 0) {
  FUNC_0(VAR_9->card->dev, "snd_ctl_add error (0x%X)\n", VAR_14);
  return VAR_14;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dev; } ;
struct hdspm {int midiPorts; int system_sample_rate; int last_external_sample_rate; int last_internal_sample_rate; int playback_pid; int capture_pid; int * playback_substream; int * capture_substream; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hdspm*) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (struct snd_card*,struct hdspm*) ;
 int FUNC_5 (struct snd_card*,struct hdspm*) ;
 int FUNC_6 (struct snd_card*,struct hdspm*,int) ;
 int FUNC_7 (struct snd_card*,struct hdspm*) ;
 int FUNC_8 (struct hdspm*) ;
 int FUNC_9 (struct hdspm*) ;

__attribute__((used)) static int FUNC_10(struct snd_card *VAR_0,
      struct hdspm *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(VAR_0->dev, "Create card...\n");
 VAR_2 = FUNC_7(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = 0;
 while (VAR_3 < VAR_1->midiPorts) {
  VAR_2 = FUNC_6(VAR_0, VAR_1, VAR_3);
  if (VAR_2 < 0) {
   return VAR_2;
  }
  VAR_3++;
 }

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_0->dev, "proc init...\n");
 FUNC_8(VAR_1);

 VAR_1->system_sample_rate = -1;
 VAR_1->last_external_sample_rate = -1;
 VAR_1->last_internal_sample_rate = -1;
 VAR_1->playback_pid = -1;
 VAR_1->capture_pid = -1;
 VAR_1->capture_substream = ((void*)0);
 VAR_1->playback_substream = ((void*)0);

 FUNC_0(VAR_0->dev, "Set defaults...\n");
 VAR_2 = FUNC_9(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_0->dev, "Update mixer controls...\n");
 FUNC_2(VAR_1);

 FUNC_0(VAR_0->dev, "Initializing complete?\n");

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0->dev, "error registering card\n");
  return VAR_2;
 }

 FUNC_0(VAR_0->dev, "... yes now\n");

 return 0;
}

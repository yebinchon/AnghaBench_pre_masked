
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dev; int longname; int shortname; } ;
struct hdsp {scalar_t__ io_type; int system_sample_rate; int playback_pid; int capture_pid; int state; char* card_name; int irq; int port; int * playback_substream; int * capture_substream; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*,struct hdsp*) ;
 int FUNC_3 (struct snd_card*,struct hdsp*,int) ;
 int FUNC_4 (struct snd_card*,struct hdsp*) ;
 int FUNC_5 (struct hdsp*) ;
 int FUNC_6 (struct hdsp*) ;
 int FUNC_7 (int ,char*,char*,int ,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct snd_card *VAR_3, struct hdsp *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_4(VAR_3, VAR_4)) < 0) {
  FUNC_0(VAR_3->dev,
   "Error creating pcm interface\n");
  return VAR_5;
 }


 if ((VAR_5 = FUNC_3(VAR_3, VAR_4, 0)) < 0) {
  FUNC_0(VAR_3->dev,
   "Error creating first midi interface\n");
  return VAR_5;
 }

 if (VAR_4->io_type == VAR_0 || VAR_4->io_type == VAR_1) {
  if ((VAR_5 = FUNC_3(VAR_3, VAR_4, 1)) < 0) {
   FUNC_0(VAR_3->dev,
    "Error creating second midi interface\n");
   return VAR_5;
  }
 }

 if ((VAR_5 = FUNC_2(VAR_3, VAR_4)) < 0) {
  FUNC_0(VAR_3->dev,
   "Error creating ctl interface\n");
  return VAR_5;
 }

 FUNC_5(VAR_4);

 VAR_4->system_sample_rate = -1;
 VAR_4->playback_pid = -1;
 VAR_4->capture_pid = -1;
 VAR_4->capture_substream = ((void*)0);
 VAR_4->playback_substream = ((void*)0);

 if ((VAR_5 = FUNC_6(VAR_4)) < 0) {
  FUNC_0(VAR_3->dev,
   "Error setting default values\n");
  return VAR_5;
 }

 if (!(VAR_4->state & VAR_2)) {
  FUNC_8(VAR_3->shortname, "Hammerfall DSP");
  FUNC_7(VAR_3->longname, "%s at 0x%lx, irq %d", VAR_4->card_name,
   VAR_4->port, VAR_4->irq);

  if ((VAR_5 = FUNC_1(VAR_3)) < 0) {
   FUNC_0(VAR_3->dev,
    "error registering card\n");
   return VAR_5;
  }
  VAR_4->state |= VAR_2;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct hdspm {int io_type; int lock; struct snd_pcm_substream* capture_substream; int capture_pid; struct snd_pcm_substream* playback_substream; int playback_pid; } ;
struct TYPE_5__ {int pid; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hdspm*) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__ VAR_17 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ,int ,int ,struct hdspm*,int ,int) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 struct hdspm* FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_18)
{
 struct hdspm *VAR_19 = FUNC_8(VAR_18);
 struct snd_pcm_runtime *VAR_20 = VAR_18->runtime;
 bool VAR_21 = (VAR_18->stream == VAR_7);

 FUNC_9(&VAR_19->lock);
 FUNC_7(VAR_18);
 VAR_20->hw = (VAR_21) ? VAR_17 :
  VAR_10;

 if (VAR_21) {
  if (!VAR_19->capture_substream)
   FUNC_0(VAR_19);

  VAR_19->playback_pid = VAR_8->pid;
  VAR_19->playback_substream = VAR_18;
 } else {
  if (!VAR_19->playback_substream)
   FUNC_0(VAR_19);

  VAR_19->capture_pid = VAR_8->pid;
  VAR_19->capture_substream = VAR_18;
 }

 FUNC_10(&VAR_19->lock);

 FUNC_3(VAR_20, 0, 32, 24);
 FUNC_4(VAR_20, 0, VAR_4);

 switch (VAR_19->io_type) {
 case 129:
 case 128:
  FUNC_2(VAR_20,
          VAR_4,
          32, 4096);

  FUNC_5(VAR_20,
          VAR_1,
          16384);
  break;

 default:
  FUNC_2(VAR_20,
          VAR_4,
          64, 8192);
  FUNC_5(VAR_20,
          VAR_3, 2);
  break;
 }

 if (VAR_0 == VAR_19->io_type) {
  VAR_20->hw.rates |= VAR_6;
  FUNC_1(VAR_20, 0, VAR_5,
    &VAR_9);
 } else {
  FUNC_6(VAR_20, 0, VAR_5,
    (VAR_21 ?
     VAR_16 :
     VAR_15), VAR_19,
    VAR_2, -1);
 }

 FUNC_6(VAR_20, 0, VAR_2,
   (VAR_21 ? VAR_13 :
    VAR_11), VAR_19,
   VAR_2, -1);

 FUNC_6(VAR_20, 0, VAR_2,
   (VAR_21 ? VAR_14 :
    VAR_12), VAR_19,
   VAR_5, -1);

 return 0;
}

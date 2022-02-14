
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct timespec {int dummy; } ;
struct system_device_crosststamp {int device; int sys_realtime; int sys_monoraw; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int info; } ;
struct snd_pcm_runtime {int tstamp_type; TYPE_1__ hw; } ;
struct snd_pcm_audio_tstamp_report {int accuracy_report; int accuracy; scalar_t__ actual_type; } ;
struct snd_pcm_audio_tstamp_config {scalar_t__ type_requested; scalar_t__ report_delay; } ;
struct TYPE_4__ {int tc; } ;
struct azx_dev {TYPE_2__ core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*,struct system_device_crosststamp*) ;
 int FUNC_2 (int ,int) ;
 struct azx_dev* FUNC_3 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_4 (struct snd_pcm_runtime*,struct snd_pcm_audio_tstamp_config*) ;
 struct timespec FUNC_5 (int ) ;
 struct timespec FUNC_6 (int ) ;
 int FUNC_7 (struct snd_pcm_runtime*,struct timespec*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_5,
   struct timespec *VAR_6, struct timespec *VAR_7,
   struct snd_pcm_audio_tstamp_config *VAR_8,
   struct snd_pcm_audio_tstamp_report *VAR_9)
{
 struct azx_dev *VAR_10 = FUNC_3(VAR_5);
 struct snd_pcm_runtime *VAR_11 = VAR_5->runtime;
 struct system_device_crosststamp VAR_12;
 int VAR_13;
 u64 VAR_14;

 if ((VAR_5->runtime->hw.info & VAR_4) &&
  (VAR_8->type_requested == VAR_2)) {

  FUNC_7(VAR_5->runtime, VAR_6);

  VAR_14 = FUNC_8(&VAR_10->core.tc);
  VAR_14 = FUNC_2(VAR_14, 3);
  if (VAR_8->report_delay)
   VAR_14 = FUNC_0(VAR_5, VAR_14);

  *VAR_7 = FUNC_6(VAR_14);

  VAR_9->actual_type = VAR_2;
  VAR_9->accuracy_report = 1;
  VAR_9->accuracy = 42;

 } else if (FUNC_4(VAR_11, VAR_8)) {

  VAR_13 = FUNC_1(VAR_5, &VAR_12);
  if (VAR_13)
   return VAR_13;

  switch (VAR_11->tstamp_type) {
  case 129:
   return -VAR_0;

  case 128:
   *VAR_6 = FUNC_5(VAR_12.sys_monoraw);
   break;

  default:
   *VAR_6 = FUNC_5(VAR_12.sys_realtime);
   break;

  }

  *VAR_7 = FUNC_5(VAR_12.device);

  VAR_9->actual_type =
   VAR_3;
  VAR_9->accuracy_report = 1;

  VAR_9->accuracy = 42;

 } else {
  VAR_9->actual_type = VAR_1;
 }

 return 0;
}

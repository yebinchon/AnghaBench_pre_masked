
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct timespec {int dummy; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_audio_tstamp_report {int accuracy_report; int accuracy; scalar_t__ actual_type; } ;
struct snd_pcm_audio_tstamp_config {scalar_t__ type_requested; scalar_t__ report_delay; } ;
struct hdac_stream {int tc; } ;
struct hdac_ext_stream {int dummy; } ;
struct TYPE_3__ {int info; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct hdac_ext_stream* FUNC_1 (struct snd_pcm_substream*) ;
 struct hdac_stream* FUNC_2 (struct hdac_ext_stream*) ;
 struct timespec FUNC_3 (int ) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 int FUNC_5 (TYPE_2__*,struct timespec*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
   struct timespec *VAR_4, struct timespec *VAR_5,
   struct snd_pcm_audio_tstamp_config *VAR_6,
   struct snd_pcm_audio_tstamp_report *VAR_7)
{
 struct hdac_ext_stream *VAR_8 = FUNC_1(VAR_3);
 struct hdac_stream *VAR_9 = FUNC_2(VAR_8);
 u64 VAR_10;

 if ((VAR_3->runtime->hw.info & VAR_2) &&
  (VAR_6->type_requested == VAR_1)) {

  FUNC_5(VAR_3->runtime, VAR_4);

  VAR_10 = FUNC_6(&VAR_9->tc);
  VAR_10 = FUNC_0(VAR_10, 3);
  if (VAR_6->report_delay)
   VAR_10 = FUNC_4(VAR_3, VAR_10);

  *VAR_5 = FUNC_3(VAR_10);

  VAR_7->actual_type = VAR_1;
  VAR_7->accuracy_report = 1;
  VAR_7->accuracy = 42;

 } else {
  VAR_7->actual_type = VAR_0;
 }

 return 0;
}

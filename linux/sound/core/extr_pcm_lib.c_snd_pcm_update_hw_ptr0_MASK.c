
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct snd_pcm_substream {int stream; int pcm; TYPE_3__* ops; struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int info; } ;
struct TYPE_10__ {scalar_t__ actual_type; } ;
struct TYPE_9__ {scalar_t__ type_requested; } ;
struct snd_pcm_runtime {scalar_t__ tstamp_mode; int buffer_size; int period_size; int min_align; int hw_ptr_base; int hw_ptr_interrupt; unsigned long hw_ptr_jiffies; int hw_ptr_buffer_jiffies; int boundary; int rate; int delay; scalar_t__ silence_size; int hw_ptr_wrap; TYPE_2__* status; TYPE_1__ hw; scalar_t__ no_period_wakeup; TYPE_5__ audio_tstamp_report; TYPE_4__ audio_tstamp_config; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;
typedef int name ;
struct TYPE_8__ {int (* pointer ) (struct snd_pcm_substream*) ;int (* get_time_info ) (struct snd_pcm_substream*,struct timespec*,struct timespec*,TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_7__ {int hw_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,unsigned int,char*,char*,long,long,long,long,...) ;
 unsigned long VAR_8 ;
 int FUNC_2 (int ,char*,char*,int,int,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct snd_pcm_substream*,char*,int) ;
 int FUNC_6 (struct snd_pcm_runtime*,struct timespec*) ;
 int FUNC_7 (struct snd_pcm_substream*,int) ;
 int FUNC_8 (struct snd_pcm_substream*,struct snd_pcm_runtime*) ;
 int FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (struct snd_pcm_substream*,struct timespec*,struct timespec*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_11 (struct snd_pcm_substream*,int,unsigned int) ;
 int FUNC_12 (struct snd_pcm_substream*,struct timespec*,struct timespec*) ;
 int FUNC_13 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_9,
      unsigned int VAR_10)
{
 struct snd_pcm_runtime *VAR_11 = VAR_9->runtime;
 snd_pcm_uframes_t VAR_12;
 snd_pcm_uframes_t VAR_13, VAR_14, VAR_15;
 snd_pcm_sframes_t VAR_16, VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;
 struct timespec VAR_20;
 struct timespec VAR_21;
 int VAR_22 = 0;

 VAR_13 = VAR_11->status->hw_ptr;







 VAR_12 = VAR_9->ops->pointer(VAR_9);
 VAR_19 = VAR_8;
 if (VAR_11->tstamp_mode == VAR_6) {
  if ((VAR_9->ops->get_time_info) &&
   (VAR_11->audio_tstamp_config.type_requested != VAR_2)) {
   VAR_9->ops->get_time_info(VAR_9, &VAR_20,
      &VAR_21,
      &VAR_11->audio_tstamp_config,
      &VAR_11->audio_tstamp_report);


   if (VAR_11->audio_tstamp_report.actual_type == VAR_2)
    FUNC_6(VAR_11, (struct timespec *)&VAR_20);
  } else
   FUNC_6(VAR_11, (struct timespec *)&VAR_20);
 }

 if (VAR_12 == VAR_4) {
  FUNC_0(VAR_9);
  return -VAR_0;
 }
 if (VAR_12 >= VAR_11->buffer_size) {
  if (FUNC_3()) {
   char VAR_23[16];
   FUNC_5(VAR_9, VAR_23, sizeof(VAR_23));
   FUNC_2(VAR_9->pcm,
    "invalid position: %s, pos = %ld, buffer size = %ld, period size = %ld\n",
    VAR_23, VAR_12, VAR_11->buffer_size,
    VAR_11->period_size);
  }
  VAR_12 = 0;
 }
 VAR_12 -= VAR_12 % VAR_11->min_align;
 FUNC_11(VAR_9, VAR_12, VAR_10);
 VAR_15 = VAR_11->hw_ptr_base;
 VAR_14 = VAR_15 + VAR_12;
 if (VAR_10) {


  VAR_17 = VAR_11->hw_ptr_interrupt + VAR_11->period_size;
  if (VAR_17 > VAR_14) {

   VAR_16 = VAR_19 - VAR_11->hw_ptr_jiffies;
   if (VAR_16 > VAR_11->hw_ptr_buffer_jiffies/2 + 1) {
    VAR_15 += VAR_11->buffer_size;
    if (VAR_15 >= VAR_11->boundary) {
     VAR_15 = 0;
     VAR_22++;
    }
    VAR_14 = VAR_15 + VAR_12;
    goto __delta;
   }
  }
 }


 if (VAR_14 < VAR_13) {
  VAR_15 += VAR_11->buffer_size;
  if (VAR_15 >= VAR_11->boundary) {
   VAR_15 = 0;
   VAR_22++;
  }
  VAR_14 = VAR_15 + VAR_12;
 }
      __delta:
 VAR_17 = VAR_14 - VAR_13;
 if (VAR_17 < 0)
  VAR_17 += VAR_11->boundary;

 if (VAR_11->no_period_wakeup) {
  snd_pcm_sframes_t VAR_24;




  VAR_18 = VAR_19 - VAR_11->hw_ptr_jiffies;
  if (VAR_18 < VAR_11->hw_ptr_buffer_jiffies / 2)
   goto no_delta_check;
  VAR_16 = VAR_18 - VAR_17 * VAR_1 / VAR_11->rate;
  VAR_24 = VAR_11->hw_ptr_buffer_jiffies / 2 + 1;
  while (VAR_16 > VAR_24) {
   VAR_17 += VAR_11->buffer_size;
   VAR_15 += VAR_11->buffer_size;
   if (VAR_15 >= VAR_11->boundary) {
    VAR_15 = 0;
    VAR_22++;
   }
   VAR_14 = VAR_15 + VAR_12;
   VAR_16 -= VAR_11->hw_ptr_buffer_jiffies;
  }
  goto no_delta_check;
 }


 if (VAR_17 >= VAR_11->buffer_size + VAR_11->period_size) {
  FUNC_1(VAR_9, VAR_10, "Unexpected hw_ptr",
        "(stream=%i, pos=%ld, new_hw_ptr=%ld, old_hw_ptr=%ld)\n",
        VAR_9->stream, (long)VAR_12,
        (long)VAR_14, (long)VAR_13);
  return 0;
 }


 if (!FUNC_13(VAR_9, VAR_7))
  goto no_jiffies_check;





 if (VAR_11->hw.info & VAR_3)
  goto no_jiffies_check;
 VAR_16 = VAR_17;
 if (VAR_16 < VAR_11->delay)
  goto no_jiffies_check;
 VAR_16 -= VAR_11->delay;
 VAR_18 = VAR_19 - VAR_11->hw_ptr_jiffies;
 if (((VAR_16 * VAR_1) / VAR_11->rate) > VAR_18 + VAR_1/100) {
  VAR_17 = VAR_18 /
   (((VAR_11->period_size * VAR_1) / VAR_11->rate)
        + VAR_1/100);

  VAR_14 = VAR_13;
  VAR_15 = VAR_17;


  while (VAR_17 > 0) {
   VAR_14 += VAR_11->period_size;
   if (VAR_14 >= VAR_11->boundary) {
    VAR_14 -= VAR_11->boundary;
    VAR_22--;
   }
   VAR_17--;
  }

  FUNC_1(VAR_9, VAR_10, "hw_ptr skipping",
        "(pos=%ld, delta=%ld, period=%ld, jdelta=%lu/%lu/%lu, hw_ptr=%ld/%ld)\n",
        (long)VAR_12, (long)VAR_16,
        (long)VAR_11->period_size, VAR_18,
        ((VAR_16 * VAR_1) / VAR_11->rate), VAR_15,
        (unsigned long)VAR_13,
        (unsigned long)VAR_14);

  VAR_17 = 0;
  VAR_15 = VAR_14 - (VAR_14 % VAR_11->buffer_size);
 }
 no_jiffies_check:
 if (VAR_17 > VAR_11->period_size + VAR_11->period_size / 2) {
  FUNC_1(VAR_9, VAR_10,
        "Lost interrupts?",
        "(stream=%i, delta=%ld, new_hw_ptr=%ld, old_hw_ptr=%ld)\n",
        VAR_9->stream, (long)VAR_17,
        (long)VAR_14,
        (long)VAR_13);
 }

 no_delta_check:
 if (VAR_11->status->hw_ptr == VAR_14) {
  FUNC_12(VAR_9, &VAR_20, &VAR_21);
  return 0;
 }

 if (VAR_9->stream == VAR_5 &&
     VAR_11->silence_size > 0)
  FUNC_7(VAR_9, VAR_14);

 if (VAR_10) {
  VAR_17 = VAR_14 - VAR_11->hw_ptr_interrupt;
  if (VAR_17 < 0)
   VAR_17 += VAR_11->boundary;
  VAR_17 -= (snd_pcm_uframes_t)VAR_17 % VAR_11->period_size;
  VAR_11->hw_ptr_interrupt += VAR_17;
  if (VAR_11->hw_ptr_interrupt >= VAR_11->boundary)
   VAR_11->hw_ptr_interrupt -= VAR_11->boundary;
 }
 VAR_11->hw_ptr_base = VAR_15;
 VAR_11->status->hw_ptr = VAR_14;
 VAR_11->hw_ptr_jiffies = VAR_19;
 if (VAR_22) {
  FUNC_4(VAR_22 != 1);
  VAR_11->hw_ptr_wrap += VAR_11->boundary;
 }

 FUNC_12(VAR_9, &VAR_20, &VAR_21);

 return FUNC_8(VAR_9, VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; int mmap_count; } ;
struct TYPE_3__ {int trigger; int prepare; int params_lock; } ;
struct snd_pcm_runtime {int start_threshold; int boundary; TYPE_1__ oss; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
struct TYPE_4__ {int pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct snd_pcm_substream*,int,int *) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct snd_pcm_substream*,int ) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_oss_file *VAR_8, int VAR_9)
{
 struct snd_pcm_runtime *VAR_10;
 struct snd_pcm_substream *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;





 VAR_11 = VAR_8->streams[VAR_6];
 VAR_12 = VAR_8->streams[VAR_5];

 if (VAR_11) {
  if ((VAR_13 = FUNC_6(VAR_11)) < 0)
   return VAR_13;
 }
 if (VAR_12) {
  if ((VAR_13 = FUNC_6(VAR_12)) < 0)
   return VAR_13;
 }
       if (VAR_11) {
        VAR_10 = VAR_11->runtime;
  VAR_14 = 0;
  if (FUNC_2(&VAR_10->oss.params_lock))
   return -VAR_0;
  if (VAR_9 & VAR_2) {
   if (VAR_10->oss.trigger)
    goto _skip1;
   if (FUNC_0(&VAR_11->mmap_count))
    FUNC_7(VAR_11,
      FUNC_1(VAR_10));
   VAR_10->oss.trigger = 1;
   VAR_10->start_threshold = 1;
   VAR_14 = VAR_4;
  } else {
   if (!VAR_10->oss.trigger)
    goto _skip1;
   VAR_10->oss.trigger = 0;
   VAR_10->start_threshold = VAR_10->boundary;
   VAR_14 = VAR_3;
   VAR_10->oss.prepare = 1;
  }
 _skip1:
  FUNC_3(&VAR_10->oss.params_lock);
  if (VAR_14) {
   VAR_13 = FUNC_5(VAR_11, VAR_14, ((void*)0));
   if (VAR_13 < 0)
    return VAR_13;
  }
 }
 if (VAR_12) {
        VAR_10 = VAR_12->runtime;
  VAR_14 = 0;
  if (FUNC_2(&VAR_10->oss.params_lock))
   return -VAR_0;
  if (VAR_9 & VAR_1) {
   if (VAR_10->oss.trigger)
    goto _skip2;
   VAR_10->oss.trigger = 1;
   VAR_10->start_threshold = 1;
   VAR_14 = VAR_4;
  } else {
   if (!VAR_10->oss.trigger)
    goto _skip2;
   VAR_10->oss.trigger = 0;
   VAR_10->start_threshold = VAR_10->boundary;
   VAR_14 = VAR_3;
   VAR_10->oss.prepare = 1;
  }
 _skip2:
  FUNC_3(&VAR_10->oss.params_lock);
  if (VAR_14) {
   VAR_13 = FUNC_5(VAR_12, VAR_14, ((void*)0));
   if (VAR_13 < 0)
    return VAR_13;
  }
 }
 return 0;
}

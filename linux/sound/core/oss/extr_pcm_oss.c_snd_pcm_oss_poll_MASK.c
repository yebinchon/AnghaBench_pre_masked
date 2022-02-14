
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {scalar_t__ trigger; } ;
struct snd_pcm_runtime {TYPE_2__ oss; TYPE_1__* status; int sleep; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
struct file {struct snd_pcm_oss_file* private_data; } ;
typedef scalar_t__ snd_pcm_state_t ;
typedef int poll_table ;
typedef int ofile ;
typedef int __poll_t ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct snd_pcm_oss_file*,int ,int) ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_oss_file*,int ) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static __poll_t FUNC_7(struct file *VAR_9, poll_table * VAR_10)
{
 struct snd_pcm_oss_file *VAR_11;
 __poll_t VAR_12;
 struct snd_pcm_substream *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);

 VAR_11 = VAR_9->private_data;

 VAR_13 = VAR_11->streams[VAR_8];
 VAR_14 = VAR_11->streams[VAR_7];

 VAR_12 = 0;
 if (VAR_13 != ((void*)0)) {
  struct snd_pcm_runtime *VAR_15 = VAR_13->runtime;
  FUNC_1(VAR_9, &VAR_15->sleep, VAR_10);
  FUNC_5(VAR_13);
  if (VAR_15->status->state != VAR_5 &&
      (VAR_15->status->state != VAR_6 ||
       FUNC_3(VAR_13)))
   VAR_12 |= VAR_1 | VAR_3;
  FUNC_6(VAR_13);
 }
 if (VAR_14 != ((void*)0)) {
  struct snd_pcm_runtime *VAR_16 = VAR_14->runtime;
  snd_pcm_state_t VAR_17;
  FUNC_1(VAR_9, &VAR_16->sleep, VAR_10);
  FUNC_5(VAR_14);
  if ((VAR_17 = VAR_16->status->state) != VAR_6 ||
      FUNC_2(VAR_14))
   VAR_12 |= VAR_0 | VAR_2;
  FUNC_6(VAR_14);
  if (VAR_17 != VAR_6 && VAR_16->oss.trigger) {
   struct snd_pcm_oss_file VAR_18;
   FUNC_0(&VAR_18, 0, sizeof(VAR_18));
   VAR_18.streams[VAR_7] = VAR_11->streams[VAR_7];
   VAR_16->oss.trigger = 0;
   FUNC_4(&VAR_18, VAR_4);
  }
 }

 return VAR_12;
}

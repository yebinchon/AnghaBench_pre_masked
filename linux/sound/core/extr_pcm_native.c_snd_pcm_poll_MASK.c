
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_2__* control; TYPE_1__* status; int sleep; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct file {struct snd_pcm_file* private_data; } ;
typedef int snd_pcm_uframes_t ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {int avail_min; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;




 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_7, poll_table *VAR_8)
{
 struct snd_pcm_file *VAR_9;
 struct snd_pcm_substream *VAR_10;
 struct snd_pcm_runtime *VAR_11;
 __poll_t VAR_12, VAR_13;
 snd_pcm_uframes_t VAR_14;

 VAR_9 = VAR_7->private_data;

 VAR_10 = VAR_9->substream;
 if (VAR_10->stream == VAR_6)
  VAR_13 = VAR_2 | VAR_4;
 else
  VAR_13 = VAR_1 | VAR_3;
 if (FUNC_0(VAR_10))
  return VAR_13 | VAR_0;

 VAR_11 = VAR_10->runtime;
 FUNC_1(VAR_7, &VAR_11->sleep, VAR_8);

 VAR_12 = 0;
 FUNC_3(VAR_10);
 VAR_14 = FUNC_2(VAR_10);
 switch (VAR_11->status->state) {
 case 128:
 case 129:
 case 130:
  if (VAR_14 >= VAR_11->control->avail_min)
   VAR_12 = VAR_13;
  break;
 case 131:
  if (VAR_10->stream == VAR_5) {
   VAR_12 = VAR_13;
   if (!VAR_14)
    VAR_12 |= VAR_0;
  }
  break;
 default:
  VAR_12 = VAR_13 | VAR_0;
  break;
 }
 FUNC_4(VAR_10);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* runtime; TYPE_1__* ops; } ;
struct snd_pcm_hw_params {int rate_den; int info; int fifo_size; void* rate_num; void* msbits; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int dummy; } ;
struct TYPE_5__ {int info; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;
struct TYPE_4__ {int (* ioctl ) (struct snd_pcm_substream*,int ,struct snd_pcm_hw_params*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (struct snd_interval const*) ;
 void* FUNC_4 (struct snd_interval const*) ;
 scalar_t__ FUNC_5 (struct snd_mask const*) ;
 int FUNC_6 (struct snd_pcm_substream*,int ,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_9,
         struct snd_pcm_hw_params *VAR_10)
{
 const struct snd_interval *VAR_11;
 const struct snd_mask *VAR_12;
 int VAR_13;

 if (!VAR_10->msbits) {
  VAR_11 = FUNC_0(VAR_10, VAR_3);
  if (FUNC_3(VAR_11))
   VAR_10->msbits = FUNC_4(VAR_11);
 }

 if (!VAR_10->rate_den) {
  VAR_11 = FUNC_0(VAR_10, VAR_2);
  if (FUNC_3(VAR_11)) {
   VAR_10->rate_num = FUNC_4(VAR_11);
   VAR_10->rate_den = 1;
  }
 }

 if (!VAR_10->fifo_size) {
  VAR_12 = FUNC_1(VAR_10, VAR_1);
  VAR_11 = FUNC_0(VAR_10, VAR_0);
  if (FUNC_5(VAR_12) && FUNC_3(VAR_11)) {
   VAR_13 = VAR_9->ops->ioctl(VAR_9,
     VAR_8, VAR_10);
   if (VAR_13 < 0)
    return VAR_13;
  }
 }

 if (!VAR_10->info) {
  VAR_10->info = VAR_9->runtime->hw.info;
  VAR_10->info &= ~(VAR_5 |
      VAR_4);
  if (!FUNC_2(VAR_9))
   VAR_10->info &= ~(VAR_6 |
       VAR_7);
 }

 return 0;
}

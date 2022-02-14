
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int (* pcm_close ) (struct snd_sof_dev*,struct snd_pcm_substream*) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,struct snd_pcm_substream*) ;

__attribute__((used)) static inline int
FUNC_2(struct snd_sof_dev *VAR_0,
      struct snd_pcm_substream *VAR_1)
{
 if (FUNC_0(VAR_0) && FUNC_0(VAR_0)->pcm_close)
  return FUNC_0(VAR_0)->pcm_close(VAR_0, VAR_1);

 return 0;
}

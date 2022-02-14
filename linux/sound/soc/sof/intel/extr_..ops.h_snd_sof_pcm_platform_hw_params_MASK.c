
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_ipc_stream_params {int dummy; } ;
struct snd_sof_dev {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int (* pcm_hw_params ) (struct snd_sof_dev*,struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct sof_ipc_stream_params*) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct sof_ipc_stream_params*) ;

__attribute__((used)) static inline int
FUNC_2(struct snd_sof_dev *VAR_0,
          struct snd_pcm_substream *VAR_1,
          struct snd_pcm_hw_params *VAR_2,
          struct sof_ipc_stream_params *VAR_3)
{
 if (FUNC_0(VAR_0) && FUNC_0(VAR_0)->pcm_hw_params)
  return FUNC_0(VAR_0)->pcm_hw_params(VAR_0, VAR_1,
          VAR_2, VAR_3);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_ipc_pcm_params_reply {int dummy; } ;
struct snd_sof_dev {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int (* ipc_pcm_params ) (struct snd_sof_dev*,struct snd_pcm_substream*,struct sof_ipc_pcm_params_reply const*) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,struct snd_pcm_substream*,struct sof_ipc_pcm_params_reply const*) ;

__attribute__((used)) static inline int
FUNC_2(struct snd_sof_dev *VAR_0,
         struct snd_pcm_substream *VAR_1,
         const struct sof_ipc_pcm_params_reply *VAR_2)
{
 return FUNC_0(VAR_0)->ipc_pcm_params(VAR_0, VAR_1, VAR_2);
}

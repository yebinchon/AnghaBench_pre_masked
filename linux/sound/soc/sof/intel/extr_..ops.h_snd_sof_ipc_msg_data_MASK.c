
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int (* ipc_msg_data ) (struct snd_sof_dev*,struct snd_pcm_substream*,void*,size_t) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,struct snd_pcm_substream*,void*,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct snd_sof_dev *VAR_0,
     struct snd_pcm_substream *VAR_1,
     void *VAR_2, size_t VAR_3)
{
 FUNC_0(VAR_0)->ipc_msg_data(VAR_0, VAR_1, VAR_2, VAR_3);
}

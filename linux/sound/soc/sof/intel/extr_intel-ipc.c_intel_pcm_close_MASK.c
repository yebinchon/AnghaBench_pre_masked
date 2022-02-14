
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct intel_stream {int dummy; } ;
struct TYPE_2__ {struct intel_stream* private_data; } ;


 int FUNC_0 (struct intel_stream*) ;

int FUNC_1(struct snd_sof_dev *VAR_0,
      struct snd_pcm_substream *VAR_1)
{
 struct intel_stream *VAR_2 = VAR_1->runtime->private_data;

 VAR_1->runtime->private_data = ((void*)0);
 FUNC_0(VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct intel_stream {int dummy; } ;
struct TYPE_2__ {struct intel_stream* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_stream* FUNC_0 (int,int ) ;

int FUNC_1(struct snd_sof_dev *VAR_2,
     struct snd_pcm_substream *VAR_3)
{
 struct intel_stream *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);

 if (!VAR_4)
  return -VAR_0;


 VAR_3->runtime->private_data = VAR_4;

 return 0;
}

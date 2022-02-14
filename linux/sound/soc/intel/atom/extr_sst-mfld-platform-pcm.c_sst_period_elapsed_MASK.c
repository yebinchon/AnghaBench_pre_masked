
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_runtime_stream {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct sst_runtime_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct sst_runtime_stream*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct snd_pcm_substream *VAR_2 = VAR_1;
 struct sst_runtime_stream *VAR_3;
 int VAR_4;

 if (!VAR_2 || !VAR_2->runtime)
  return;
 VAR_3 = VAR_2->runtime->private_data;
 if (!VAR_3)
  return;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 != VAR_0)
  return;
 FUNC_0(VAR_2);
}

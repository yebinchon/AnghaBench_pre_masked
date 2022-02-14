
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {long buffer_bytes; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 long FUNC_0 (int,long) ;
 long FUNC_1 (struct snd_pcm_runtime*,long) ;
 long FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static long FUNC_3(struct snd_pcm_substream *VAR_0, long VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 long VAR_3 = FUNC_2(VAR_0);
 long VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3 == VAR_2->oss.buffer_bytes)
  return VAR_4;



 {
  u64 VAR_5 = (u64)VAR_2->oss.buffer_bytes * (u64)VAR_4;
  return FUNC_0(VAR_5, VAR_3);
 }

}

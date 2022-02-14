
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
typedef int snd_pcm_uframes_t ;
typedef int (* pcm_transfer_f ) (struct snd_pcm_substream*,int ,int ,void*,int ) ;


 int FUNC_0 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0,
       snd_pcm_uframes_t VAR_1, void *VAR_2,
       snd_pcm_uframes_t VAR_3,
       snd_pcm_uframes_t VAR_4,
       pcm_transfer_f VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_0->runtime;


 VAR_1 = FUNC_0(VAR_6, VAR_1);
 VAR_3 = FUNC_0(VAR_6, VAR_3);
 VAR_4 = FUNC_0(VAR_6, VAR_4);
 return VAR_5(VAR_0, 0, VAR_1, VAR_2 + VAR_3, VAR_4);
}

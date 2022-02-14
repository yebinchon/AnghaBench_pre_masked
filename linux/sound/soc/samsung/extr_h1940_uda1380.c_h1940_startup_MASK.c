
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;

 return FUNC_0(VAR_3, 0,
     VAR_0,
     &VAR_1);
}

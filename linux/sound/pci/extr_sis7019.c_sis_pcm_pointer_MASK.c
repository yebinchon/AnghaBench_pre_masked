
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct voice {scalar_t__ ctrl_base; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct voice* private_data; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct voice *VAR_3 = VAR_2->private_data;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->ctrl_base + VAR_0);
 VAR_4 &= 0xffff;
 return VAR_4;
}

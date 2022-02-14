
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int channels; int format; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(
 struct snd_pcm_runtime *VAR_0)
{
 return (VAR_0->channels * FUNC_0(VAR_0->format) / 8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,unsigned int,int,int ,void*,int ,int) ;
 int VAR_1 ;

int FUNC_1(struct snd_pcm_runtime *VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5)
{
 unsigned long VAR_6 = (VAR_5 << 16) | VAR_4;
 return FUNC_0(VAR_2, VAR_3, -1,
        VAR_1,
        (void*) VAR_6,
        VAR_0, -1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_pcm_runtime {int format; int rate; } ;


 int FUNC_0 (int ,int ,int *,size_t) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct snd_pcm_runtime *VAR_0, u8 *VAR_1,
 size_t VAR_2)
{
 return FUNC_0(VAR_0->rate,
          FUNC_1(VAR_0->format),
          VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ rate_num; int rate_den; int rate; } ;
struct snd_es1688 {int dummy; } ;
struct TYPE_2__ {scalar_t__ num; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct snd_es1688*,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_es1688 *VAR_1, struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 unsigned int VAR_4, VAR_5;

 if (VAR_3->rate_num == VAR_0[0].num)
  VAR_4 = 256 - VAR_3->rate_den;
 else
  VAR_4 = 128 - VAR_3->rate_den;

 VAR_5 = 256 - 7160000*20/(8*82*VAR_3->rate);

 FUNC_0(VAR_1, 0xa1, VAR_4);
 FUNC_0(VAR_1, 0xa2, VAR_5);
}

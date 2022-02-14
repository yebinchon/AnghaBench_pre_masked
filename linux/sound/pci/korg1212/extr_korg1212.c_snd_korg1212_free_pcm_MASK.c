
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {struct snd_korg1212* private_data; } ;
struct snd_korg1212 {size_t cardState; int * pcm; } ;


 int FUNC_0 (char*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_1)
{
        struct snd_korg1212 *VAR_2 = VAR_1->private_data;

 FUNC_0("K1212_DEBUG: snd_korg1212_free_pcm [%s]\n",
      VAR_0[VAR_2->cardState]);

        VAR_2->pcm = ((void*)0);
}

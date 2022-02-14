
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_str {int * chmap_kctl; TYPE_1__* pcm; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_str *VAR_0)
{
 if (VAR_0->chmap_kctl) {
  FUNC_0(VAR_0->pcm->card, VAR_0->chmap_kctl);
  VAR_0->chmap_kctl = ((void*)0);
 }
}

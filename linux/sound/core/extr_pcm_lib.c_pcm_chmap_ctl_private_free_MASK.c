
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_chmap {size_t stream; TYPE_2__* pcm; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {TYPE_1__* streams; } ;
struct TYPE_3__ {int * chmap_kctl; } ;


 int FUNC_0 (struct snd_pcm_chmap*) ;
 struct snd_pcm_chmap* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static void FUNC_2(struct snd_kcontrol *VAR_0)
{
 struct snd_pcm_chmap *VAR_1 = FUNC_1(VAR_0);
 VAR_1->pcm->streams[VAR_1->stream].chmap_kctl = ((void*)0);
 FUNC_0(VAR_1);
}

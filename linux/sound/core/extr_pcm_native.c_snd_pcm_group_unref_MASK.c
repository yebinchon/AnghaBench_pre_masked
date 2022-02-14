
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; } ;
struct snd_pcm_group {int refs; } ;
struct TYPE_2__ {int nonatomic; } ;


 int FUNC_0 (struct snd_pcm_group*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_group*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_group *VAR_0,
    struct snd_pcm_substream *VAR_1)
{
 bool VAR_2;

 if (!VAR_0)
  return;
 VAR_2 = FUNC_1(&VAR_0->refs);
 FUNC_2(VAR_0, VAR_1->pcm->nonatomic);
 if (VAR_2)
  FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct atiixp {int open_mutex; int * dmas; scalar_t__ spdif_over_aclink; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;
 struct atiixp* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct atiixp *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;
 FUNC_0(&VAR_3->open_mutex);
 if (VAR_3->spdif_over_aclink)
  VAR_4 = FUNC_2(VAR_2, &VAR_3->dmas[VAR_0]);
 else
  VAR_4 = FUNC_2(VAR_2, &VAR_3->dmas[VAR_1]);
 FUNC_1(&VAR_3->open_mutex);
 return VAR_4;
}

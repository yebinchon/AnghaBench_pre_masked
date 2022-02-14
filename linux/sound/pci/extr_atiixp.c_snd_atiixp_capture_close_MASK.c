
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct atiixp {int * dmas; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int *) ;
 struct atiixp* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct atiixp *VAR_2 = FUNC_1(VAR_1);
 return FUNC_0(VAR_1, &VAR_2->dmas[VAR_0]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct atiixp_modem {int open_mutex; int * dmas; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;
 struct atiixp_modem* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct atiixp_modem *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;
 FUNC_0(&VAR_2->open_mutex);
 VAR_3 = FUNC_2(VAR_1, &VAR_2->dmas[VAR_0]);
 FUNC_1(&VAR_2->open_mutex);
 return VAR_3;
}

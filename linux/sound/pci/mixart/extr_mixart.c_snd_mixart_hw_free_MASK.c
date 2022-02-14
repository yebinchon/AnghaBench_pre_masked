
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_mixart {int mgr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_mixart* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_mixart *VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_1->mgr);
 return 0;
}

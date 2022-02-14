
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_pdm {int dclk; int map; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct axg_pdm* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct axg_pdm *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->map, 0);
 FUNC_1(VAR_2->dclk);
}

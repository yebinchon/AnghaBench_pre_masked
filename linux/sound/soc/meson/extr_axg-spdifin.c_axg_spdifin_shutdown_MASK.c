
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_spdifin {int refclk; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct axg_spdifin* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_2,
     struct snd_soc_dai *VAR_3)
{
 struct axg_spdifin *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_4->map, VAR_0, VAR_1, 0);
 FUNC_0(VAR_4->refclk);
}

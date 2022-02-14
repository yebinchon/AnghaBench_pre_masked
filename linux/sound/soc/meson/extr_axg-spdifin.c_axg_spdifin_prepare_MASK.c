
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_spdifin {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct axg_spdifin* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
          struct snd_soc_dai *VAR_4)
{
 struct axg_spdifin *VAR_5 = FUNC_1(VAR_4);


 FUNC_0(VAR_5->map, VAR_0,
      VAR_2 |
      VAR_1,
      0);


 FUNC_0(VAR_5->map, VAR_0,
      VAR_2, VAR_2);
 FUNC_0(VAR_5->map, VAR_0,
      VAR_1, VAR_1);

 return 0;
}

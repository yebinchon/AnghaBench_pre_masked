
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_pdm {int map; } ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct axg_pdm* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct axg_pdm *VAR_4 = FUNC_2(VAR_3);

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_1(VAR_4->map);
  return 0;

 case 129:
 case 128:
 case 133:
  FUNC_0(VAR_4->map);
  return 0;

 default:
  return -VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct omap_mcbsp {int dev; int st_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct snd_soc_dai*,int ,int ) ;
 struct omap_mcbsp* FUNC_4 (struct snd_soc_dai*) ;

int FUNC_5(struct snd_soc_pcm_runtime *VAR_3, int VAR_4)
{
 struct snd_soc_dai *VAR_5 = VAR_3->cpu_dai;
 struct omap_mcbsp *VAR_6 = FUNC_4(VAR_5);

 if (!VAR_6->st_data) {
  FUNC_2(VAR_6->dev, "No sidetone data for port\n");
  return 0;
 }

 switch (VAR_4) {
 case 2:
  return FUNC_3(VAR_5,
     VAR_1,
     FUNC_0(VAR_1));
 case 3:
  return FUNC_3(VAR_5,
     VAR_2,
     FUNC_0(VAR_2));
 default:
  FUNC_1(VAR_6->dev, "Port %d not supported\n", VAR_4);
  break;
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct omap_dmic {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct omap_dmic*,int,unsigned int) ;
 int FUNC_2 (struct omap_dmic*,int,unsigned int) ;
 struct omap_dmic* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_3, int VAR_4,
        unsigned int VAR_5, int VAR_6)
{
 struct omap_dmic *VAR_7 = FUNC_3(VAR_3);

 if (VAR_6 == VAR_1)
  return FUNC_1(VAR_7, VAR_4, VAR_5);
 else if (VAR_6 == VAR_2)
  return FUNC_2(VAR_7, VAR_4, VAR_5);

 FUNC_0(VAR_7->dev, "invalid clock direction (%d)\n", VAR_6);
 return -VAR_0;
}

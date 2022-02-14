
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs42xx {int pll_lock; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tscs42xx* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_5)
{
 struct tscs42xx *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 FUNC_1(&VAR_6->pll_lock);

 VAR_7 = FUNC_4(VAR_5, VAR_4,
   VAR_0,
   VAR_2);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "Failed to turn PLL off (%d)\n", VAR_7);
  goto exit;
 }
 VAR_7 = FUNC_4(VAR_5, VAR_4,
   VAR_1,
   VAR_3);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "Failed to turn PLL off (%d)\n", VAR_7);
  goto exit;
 }

 VAR_7 = 0;
exit:
 FUNC_2(&VAR_6->pll_lock);

 return VAR_7;
}

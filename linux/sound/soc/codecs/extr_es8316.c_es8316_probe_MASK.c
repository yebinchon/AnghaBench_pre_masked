
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct es8316_priv {int mclk; struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int) ;
 struct es8316_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_4)
{
 struct es8316_priv *VAR_5 = FUNC_7(VAR_4);
 int VAR_6;

 VAR_5->component = VAR_4;

 VAR_5->mclk = FUNC_5(VAR_4->dev, "mclk");
 if (FUNC_0(VAR_5->mclk)) {
  FUNC_3(VAR_4->dev, "unable to get mclk\n");
  return FUNC_1(VAR_5->mclk);
 }
 if (!VAR_5->mclk)
  FUNC_4(VAR_4->dev, "assuming static mclk\n");

 VAR_6 = FUNC_2(VAR_5->mclk);
 if (VAR_6) {
  FUNC_3(VAR_4->dev, "unable to enable mclk\n");
  return VAR_6;
 }


 FUNC_8(VAR_4, VAR_1, 0x3f);
 FUNC_9(5000, 5500);
 FUNC_8(VAR_4, VAR_1, VAR_2);
 FUNC_6(30);





 FUNC_8(VAR_4, VAR_3, 0xff);






 FUNC_8(VAR_4, VAR_0, 0x32);

 return 0;
}

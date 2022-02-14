
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cx2072x_priv {int regmap; struct snd_soc_component* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;
 struct cx2072x_priv* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_4)
{
 struct cx2072x_priv *VAR_5 = FUNC_6(VAR_4);

 VAR_5->codec = VAR_4;
 FUNC_1(VAR_4->dev);
 FUNC_5(VAR_5->regmap, VAR_0, 0);

 FUNC_3(VAR_5->regmap, VAR_3,
          FUNC_0(VAR_3));


 FUNC_4(VAR_5->regmap, VAR_2,
      0x20, 0x20);

 FUNC_4(VAR_5->regmap, VAR_1,
      0x84, 0xff);

 FUNC_5(VAR_5->regmap, VAR_0, 3);
 FUNC_2(VAR_4->dev);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct ak4104_private {int regulator; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ak4104_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_5)
{
 struct ak4104_private *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_6->regulator);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "Unable to enable regulator: %d\n", VAR_7);
  return VAR_7;
 }


 VAR_7 = FUNC_1(VAR_6->regmap, VAR_2,
     VAR_0 | VAR_1,
     VAR_0 | VAR_1);
 if (VAR_7 < 0)
  goto exit_disable_regulator;


 VAR_7 = FUNC_1(VAR_6->regmap, VAR_3,
     VAR_4, VAR_4);
 if (VAR_7 < 0)
  goto exit_disable_regulator;

 return 0;

exit_disable_regulator:
 FUNC_2(VAR_6->regulator);
 return VAR_7;
}

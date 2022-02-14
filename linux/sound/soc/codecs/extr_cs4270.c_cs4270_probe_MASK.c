
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs4270_private {int supplies; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 struct cs4270_private* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_5)
{
 struct cs4270_private *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;






 VAR_7 = FUNC_4(VAR_5, VAR_0, VAR_1, 0);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "i2c write failed\n");
  return VAR_7;
 }






 VAR_7 = FUNC_4(VAR_5, VAR_2,
  VAR_3 | VAR_4, 0);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "i2c write failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(FUNC_0(VAR_6->supplies),
        VAR_6->supplies);

 return VAR_7;
}

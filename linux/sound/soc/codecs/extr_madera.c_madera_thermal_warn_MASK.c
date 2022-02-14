
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int dev; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct madera*,int*,int*) ;
 int FUNC_4 (int ,int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct madera *VAR_7 = VAR_6;
 bool VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7, &VAR_8, &VAR_9);
 if (VAR_10 || VAR_9) {
  FUNC_1(VAR_7->dev, "Thermal shutdown\n");
  VAR_10 = FUNC_4(VAR_7->regmap,
      VAR_4,
      VAR_2 |
      VAR_3, 0);
  if (VAR_10 != 0)
   FUNC_1(VAR_7->dev,
     "Failed to disable speaker outputs: %d\n",
     VAR_10);
 } else if (VAR_8) {
  FUNC_0(VAR_7->dev, "Thermal warning\n");
 } else {
  FUNC_2(VAR_7->dev, "Spurious thermal warning\n");
  return VAR_1;
 }

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct arizona *VAR_8 = VAR_7;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_8->regmap, VAR_0,
     &VAR_9);
 if (VAR_10 != 0) {
  FUNC_1(VAR_8->dev, "Failed to read thermal status: %d\n",
   VAR_10);
 } else if (VAR_9 & VAR_4) {
  FUNC_0(VAR_8->dev, "Thermal shutdown\n");
  VAR_10 = FUNC_3(VAR_8->regmap,
      VAR_3,
      VAR_1 |
      VAR_2, 0);
  if (VAR_10 != 0)
   FUNC_0(VAR_8->dev,
     "Failed to disable speaker outputs: %d\n",
     VAR_10);
 }

 return VAR_5;
}

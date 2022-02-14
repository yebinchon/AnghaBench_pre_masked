
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct arizona *VAR_5 = VAR_4;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_0,
     &VAR_6);
 if (VAR_7 != 0) {
  FUNC_1(VAR_5->dev, "Failed to read thermal status: %d\n",
   VAR_7);
 } else if (VAR_6 & VAR_1) {
  FUNC_0(VAR_5->dev, "Thermal warning\n");
 }

 return VAR_2;
}

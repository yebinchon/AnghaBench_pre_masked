
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8993_priv {int dev; int regmap; int fll_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct wm8993_priv *VAR_9 = VAR_8;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = FUNC_4(VAR_9->regmap, VAR_4, &VAR_11);
 if (VAR_12 != 0) {
  FUNC_3(VAR_9->dev, "Failed to read interrupt status: %d\n",
   VAR_12);
  return VAR_1;
 }

 VAR_12 = FUNC_4(VAR_9->regmap, VAR_3, &VAR_10);
 if (VAR_12 != 0) {
  FUNC_3(VAR_9->dev, "Failed to read interrupt mask: %d\n",
   VAR_12);
  return VAR_1;
 }


 VAR_11 &= ~(VAR_10 | VAR_5);
 if (!VAR_11)
  return VAR_1;

 if (VAR_11 & VAR_6)
  FUNC_1(VAR_9->dev, "Thermal warning\n");

 if (VAR_11 & VAR_2) {
  FUNC_2(VAR_9->dev, "FLL locked\n");
  FUNC_0(&VAR_9->fll_lock);
 }

 VAR_12 = FUNC_5(VAR_9->regmap, VAR_4, VAR_11);
 if (VAR_12 != 0)
  FUNC_3(VAR_9->dev, "Failed to ack interrupt: %d\n", VAR_12);

 return VAR_0;
}

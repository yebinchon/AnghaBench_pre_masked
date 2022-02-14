
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2200_priv {int regmap; int fll_lock; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct wm2200_priv *VAR_7 = VAR_6;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_7->regmap, VAR_3, &VAR_8);
 if (VAR_10 != 0) {
  FUNC_2(VAR_7->dev, "Failed to read IRQ status: %d\n", VAR_10);
  return VAR_1;
 }

 VAR_10 = FUNC_4(VAR_7->regmap, VAR_4,
      &VAR_9);
 if (VAR_10 != 0) {
  FUNC_3(VAR_7->dev, "Failed to read IRQ mask: %d\n", VAR_10);
  VAR_9 = 0;
 }

 VAR_8 &= ~VAR_9;

 if (VAR_8 & VAR_2) {
  FUNC_1(VAR_7->dev, "FLL locked\n");
  FUNC_0(&VAR_7->fll_lock);
 }

 if (VAR_8) {
  FUNC_5(VAR_7->regmap, VAR_3, VAR_8);

  return VAR_0;
 } else {
  return VAR_1;
 }
}

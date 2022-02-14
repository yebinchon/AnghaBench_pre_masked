
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm5100_priv {int regmap; int dev; TYPE_1__* fll; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct wm5100_priv*,unsigned int) ;
 int FUNC_6 (struct wm5100_priv*,unsigned int) ;
 int FUNC_7 (struct wm5100_priv*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 struct wm5100_priv *VAR_11 = VAR_10;
 irqreturn_t VAR_12 = VAR_1;
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(VAR_11->regmap, VAR_5, &VAR_13);
 if (VAR_15 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read IRQ status 3: %d\n",
   VAR_15);
  VAR_13 = 0;
 }

 VAR_15 = FUNC_3(VAR_11->regmap, VAR_6,
     &VAR_14);
 if (VAR_15 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read IRQ mask 3: %d\n",
   VAR_15);
  VAR_14 = 0xffff;
 }

 VAR_13 &= ~VAR_14;

 FUNC_4(VAR_11->regmap, VAR_5, VAR_13);

 if (VAR_13)
  VAR_12 = VAR_0;

 FUNC_5(VAR_11, VAR_13);

 if (VAR_13 & VAR_3) {
  FUNC_1(VAR_11->dev, "FLL1 locked\n");
  FUNC_0(&VAR_11->fll[0].lock);
 }
 if (VAR_13 & VAR_4) {
  FUNC_1(VAR_11->dev, "FLL2 locked\n");
  FUNC_0(&VAR_11->fll[1].lock);
 }

 if (VAR_13 & VAR_2)
  FUNC_7(VAR_11);

 VAR_15 = FUNC_3(VAR_11->regmap, VAR_7, &VAR_13);
 if (VAR_15 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read IRQ status 4: %d\n",
   VAR_15);
  VAR_13 = 0;
 }

 VAR_15 = FUNC_3(VAR_11->regmap, VAR_8,
     &VAR_14);
 if (VAR_15 < 0) {
  FUNC_2(VAR_11->dev, "Failed to read IRQ mask 4: %d\n",
   VAR_15);
  VAR_14 = 0xffff;
 }

 VAR_13 &= ~VAR_14;

 if (VAR_13)
  VAR_12 = VAR_0;

 FUNC_4(VAR_11->regmap, VAR_7, VAR_13);

 FUNC_6(VAR_11, VAR_13);

 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt5677_priv {int irq_lock; int dev; int regmap; int domain; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int status_mask; int polarity_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct rt5677_priv *VAR_7 = VAR_6;
 int VAR_8 = 0, VAR_9, VAR_10, VAR_11, VAR_12;
 bool VAR_13 = 0;

 FUNC_3(&VAR_7->irq_lock);
 for (VAR_9 = 0; VAR_9 < 20; VAR_9++) {

  VAR_8 = FUNC_5(VAR_7->regmap, VAR_2, &VAR_11);
  if (VAR_8) {
   FUNC_0(VAR_7->dev, "failed reading IRQ status: %d\n",
    VAR_8);
   goto exit;
  }

  VAR_13 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   if (VAR_11 & VAR_4[VAR_10].status_mask) {
    VAR_13 = 1;
    VAR_12 = FUNC_2(VAR_7->domain, VAR_10);
    if (VAR_12)
     FUNC_1(VAR_12);




    VAR_11 ^= VAR_4[VAR_10].polarity_mask;
   }
  }
  if (!VAR_13)
   goto exit;

  VAR_8 = FUNC_6(VAR_7->regmap, VAR_2, VAR_11);
  if (VAR_8) {
   FUNC_0(VAR_7->dev, "failed updating IRQ status: %d\n",
    VAR_8);
   goto exit;
  }
 }
exit:
 FUNC_4(&VAR_7->irq_lock);
 if (VAR_13)
  return VAR_0;
 else
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int name; scalar_t__ start; } ;
struct pm860x_priv {int * name; scalar_t__* irq; int regmap; int i2c; struct pm860x_chip* chip; } ;
struct pm860x_chip {scalar_t__ id; scalar_t__ irq_base; int regmap_companion; int regmap; int companion; int client; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct pm860x_chip* FUNC_2 (int ) ;
 struct pm860x_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int) ;
 int FUNC_6 (struct platform_device*,struct pm860x_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 struct pm860x_chip *VAR_9 = FUNC_2(VAR_8->dev.parent);
 struct pm860x_priv *VAR_10;
 struct resource *VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(struct pm860x_priv),
         VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_10->chip = VAR_9;
 VAR_10->i2c = (VAR_9->id == VAR_0) ? VAR_9->client
   : VAR_9->companion;
 VAR_10->regmap = (VAR_9->id == VAR_0) ? VAR_9->regmap
   : VAR_9->regmap_companion;
 FUNC_6(VAR_8, VAR_10);

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  VAR_11 = FUNC_5(VAR_8, VAR_4, VAR_12);
  if (!VAR_11) {
   FUNC_1(&VAR_8->dev, "Failed to get IRQ resources\n");
   return -VAR_1;
  }
  VAR_10->irq[VAR_12] = VAR_11->start + VAR_9->irq_base;
  FUNC_7(VAR_10->name[VAR_12], VAR_11->name, VAR_5);
 }

 VAR_13 = FUNC_4(&VAR_8->dev,
         &VAR_7,
         VAR_6, FUNC_0(VAR_6));
 if (VAR_13) {
  FUNC_1(&VAR_8->dev, "Failed to register component\n");
  return -VAR_1;
 }
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wcd9335_codec {int intr1; TYPE_1__* dev; int irq_data; int regmap; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ,int ,int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct wcd9335_codec *VAR_3)
{
 int VAR_4;






 VAR_3->intr1 = FUNC_2(VAR_3->dev->of_node, "intr1");
 if (VAR_3->intr1 < 0) {
  if (VAR_3->intr1 != -VAR_0)
   FUNC_0(VAR_3->dev, "Unable to configure IRQ\n");

  return VAR_3->intr1;
 }

 VAR_4 = FUNC_1(VAR_3->dev, VAR_3->regmap, VAR_3->intr1,
     VAR_1, 0,
     &VAR_2, &VAR_3->irq_data);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "Failed to register IRQ chip: %d\n", VAR_4);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_desc {int dummy; } ;
struct fe_priv {TYPE_1__* dev; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 struct gpio_desc* FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (struct gpio_desc*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct fe_priv *VAR_1)
{
 int VAR_2, VAR_3 = 30;
 struct gpio_desc *VAR_4;

 VAR_4 = FUNC_3(VAR_1->dev, "phy-reset",
         VAR_0);
 if (!VAR_4)
  return;

 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_1->dev, "Error acquiring reset gpio pins: %ld\n",
   FUNC_1(VAR_4));
  return;
 }

 VAR_2 = FUNC_6(VAR_1->dev->of_node, "phy-reset-duration",
       &VAR_3);
 if (!VAR_2 && VAR_3 > 1000)
  VAR_3 = 30;

 if (VAR_3 > 20)
  FUNC_5(VAR_3);
 else
  FUNC_7(VAR_3 * 1000, VAR_3 * 1000 + 1000);

 FUNC_4(VAR_4, 0);
}

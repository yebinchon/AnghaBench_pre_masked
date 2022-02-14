
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct resource {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mt7620_gsw {int irq; scalar_t__ ephy_base; void* port4; TYPE_1__* dev; int base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct resource*) ;
 struct mt7620_gsw* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct mt7620_gsw*) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct resource *VAR_6 = FUNC_7(VAR_5, VAR_2, 0);
 const char *VAR_7 = ((void*)0);
 struct mt7620_gsw *VAR_8;
 struct device_node *VAR_9 = VAR_5->dev.of_node;
 u16 VAR_10;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(struct mt7620_gsw), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->base = FUNC_2(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->dev = &VAR_5->dev;

 FUNC_4(VAR_9, "mediatek,port4", &VAR_7);
 if (VAR_7 && !FUNC_9(VAR_7, "ephy"))
  VAR_8->port4 = VAR_3;
 else if (VAR_7 && !FUNC_9(VAR_7, "gmac"))
  VAR_8->port4 = VAR_4;
 else
  VAR_8->port4 = VAR_3;

 if (FUNC_5(VAR_9, "mediatek,ephy-base-address", &VAR_10) == 0)
  VAR_8->ephy_base = VAR_10;
 else
  VAR_8->ephy_base = 0;

 VAR_8->irq = FUNC_6(VAR_5, 0);

 FUNC_8(VAR_5, VAR_8);

 return 0;
}

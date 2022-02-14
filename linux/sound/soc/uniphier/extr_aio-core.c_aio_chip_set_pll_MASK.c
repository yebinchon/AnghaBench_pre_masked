
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_chip {TYPE_1__* plls; struct regmap* regmap; TYPE_2__* pdev; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {unsigned int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct regmap*,int ,int,int) ;

int FUNC_2(struct uniphier_aio_chip *VAR_5, int VAR_6,
       unsigned int VAR_7)
{
 struct device *VAR_8 = &VAR_5->pdev->dev;
 struct regmap *VAR_9 = VAR_5->regmap;
 int VAR_10;
 u32 VAR_11;


 if (VAR_7 == 0)
  return 0;

 switch (VAR_6) {
 case 131:
  VAR_10 = 0;
  break;
 case 129:
  VAR_10 = 1;
  break;
 case 130:
  VAR_10 = 2;
  break;
 case 128:
  VAR_10 = 3;
  break;
 default:
  FUNC_0(VAR_8, "PLL(%d) not supported\n", VAR_6);
  return -VAR_4;
 }

 switch (VAR_7) {
 case 36864000:
  VAR_11 = VAR_2;
  break;
 case 33868800:
  VAR_11 = VAR_1;
  break;
 default:
  FUNC_0(VAR_8, "PLL frequency not supported(%d)\n", VAR_7);
  return -VAR_4;
 }
 VAR_5->plls[VAR_6].freq = VAR_7;

 FUNC_1(VAR_9, VAR_0, VAR_3 << VAR_10,
      VAR_11 << VAR_10);

 return 0;
}

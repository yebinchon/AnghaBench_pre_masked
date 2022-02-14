
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio {unsigned int fmt; TYPE_2__* chip; } ;
struct snd_soc_dai {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 int FUNC_0 (struct device*,char*,unsigned int) ;
 struct uniphier_aio* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, unsigned int VAR_3)
{
 struct uniphier_aio *VAR_4 = FUNC_1(VAR_2);
 struct device *VAR_5 = &VAR_4->chip->pdev->dev;

 switch (VAR_3 & VAR_1) {
 case 129:
 case 128:
 case 130:
  VAR_4->fmt = VAR_3 & VAR_1;
  break;
 default:
  FUNC_0(VAR_5, "Format is not supported(%d)\n",
   VAR_3 & VAR_1);
  return -VAR_0;
 }

 return 0;
}

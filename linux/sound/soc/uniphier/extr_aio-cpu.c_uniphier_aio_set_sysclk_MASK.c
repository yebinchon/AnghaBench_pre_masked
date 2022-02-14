
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio {int plldiv; int pll_out; int pll_in; TYPE_2__* chip; } ;
struct snd_soc_dai {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int num_plls; TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct uniphier_aio*,int,unsigned int) ;
 struct uniphier_aio* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_11, int VAR_12,
       unsigned int VAR_13, int VAR_14)
{
 struct uniphier_aio *VAR_15 = FUNC_2(VAR_11);
 struct device *VAR_16 = &VAR_15->chip->pdev->dev;
 bool VAR_17 = 0;
 int VAR_18, VAR_19;

 switch (VAR_12) {
 case 130:
  return -VAR_9;
 case 137:
  VAR_18 = VAR_0;
  break;
 case 133:
  VAR_18 = VAR_3;
  break;
 case 136:
  VAR_18 = VAR_1;
  break;
 case 132:
  VAR_18 = VAR_4;
  break;
 case 138:
  VAR_18 = VAR_0;
  VAR_17 = 1;
  break;
 case 134:
  VAR_18 = VAR_3;
  VAR_17 = 1;
  break;
 case 135:
  VAR_18 = VAR_2;
  break;
 case 129:
  VAR_18 = VAR_6;
  break;
 case 128:
  VAR_18 = VAR_7;
  break;
 case 131:
  VAR_18 = VAR_5;
  break;
 default:
  FUNC_0(VAR_16, "Sysclk(%d) is not supported\n", VAR_12);
  return -VAR_8;
 }

 if (VAR_17) {
  for (VAR_18 = 0; VAR_18 < VAR_15->chip->num_plls; VAR_18++) {
   VAR_19 = FUNC_1(VAR_15, VAR_18, VAR_13);
   if (VAR_19 >= 0) {
    VAR_15->plldiv = VAR_19;
    break;
   }
  }
  if (VAR_18 == VAR_15->chip->num_plls) {
   FUNC_0(VAR_16, "Sysclk frequency is not supported(%d)\n",
    VAR_13);
   return -VAR_8;
  }
 }

 if (VAR_14 == VAR_10)
  VAR_15->pll_out = VAR_18;
 else
  VAR_15->pll_in = VAR_18;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {TYPE_6__* swm; TYPE_3__* aio; } ;
struct uniphier_aio_chip {TYPE_2__* plls; struct regmap* regmap; TYPE_1__* pdev; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int map; } ;
struct TYPE_10__ {int map; } ;
struct TYPE_12__ {scalar_t__ dir; scalar_t__ type; TYPE_5__ iport; TYPE_4__ oport; } ;
struct TYPE_9__ {size_t pll_out; size_t plldiv; struct uniphier_aio_chip* chip; } ;
struct TYPE_8__ {int freq; } ;
struct TYPE_7__ {struct device dev; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (struct device*,char*,size_t) ;
 int FUNC_4 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct uniphier_aio_sub *VAR_22)
{
 struct uniphier_aio_chip *VAR_23 = VAR_22->aio->chip;
 struct device *VAR_24 = &VAR_22->aio->chip->pdev->dev;
 struct regmap *VAR_25 = VAR_22->aio->chip->regmap;
 u32 VAR_26[] = {
  VAR_5, VAR_8,
  VAR_6, VAR_9,
  VAR_7,
  VAR_10,
 };
 u32 VAR_27[] = {
  VAR_12, VAR_13,
  VAR_11, VAR_14,
 };
 u32 VAR_28;

 if (VAR_22->swm->dir == VAR_18) {
  if (VAR_22->swm->type == VAR_20) {
   if (VAR_22->aio->pll_out >= FUNC_0(VAR_26)) {
    FUNC_3(VAR_24, "PLL(%d) is invalid\n",
     VAR_22->aio->pll_out);
    return -VAR_0;
   }
   if (VAR_22->aio->plldiv >= FUNC_0(VAR_27)) {
    FUNC_3(VAR_24, "PLL divider(%d) is invalid\n",
     VAR_22->aio->plldiv);
    return -VAR_0;
   }

   VAR_28 = VAR_26[VAR_22->aio->pll_out] |
    VAR_17 |
    VAR_27[VAR_22->aio->plldiv];

   switch (VAR_23->plls[VAR_22->aio->pll_out].freq) {
   case 0:
   case 36864000:
   case 33868800:
    VAR_28 |= VAR_16;
    break;
   default:
    VAR_28 |= VAR_15;
    break;
   }
  } else if (VAR_22->swm->type == VAR_19) {
   VAR_28 = VAR_7 |
    VAR_17 |
    VAR_16 |
    VAR_12;
  } else if (VAR_22->swm->type == VAR_21) {
   if (VAR_22->aio->pll_out >= FUNC_0(VAR_26)) {
    FUNC_3(VAR_24, "PLL(%d) is invalid\n",
     VAR_22->aio->pll_out);
    return -VAR_0;
   }
   VAR_28 = VAR_26[VAR_22->aio->pll_out] |
    VAR_17 |
    VAR_12;

   switch (VAR_23->plls[VAR_22->aio->pll_out].freq) {
   case 0:
   case 36864000:
   case 33868800:
    VAR_28 |= VAR_16;
    break;
   default:
    VAR_28 |= VAR_15;
    break;
   }
  } else {
   VAR_28 = VAR_5 |
    VAR_17 |
    VAR_16 |
    VAR_12;
  }
  FUNC_4(VAR_25, FUNC_2(VAR_22->swm->oport.map), VAR_28);
 } else {
  VAR_28 = VAR_1 |
   VAR_4 |
   VAR_3 |
   VAR_2;
  FUNC_4(VAR_25, FUNC_1(VAR_22->swm->iport.map), VAR_28);
 }

 return 0;
}

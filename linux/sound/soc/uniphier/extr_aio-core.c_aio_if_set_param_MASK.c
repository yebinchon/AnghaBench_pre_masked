
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
struct uniphier_aio_sub {TYPE_6__* swm; int params; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_11__ {int map; } ;
struct TYPE_10__ {int map; } ;
struct TYPE_9__ {int map; } ;
struct TYPE_12__ {scalar_t__ dir; TYPE_5__ iport; TYPE_4__ iif; TYPE_3__ oif; } ;
struct TYPE_8__ {TYPE_1__* chip; } ;
struct TYPE_7__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct regmap*,int ,int) ;

int FUNC_5(struct uniphier_aio_sub *VAR_13, int VAR_14)
{
 struct regmap *VAR_15 = VAR_13->aio->chip->regmap;
 u32 VAR_16, VAR_17;

 if (VAR_13->swm->dir == VAR_12) {
  if (VAR_14) {
   VAR_17 = VAR_6 |
    VAR_11;
  } else {
   switch (FUNC_3(&VAR_13->params)) {
   case 2:
    VAR_16 = VAR_8;
    break;
   case 6:
    VAR_16 = VAR_9;
    break;
   case 8:
    VAR_16 = VAR_10;
    break;
   default:
    return -VAR_0;
   }
   VAR_17 = VAR_7 | VAR_16;
  }

  FUNC_4(VAR_15, FUNC_1(VAR_13->swm->oif.map), VAR_17);
  FUNC_4(VAR_15, FUNC_2(VAR_13->swm->oif.map), 0);
 } else {
  FUNC_4(VAR_15, FUNC_0(VAR_13->swm->iif.map),
        VAR_4 |
        VAR_2 |
        (VAR_13->swm->iport.map << VAR_5) |
        VAR_1 |
        VAR_3);
 }

 return 0;
}

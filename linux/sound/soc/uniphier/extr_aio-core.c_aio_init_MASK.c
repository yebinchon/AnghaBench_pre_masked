
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct uniphier_aio_sub {TYPE_11__* swm; TYPE_3__* aio; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_22__ {int map; int hw; } ;
struct TYPE_21__ {int map; int hw; } ;
struct TYPE_20__ {int map; int hw; } ;
struct TYPE_19__ {int map; int hw; } ;
struct TYPE_18__ {int map; int hw; } ;
struct TYPE_17__ {int map; int hw; } ;
struct TYPE_16__ {TYPE_2__* chip; } ;
struct TYPE_15__ {struct regmap* regmap; TYPE_1__* pdev; } ;
struct TYPE_14__ {struct device dev; } ;
struct TYPE_12__ {int map; int hw; } ;
struct TYPE_13__ {int type; TYPE_10__ iif; TYPE_9__ och; TYPE_8__ oport; TYPE_7__ oif; TYPE_6__ iport; int dir; TYPE_5__ ch; TYPE_4__ rb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct regmap*,int ,int) ;

int FUNC_8(struct uniphier_aio_sub *VAR_3)
{
 struct device *VAR_4 = &VAR_3->aio->chip->pdev->dev;
 struct regmap *VAR_5 = VAR_3->aio->chip->regmap;

 FUNC_7(VAR_5, FUNC_5(VAR_3->swm->rb.hw),
       VAR_1 | VAR_3->swm->rb.map);
 FUNC_7(VAR_5, FUNC_0(VAR_3->swm->ch.hw),
       VAR_1 | VAR_3->swm->ch.map);

 switch (VAR_3->swm->type) {
 case 129:
 case 128:
 case 130:
  if (VAR_3->swm->dir == VAR_2) {
   FUNC_7(VAR_5, FUNC_1(VAR_3->swm->iif.hw),
         VAR_1 | VAR_3->swm->iif.map);
   FUNC_7(VAR_5, FUNC_2(VAR_3->swm->iport.hw),
         VAR_1 | VAR_3->swm->iport.map);
  } else {
   FUNC_7(VAR_5, FUNC_3(VAR_3->swm->oif.hw),
         VAR_1 | VAR_3->swm->oif.map);
   FUNC_7(VAR_5, FUNC_4(VAR_3->swm->oport.hw),
         VAR_1 | VAR_3->swm->oport.map);
  }
  break;
 case 131:
  FUNC_7(VAR_5, FUNC_3(VAR_3->swm->oif.hw),
        VAR_1 | VAR_3->swm->oif.map);
  FUNC_7(VAR_5, FUNC_4(VAR_3->swm->oport.hw),
        VAR_1 | VAR_3->swm->oport.map);
  FUNC_7(VAR_5, FUNC_0(VAR_3->swm->och.hw),
        VAR_1 | VAR_3->swm->och.map);
  FUNC_7(VAR_5, FUNC_1(VAR_3->swm->iif.hw),
        VAR_1 | VAR_3->swm->iif.map);
  break;
 default:
  FUNC_6(VAR_4, "Unknown port type %d.\n", VAR_3->swm->type);
  return -VAR_0;
 }

 return 0;
}

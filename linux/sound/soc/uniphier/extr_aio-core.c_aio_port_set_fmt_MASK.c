
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
struct uniphier_aio_sub {TYPE_6__* swm; TYPE_4__* aio; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int map; } ;
struct TYPE_9__ {int map; } ;
struct TYPE_12__ {scalar_t__ dir; TYPE_5__ iport; TYPE_3__ oport; } ;
struct TYPE_10__ {int fmt; TYPE_2__* chip; } ;
struct TYPE_8__ {TYPE_1__* pdev; struct regmap* regmap; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;



 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct uniphier_aio_sub *VAR_16)
{
 struct regmap *VAR_17 = VAR_16->aio->chip->regmap;
 struct device *VAR_18 = &VAR_16->aio->chip->pdev->dev;
 u32 VAR_19;

 if (VAR_16->swm->dir == VAR_15) {
  switch (VAR_16->aio->fmt) {
  case 129:
   VAR_19 = VAR_10;
   break;
  case 128:
   VAR_19 = VAR_12;
   break;
  case 130:
   VAR_19 = VAR_9;
   break;
  default:
   FUNC_2(VAR_18, "Format is not supported(%d)\n",
    VAR_16->aio->fmt);
   return -VAR_0;
  }

  VAR_19 |= VAR_13;
  FUNC_3(VAR_17, FUNC_1(VAR_16->swm->oport.map),
       VAR_11 |
       VAR_14, VAR_19);
 } else {
  switch (VAR_16->aio->fmt) {
  case 129:
   VAR_19 = VAR_4;
   break;
  case 128:
   VAR_19 = VAR_6;
   break;
  case 130:
   VAR_19 = VAR_3;
   break;
  default:
   FUNC_2(VAR_18, "Format is not supported(%d)\n",
    VAR_16->aio->fmt);
   return -VAR_0;
  }

  VAR_19 |= VAR_7 |
   VAR_1;
  FUNC_3(VAR_17, FUNC_0(VAR_16->swm->iport.map),
       VAR_5 |
       VAR_8 |
       VAR_2, VAR_19);
 }

 return 0;
}

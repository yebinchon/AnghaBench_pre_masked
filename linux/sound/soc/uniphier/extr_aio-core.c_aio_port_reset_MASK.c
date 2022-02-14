
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_5__* swm; TYPE_4__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_6__ {int map; } ;
struct TYPE_10__ {scalar_t__ dir; TYPE_2__ iport; TYPE_1__ oport; } ;
struct TYPE_9__ {TYPE_3__* chip; } ;
struct TYPE_8__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;
 int FUNC_3 (struct regmap*,int ,int ) ;

void FUNC_4(struct uniphier_aio_sub *VAR_6)
{
 struct regmap *VAR_7 = VAR_6->aio->chip->regmap;

 if (VAR_6->swm->dir == VAR_5) {
  FUNC_3(VAR_7, VAR_0, FUNC_0(VAR_6->swm->oport.map));
  FUNC_3(VAR_7, VAR_1, FUNC_0(VAR_6->swm->oport.map));
 } else {
  FUNC_2(VAR_7, FUNC_1(VAR_6->swm->iport.map),
       VAR_2,
       VAR_4);
  FUNC_2(VAR_7, FUNC_1(VAR_6->swm->iport.map),
       VAR_2,
       VAR_3);
 }
}

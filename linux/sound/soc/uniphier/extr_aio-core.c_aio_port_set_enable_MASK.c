
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


struct uniphier_aio_sub {TYPE_6__* swm; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_11__ {int map; } ;
struct TYPE_10__ {int map; } ;
struct TYPE_9__ {int map; } ;
struct TYPE_12__ {scalar_t__ dir; TYPE_5__ iport; TYPE_4__ oport; TYPE_3__ oif; } ;
struct TYPE_8__ {TYPE_1__* chip; } ;
struct TYPE_7__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_5 (struct regmap*,int ,int,int) ;
 int FUNC_6 (struct regmap*,int ,int ) ;

void FUNC_7(struct uniphier_aio_sub *VAR_18, int VAR_19)
{
 struct regmap *VAR_20 = VAR_18->aio->chip->regmap;

 if (VAR_18->swm->dir == VAR_17) {
  FUNC_6(VAR_20, FUNC_4(VAR_18->swm->oport.map),
        VAR_18->swm->oif.map);

  FUNC_5(VAR_20, FUNC_3(VAR_18->swm->oport.map),
       VAR_11 |
       VAR_13 |
       VAR_9 |
       VAR_15,
       VAR_12 |
       VAR_14 |
       VAR_10 |
       VAR_16);

  if (VAR_19)
   FUNC_6(VAR_20, VAR_0, FUNC_0(VAR_18->swm->oport.map));
  else
   FUNC_6(VAR_20, VAR_1, FUNC_0(VAR_18->swm->oport.map));
 } else {
  FUNC_5(VAR_20, FUNC_2(VAR_18->swm->iport.map),
       VAR_5 |
       VAR_7,
       VAR_6 |
       VAR_8);

  if (VAR_19)
   FUNC_5(VAR_20,
        FUNC_1(VAR_18->swm->iport.map),
        VAR_4,
        VAR_3);
  else
   FUNC_5(VAR_20,
        FUNC_1(VAR_18->swm->iport.map),
        VAR_4,
        VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uniphier_aio_sub {int params; TYPE_4__* swm; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_8__ {scalar_t__ dir; TYPE_3__ oport; } ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct uniphier_aio_sub*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct regmap*,int ,int ,int) ;
 int FUNC_8 (struct regmap*,int ,int ) ;

void FUNC_9(struct uniphier_aio_sub *VAR_8, int VAR_9)
{
 struct regmap *VAR_10 = VAR_8->aio->chip->regmap;
 int VAR_11 = VAR_8->swm->oport.map;
 int VAR_12, VAR_13, VAR_14 = 0, VAR_15;

 if (VAR_8->swm->dir == VAR_7)
  return;

 VAR_12 = FUNC_4(VAR_8);
 VAR_13 = FUNC_3(VAR_9 - VAR_12);
 VAR_15 = FUNC_6(&VAR_8->params);
 if (VAR_15)
  VAR_14 = VAR_13 / VAR_1 * 1000 / VAR_15;
 VAR_14 = FUNC_5(1, VAR_14);

 FUNC_7(VAR_10, FUNC_1(VAR_11, 0),
      VAR_2, VAR_14 << 16);
 FUNC_7(VAR_10, FUNC_2(VAR_11, 0),
      VAR_6, VAR_9);

 if (VAR_12 < VAR_9)
  FUNC_7(VAR_10, FUNC_2(VAR_11, 0),
       VAR_5,
       VAR_3);
 else
  FUNC_7(VAR_10, FUNC_2(VAR_11, 0),
       VAR_5,
       VAR_4);

 FUNC_8(VAR_10, VAR_0, FUNC_0(VAR_11));
}

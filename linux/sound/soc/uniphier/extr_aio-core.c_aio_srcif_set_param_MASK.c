
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_5__* swm; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_9__ {int map; } ;
struct TYPE_8__ {int map; } ;
struct TYPE_10__ {TYPE_4__ oport; TYPE_3__ iif; } ;
struct TYPE_7__ {TYPE_1__* chip; } ;
struct TYPE_6__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct regmap*,int ,int) ;

int FUNC_2(struct uniphier_aio_sub *VAR_5)
{
 struct regmap *VAR_6 = VAR_5->aio->chip->regmap;

 FUNC_1(VAR_6, FUNC_0(VAR_5->swm->iif.map),
       VAR_3 |
       VAR_1 |
       (VAR_5->swm->oport.map << VAR_4) |
       VAR_0 |
       VAR_2);

 return 0;
}

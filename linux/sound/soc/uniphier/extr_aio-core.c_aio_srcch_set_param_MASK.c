
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_3__* swm; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_8__ {int map; } ;
struct TYPE_7__ {TYPE_4__ och; } ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regmap*,int ,int) ;

int FUNC_4(struct uniphier_aio_sub *VAR_7)
{
 struct regmap *VAR_8 = VAR_7->aio->chip->regmap;

 FUNC_3(VAR_8, FUNC_0(VAR_7->swm->och.map),
       VAR_6);

 FUNC_3(VAR_8, FUNC_2(VAR_7->swm->och.map),
       VAR_2 |
       VAR_0 |
       VAR_4);

 FUNC_3(VAR_8, FUNC_1(VAR_7->swm->och.map),
       VAR_2 |
       VAR_1 |
       VAR_5 |
       (VAR_7->swm->och.map << VAR_3));

 return 0;
}

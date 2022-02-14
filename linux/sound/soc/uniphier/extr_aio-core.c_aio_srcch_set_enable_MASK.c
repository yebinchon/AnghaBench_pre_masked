
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {TYPE_4__* swm; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_8__ {TYPE_3__ och; } ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct regmap*,int ,int) ;

void FUNC_2(struct uniphier_aio_sub *VAR_3, int VAR_4)
{
 struct regmap *VAR_5 = VAR_3->aio->chip->regmap;
 u32 VAR_6;

 if (VAR_4)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 FUNC_1(VAR_5, VAR_0,
       VAR_6 | FUNC_0(VAR_3->swm->och.map));
}

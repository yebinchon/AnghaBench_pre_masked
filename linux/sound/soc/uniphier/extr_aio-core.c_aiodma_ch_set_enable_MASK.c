
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_3__* swm; TYPE_5__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_10__ {TYPE_4__* chip; } ;
struct TYPE_9__ {struct regmap* regmap; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_6__ {int map; } ;
struct TYPE_8__ {TYPE_2__ rb; TYPE_1__ ch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct regmap*,int ,int,int) ;
 int FUNC_3 (struct regmap*,int ,int) ;

void FUNC_4(struct uniphier_aio_sub *VAR_3, int VAR_4)
{
 struct regmap *VAR_5 = VAR_3->aio->chip->regmap;

 if (VAR_4) {
  FUNC_3(VAR_5, VAR_0,
        VAR_1 | FUNC_0(VAR_3->swm->ch.map));

  FUNC_2(VAR_5, FUNC_1(0),
       FUNC_0(VAR_3->swm->rb.map),
       FUNC_0(VAR_3->swm->rb.map));
 } else {
  FUNC_3(VAR_5, VAR_0,
        VAR_2 | FUNC_0(VAR_3->swm->ch.map));

  FUNC_2(VAR_5, FUNC_1(0),
       FUNC_0(VAR_3->swm->rb.map),
       0);
 }
}

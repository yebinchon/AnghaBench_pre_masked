
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {TYPE_3__* swm; TYPE_5__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_10__ {TYPE_4__* chip; } ;
struct TYPE_9__ {struct regmap* regmap; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_6__ {int map; } ;
struct TYPE_8__ {scalar_t__ dir; TYPE_2__ ch; TYPE_1__ rb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct regmap*,int ,int) ;

int FUNC_4(struct uniphier_aio_sub *VAR_6)
{
 struct regmap *VAR_7 = VAR_6->aio->chip->regmap;
 u32 VAR_8;

 FUNC_3(VAR_7, FUNC_0(VAR_6->swm->ch.map),
       VAR_4);

 VAR_8 = VAR_1 |
  VAR_0 |
  VAR_3 |
  (VAR_6->swm->rb.map << VAR_2);
 if (VAR_6->swm->dir == VAR_5)
  FUNC_3(VAR_7, FUNC_2(VAR_6->swm->ch.map), VAR_8);
 else
  FUNC_3(VAR_7, FUNC_1(VAR_6->swm->ch.map), VAR_8);

 return 0;
}

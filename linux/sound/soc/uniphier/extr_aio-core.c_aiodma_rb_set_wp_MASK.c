
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct uniphier_aio_sub {TYPE_2__* swm; TYPE_4__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_8__ {TYPE_3__* chip; } ;
struct TYPE_7__ {struct regmap* regmap; } ;
struct TYPE_5__ {int map; } ;
struct TYPE_6__ {TYPE_1__ rb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct regmap*,int ,int *) ;
 int FUNC_5 (struct regmap*,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct uniphier_aio_sub *VAR_1, u64 VAR_2)
{
 struct regmap *VAR_3 = VAR_1->aio->chip->regmap;
 u32 VAR_4;
 int VAR_5;

 FUNC_5(VAR_3, FUNC_1(VAR_1->swm->rb.map),
       FUNC_3(VAR_2));
 FUNC_5(VAR_3, FUNC_2(VAR_1->swm->rb.map),
       FUNC_6(VAR_2));
 FUNC_5(VAR_3, VAR_0, FUNC_0(VAR_1->swm->rb.map));

 for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
  FUNC_4(VAR_3, FUNC_1(VAR_1->swm->rb.map), &VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct uniphier_aio_sub {TYPE_4__* swm; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_8__ {TYPE_3__ rb; } ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct regmap*,int ,scalar_t__) ;

int FUNC_3(struct uniphier_aio_sub *VAR_1, u64 VAR_2, u32 VAR_3)
{
 struct regmap *VAR_4 = VAR_1->aio->chip->regmap;

 if (VAR_2 <= VAR_3)
  return -VAR_0;

 FUNC_2(VAR_4, FUNC_0(VAR_1->swm->rb.map), VAR_3);
 FUNC_2(VAR_4, FUNC_1(VAR_1->swm->rb.map), VAR_3);

 return 0;
}

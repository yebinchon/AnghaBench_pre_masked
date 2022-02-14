
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {TYPE_2__* swm; int params; TYPE_4__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_8__ {TYPE_3__* chip; } ;
struct TYPE_7__ {struct regmap* regmap; } ;
struct TYPE_5__ {int map; } ;
struct TYPE_6__ {TYPE_1__ oport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uniphier_aio_sub *VAR_9)
{
 struct regmap *VAR_10 = VAR_9->aio->chip->regmap;
 u32 VAR_11[] = {
  0, 0, 0, 0, 0,
 };
 u32 VAR_12[] = {
  VAR_4,
  VAR_5,
  VAR_6,
  VAR_7,
  VAR_8,
 };
 u32 VAR_13, *VAR_14;
 int VAR_15;

 switch (FUNC_1(&VAR_9->params)) {
 case 8:
 case 6:
  VAR_13 = VAR_2;
  VAR_14 = VAR_12;
  break;
 case 2:
  VAR_13 = 0;
  VAR_14 = VAR_11;
  break;
 default:
  return -VAR_1;
 }

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  FUNC_2(VAR_10, FUNC_0(VAR_9->swm->oport.map, VAR_15),
       VAR_2, VAR_13);
  FUNC_2(VAR_10, FUNC_0(VAR_9->swm->oport.map, VAR_15),
       VAR_3, VAR_14[VAR_15]);
 }

 return 0;
}

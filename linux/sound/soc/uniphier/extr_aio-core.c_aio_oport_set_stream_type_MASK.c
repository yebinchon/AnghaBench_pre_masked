
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
typedef enum IEC61937_PC { ____Placeholder_IEC61937_PC } IEC61937_PC ;
struct TYPE_7__ {int map; } ;
struct TYPE_8__ {TYPE_3__ oport; } ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {struct regmap* regmap; } ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct regmap*,int ,int) ;

int FUNC_3(struct uniphier_aio_sub *VAR_22,
         enum IEC61937_PC VAR_23)
{
 struct regmap *VAR_24 = VAR_22->aio->chip->regmap;
 u32 VAR_25 = 0, VAR_26 = VAR_0;

 switch (VAR_23) {
 case 134:
  VAR_25 = VAR_16 |
   VAR_9;
  VAR_26 |= VAR_2;
  break;
 case 129:
  VAR_25 = VAR_21 |
   VAR_14;
  VAR_26 |= VAR_7;
  break;
 case 130:
  VAR_25 = VAR_20 |
   VAR_13;
  VAR_26 |= VAR_6;
  break;
 case 133:
  VAR_25 = VAR_17 |
   VAR_10;
  VAR_26 |= VAR_3;
  break;
 case 132:
  VAR_25 = VAR_18 |
   VAR_11;
  VAR_26 |= VAR_4;
  break;
 case 131:
  VAR_25 = VAR_19 |
   VAR_12;
  VAR_26 |= VAR_5;
  break;
 case 135:
  VAR_25 = VAR_15 |
   VAR_8;
  VAR_26 |= VAR_1;
  break;
 case 128:

  break;
 }

 FUNC_2(VAR_24, FUNC_1(VAR_22->swm->oport.map), VAR_25);
 FUNC_2(VAR_24, FUNC_0(VAR_22->swm->oport.map), VAR_26);

 return 0;
}

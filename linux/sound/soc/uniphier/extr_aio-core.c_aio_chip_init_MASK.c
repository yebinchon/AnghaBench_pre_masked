
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_chip {TYPE_1__* chip_spec; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {scalar_t__ addr_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct regmap*,int ,int ,int) ;

void FUNC_1(struct uniphier_aio_chip *VAR_16)
{
 struct regmap *VAR_17 = VAR_16->regmap;

 FUNC_0(VAR_17, VAR_6,
      VAR_7,
      VAR_8);

 FUNC_0(VAR_17, VAR_9,
      VAR_10,
      VAR_11);

 FUNC_0(VAR_17, VAR_0, VAR_2,
      VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_1);

 if (VAR_16->chip_spec->addr_ext)
  FUNC_0(VAR_17, VAR_12, VAR_15,
       VAR_14);
 else
  FUNC_0(VAR_17, VAR_12, VAR_15,
       VAR_13);
}

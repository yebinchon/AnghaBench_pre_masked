
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nau8825 {int regmap; } ;
struct TYPE_2__ {int def; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct nau8825*,int,int ,int) ;
 int FUNC_1 (struct nau8825*) ;
 TYPE_1__* VAR_31 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nau8825*) ;
 int FUNC_4 (struct nau8825*) ;
 int FUNC_5 (struct nau8825*) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct nau8825 *VAR_32)
{
 int VAR_33, VAR_34;


 FUNC_1(VAR_32);

 FUNC_6(VAR_32->regmap, VAR_28,
  VAR_11 | VAR_9 |
  VAR_8, VAR_12 |
  (0x2 << VAR_10) | 0x1);



 VAR_34 = FUNC_2(VAR_27);
 if (VAR_34 != -VAR_0) {
  VAR_33 = VAR_31[VAR_34].def &
    VAR_7;
  FUNC_0(VAR_32, VAR_33, 0, 3);
 }
 FUNC_3(VAR_32);
 FUNC_5(VAR_32);
 FUNC_4(VAR_32);

 FUNC_6(VAR_32->regmap, VAR_25,
  VAR_2 | VAR_3,
  VAR_1 | 0xab);
 FUNC_6(VAR_32->regmap, VAR_26,
  VAR_4 | VAR_6,
  VAR_5 | 0xab);



 FUNC_6(VAR_32->regmap, VAR_29,
  VAR_19 | VAR_18 |
  VAR_14 | VAR_15,
  (0x9 << VAR_20) | VAR_17 |
  VAR_13 | VAR_16);

 FUNC_6(VAR_32->regmap,
  VAR_30, VAR_21, 0);

 FUNC_6(VAR_32->regmap, VAR_24,
  VAR_23 | VAR_22, 0);
}

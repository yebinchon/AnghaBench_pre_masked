
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max98090_priv {int regmap; } ;
struct TYPE_4__ {TYPE_1__* settings; } ;
struct TYPE_3__ {int freq; int* comp; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct max98090_priv *VAR_10,
       int VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_15 = FUNC_1(VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14 = FUNC_2(VAR_11, VAR_12);

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_8) - 1; VAR_18++) {
  if (VAR_13 <= (VAR_8[VAR_18] + VAR_8[VAR_18+1]) / 2)
   break;
 }

 VAR_16 = VAR_9[VAR_15].settings[VAR_14].freq;
 VAR_17 = VAR_9[VAR_15].settings[VAR_14].comp[VAR_18];

 FUNC_3(VAR_10->regmap, VAR_7,
      VAR_4,
      VAR_14 << VAR_5);

 FUNC_3(VAR_10->regmap, VAR_6,
      VAR_0 | VAR_2,
      VAR_17 << VAR_1 |
      VAR_16 << VAR_3);

 return 0;
}

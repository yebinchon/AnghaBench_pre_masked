
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* out_vol_limit; } ;
struct arizona {TYPE_1__ pdata; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__) ;

int FUNC_2(struct arizona *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->pdata.out_vol_limit); ++VAR_3) {
  if (VAR_2->pdata.out_vol_limit[VAR_3])
   FUNC_1(VAR_2->regmap,
        VAR_0 + VAR_3 * 4,
        VAR_1,
        VAR_2->pdata.out_vol_limit[VAR_3]);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic32x4_priv {int supply_av; int supply_dv; int supply_ldo; int supply_iov; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct aic32x4_priv *VAR_0)
{
 FUNC_1(VAR_0->supply_iov);

 if (!FUNC_0(VAR_0->supply_ldo))
  FUNC_1(VAR_0->supply_ldo);

 if (!FUNC_0(VAR_0->supply_dv))
  FUNC_1(VAR_0->supply_dv);

 if (!FUNC_0(VAR_0->supply_av))
  FUNC_1(VAR_0->supply_av);
}

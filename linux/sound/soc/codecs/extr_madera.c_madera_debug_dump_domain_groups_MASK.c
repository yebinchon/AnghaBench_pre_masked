
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_priv {int * domain_group_ref; struct madera* madera; } ;
struct madera {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(const struct madera_priv *VAR_0)
{
 struct madera *VAR_1 = VAR_0->madera;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->domain_group_ref); ++VAR_2)
  FUNC_1(VAR_1->dev, "domain_grp_ref[%d]=%d\n", VAR_2,
   VAR_0->domain_group_ref[VAR_2]);
}

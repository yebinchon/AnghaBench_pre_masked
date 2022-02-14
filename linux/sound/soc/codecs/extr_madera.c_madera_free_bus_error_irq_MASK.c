
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_priv {int * adsp; struct madera* madera; } ;
struct madera {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct madera*,int ,int *) ;

void FUNC_1(struct madera_priv *VAR_1, int VAR_2)
{
 struct madera *VAR_3 = VAR_1->madera;

 FUNC_0(VAR_3,
   VAR_0[VAR_2],
   &VAR_1->adsp[VAR_2]);
}

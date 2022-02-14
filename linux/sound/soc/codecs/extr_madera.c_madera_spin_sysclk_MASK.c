
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_priv {struct madera* madera; } ;
struct madera {int dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct madera_priv *VAR_1)
{
 struct madera *VAR_2 = VAR_1->madera;
 unsigned int VAR_3;
 int VAR_4, VAR_5;


 if (FUNC_1(VAR_2->dev))
  return;





 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_4 = FUNC_2(VAR_2->regmap, VAR_0, &VAR_3);
  if (VAR_4)
   FUNC_0(VAR_2->dev,
    "Failed to read sysclk spin %d: %d\n", VAR_5, VAR_4);
 }

 FUNC_3(300);
}

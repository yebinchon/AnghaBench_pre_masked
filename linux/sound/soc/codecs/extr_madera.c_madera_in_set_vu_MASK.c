
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct madera_priv {int num_inputs; TYPE_1__* madera; } ;
struct TYPE_2__ {int dev; int regmap; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct madera_priv *VAR_2, bool VAR_3)
{
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3)
  VAR_4 = VAR_1;
 else
  VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_inputs; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2->madera->regmap,
      VAR_0 + (VAR_5 * 4),
      VAR_1, VAR_4);
  if (VAR_6)
   FUNC_0(VAR_2->madera->dev,
     "Failed to modify VU bits: %d\n", VAR_6);
 }
}

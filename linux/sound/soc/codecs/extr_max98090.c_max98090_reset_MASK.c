
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max98090_priv {TYPE_1__* component; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct max98090_priv *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_2(VAR_2->regmap, VAR_0,
  VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->component->dev,
   "Failed to reset codec: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_1(20);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct cs4341_priv {int regmap; } ;
struct TYPE_3__ {int def; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct cs4341_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *,int *,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 struct cs4341_priv *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  FUNC_3(VAR_4->regmap, VAR_1[VAR_5].reg,
        VAR_1[VAR_5].def);

 return FUNC_2(VAR_3, &VAR_2,
            &VAR_0, 1);
}

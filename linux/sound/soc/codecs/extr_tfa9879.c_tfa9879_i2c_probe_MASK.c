
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tfa9879_priv {int regmap; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {int def; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tfa9879_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct tfa9879_priv*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6)
{
 struct tfa9879_priv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(VAR_6, VAR_7);

 VAR_7->regmap = FUNC_4(VAR_6, &VAR_4);
 if (FUNC_1(VAR_7->regmap))
  return FUNC_2(VAR_7->regmap);


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++)
  FUNC_7(VAR_7->regmap,
        VAR_5[VAR_8].reg, VAR_5[VAR_8].def);

 return FUNC_5(&VAR_6->dev, &VAR_2,
            &VAR_3, 1);
}

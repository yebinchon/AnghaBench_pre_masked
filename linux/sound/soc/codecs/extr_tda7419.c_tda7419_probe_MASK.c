
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tda7419_data {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {int def; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct tda7419_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,int *,int ) ;
 int FUNC_7 (struct i2c_client*,struct tda7419_data*) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct tda7419_data *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_4(&VAR_5->dev,
          sizeof(struct tda7419_data),
          VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_7(VAR_5, VAR_7);

 VAR_7->regmap = FUNC_5(VAR_5, &VAR_3);
 if (FUNC_1(VAR_7->regmap)) {
  VAR_9 = FUNC_2(VAR_7->regmap);
  FUNC_3(&VAR_5->dev, "error initializing regmap: %d\n",
    VAR_9);
  return VAR_9;
 }







 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
  FUNC_8(VAR_7->regmap,
        VAR_4[VAR_8].reg,
        VAR_4[VAR_8].def);

 VAR_9 = FUNC_6(&VAR_5->dev,
  &VAR_2, ((void*)0), 0);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_5->dev, "error registering component: %d\n",
    VAR_9);
 }

 return VAR_9;
}

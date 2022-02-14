
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sgtl5000_priv {int num_supplies; TYPE_1__* supplies; } ;
struct regulator {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 struct sgtl5000_priv* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int *,int,TYPE_1__*) ;
 struct regulator* FUNC_7 (int *,char*) ;
 int FUNC_8 (struct regulator*) ;
 int * VAR_1 ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 struct regulator *VAR_6;
 struct sgtl5000_priv *VAR_7 = FUNC_3(VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_7->supplies); VAR_4++)
  VAR_7->supplies[VAR_4].supply = VAR_1[VAR_4];

 VAR_6 = FUNC_7(&VAR_2->dev, "VDDD");
 if (FUNC_1(VAR_6)) {

  if (FUNC_2(VAR_6) == -VAR_0)
   return -VAR_0;
 } else {
  VAR_5 = 1;
  FUNC_8(VAR_6);
 }

 VAR_7->num_supplies = FUNC_0(VAR_7->supplies)
     - 1 + VAR_5;
 VAR_3 = FUNC_6(&VAR_2->dev, VAR_7->num_supplies,
     VAR_7->supplies);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_7->num_supplies,
        VAR_7->supplies);
 if (!VAR_3)
  FUNC_9(10, 20);
 else
  FUNC_5(VAR_7->num_supplies,
        VAR_7->supplies);

 return VAR_3;
}

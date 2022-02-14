
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tas5720_data {int devtype; TYPE_1__* supplies; int regmap; struct i2c_client* tas5720_client; } ;
struct regmap_config {int dummy; } ;
struct i2c_device_id {int driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,struct tas5720_data*) ;
 struct tas5720_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_7 (struct device*,int,TYPE_1__*) ;
 int FUNC_8 (struct device*,int *,TYPE_1__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct regmap_config VAR_6 ;
 int * VAR_7 ;
 struct regmap_config VAR_8 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct tas5720_data *VAR_12;
 const struct regmap_config *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_5(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->tas5720_client = VAR_9;
 VAR_12->devtype = VAR_10->driver_data;

 switch (VAR_10->driver_data) {
 case 129:
  VAR_13 = &VAR_6;
  break;
 case 128:
  VAR_13 = &VAR_8;
  break;
 default:
  FUNC_3(VAR_11, "unexpected private driver data\n");
  return -VAR_0;
 }
 VAR_12->regmap = FUNC_6(VAR_9, VAR_13);
 if (FUNC_1(VAR_12->regmap)) {
  VAR_14 = FUNC_2(VAR_12->regmap);
  FUNC_3(VAR_11, "failed to allocate register map: %d\n", VAR_14);
  return VAR_14;
 }

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_12->supplies); VAR_15++)
  VAR_12->supplies[VAR_15].supply = VAR_7[VAR_15];

 VAR_14 = FUNC_7(VAR_11, FUNC_0(VAR_12->supplies),
          VAR_12->supplies);
 if (VAR_14 != 0) {
  FUNC_3(VAR_11, "failed to request supplies: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_4(VAR_11, VAR_12);

 switch (VAR_10->driver_data) {
 case 129:
  VAR_14 = FUNC_8(&VAR_9->dev,
     &VAR_3,
     VAR_5,
     FUNC_0(VAR_5));
  break;
 case 128:
  VAR_14 = FUNC_8(&VAR_9->dev,
     &VAR_4,
     VAR_5,
     FUNC_0(VAR_5));
  break;
 default:
  FUNC_3(VAR_11, "unexpected private driver data\n");
  return -VAR_0;
 }
 if (VAR_14 < 0) {
  FUNC_3(VAR_11, "failed to register component: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}

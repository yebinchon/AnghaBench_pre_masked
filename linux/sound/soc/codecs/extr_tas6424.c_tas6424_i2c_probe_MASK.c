
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct tas6424_data {int fault_check_work; int * regmap; TYPE_1__* supplies; int * mute_gpio; int * standby_gpio; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_6__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,struct tas6424_data*) ;
 void* FUNC_7 (struct device*,char*,int ) ;
 struct tas6424_data* FUNC_8 (struct device*,int,int ) ;
 int * FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (struct device*,int,TYPE_1__*) ;
 int FUNC_11 (struct device*,int *,TYPE_1__*,int) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (int,TYPE_1__*) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_12,
        const struct i2c_device_id *VAR_13)
{
 struct device *VAR_14 = &VAR_12->dev;
 struct tas6424_data *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_15 = FUNC_8(VAR_14, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_0;
 FUNC_6(VAR_14, VAR_15);

 VAR_15->dev = VAR_14;

 VAR_15->regmap = FUNC_9(VAR_12, &VAR_10);
 if (FUNC_2(VAR_15->regmap)) {
  VAR_16 = FUNC_3(VAR_15->regmap);
  FUNC_4(VAR_14, "unable to allocate register map: %d\n", VAR_16);
  return VAR_16;
 }







 VAR_15->standby_gpio = FUNC_7(VAR_14, "standby",
            VAR_4);
 if (FUNC_2(VAR_15->standby_gpio)) {
  if (FUNC_3(VAR_15->standby_gpio) == -VAR_1)
   return -VAR_1;
  FUNC_5(VAR_14, "failed to get standby GPIO: %ld\n",
   FUNC_3(VAR_15->standby_gpio));
  VAR_15->standby_gpio = ((void*)0);
 }







 VAR_15->mute_gpio = FUNC_7(VAR_14, "mute",
            VAR_3);
 if (FUNC_2(VAR_15->mute_gpio)) {
  if (FUNC_3(VAR_15->mute_gpio) == -VAR_1)
   return -VAR_1;
  FUNC_5(VAR_14, "failed to get nmute GPIO: %ld\n",
   FUNC_3(VAR_15->mute_gpio));
  VAR_15->mute_gpio = ((void*)0);
 }

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_15->supplies); VAR_17++)
  VAR_15->supplies[VAR_17].supply = VAR_11[VAR_17];
 VAR_16 = FUNC_10(VAR_14, FUNC_0(VAR_15->supplies),
          VAR_15->supplies);
 if (VAR_16) {
  FUNC_4(VAR_14, "unable to request supplies: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_13(FUNC_0(VAR_15->supplies),
        VAR_15->supplies);
 if (VAR_16) {
  FUNC_4(VAR_14, "unable to enable supplies: %d\n", VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_12(VAR_15->regmap, VAR_5,
     VAR_6, VAR_6);
 if (VAR_16) {
  FUNC_4(VAR_14, "unable to reset device: %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_1(&VAR_15->fault_check_work, VAR_9);

 VAR_16 = FUNC_11(VAR_14, &VAR_7,
         VAR_8, FUNC_0(VAR_8));
 if (VAR_16 < 0) {
  FUNC_4(VAR_14, "unable to register codec: %d\n", VAR_16);
  return VAR_16;
 }

 return 0;
}

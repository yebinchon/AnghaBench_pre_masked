
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct i2c_device_id {unsigned int driver_data; } ;
struct TYPE_7__ {struct device_node* of_node; struct alc5623_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct alc5623_priv {unsigned int id; void* jack_det_ctrl; void* add_ctrl; int regmap; } ;
struct alc5623_platform_data {void* jack_det_ctrl; void* add_ctrl; } ;
struct TYPE_8__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,char*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct alc5623_priv* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (TYPE_1__*,int *,TYPE_2__*,int) ;
 int FUNC_7 (struct i2c_client*,struct alc5623_priv*) ;
 int FUNC_8 (struct device_node*,char*,void**) ;
 int FUNC_9 (int ,int ,unsigned int*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_9,
        const struct i2c_device_id *VAR_10)
{
 struct alc5623_platform_data *VAR_11;
 struct alc5623_priv *VAR_12;
 struct device_node *VAR_13;
 unsigned int VAR_14, VAR_15;
 int VAR_16;
 u32 VAR_17;

 VAR_12 = FUNC_4(&VAR_9->dev, sizeof(struct alc5623_priv),
          VAR_5);
 if (VAR_12 == ((void*)0))
  return -VAR_4;

 VAR_12->regmap = FUNC_5(VAR_9, &VAR_7);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_16 = FUNC_1(VAR_12->regmap);
  FUNC_3(&VAR_9->dev, "Failed to initialise I/O: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_9(VAR_12->regmap, VAR_0, &VAR_14);
 if (VAR_16 < 0) {
  FUNC_3(&VAR_9->dev, "failed to read vendor ID1: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_9(VAR_12->regmap, VAR_1, &VAR_15);
 if (VAR_16 < 0) {
  FUNC_3(&VAR_9->dev, "failed to read vendor ID2: %d\n", VAR_16);
  return VAR_16;
 }
 VAR_15 >>= 8;

 if ((VAR_14 != 0x10ec) || (VAR_15 != VAR_10->driver_data)) {
  FUNC_3(&VAR_9->dev, "unknown or wrong codec\n");
  FUNC_3(&VAR_9->dev, "Expected %x:%lx, got %x:%x\n",
    0x10ec, VAR_10->driver_data,
    VAR_14, VAR_15);
  return -VAR_3;
 }

 FUNC_2(&VAR_9->dev, "Found codec id : alc56%02x\n", VAR_15);

 VAR_11 = VAR_9->dev.platform_data;
 if (VAR_11) {
  VAR_12->add_ctrl = VAR_11->add_ctrl;
  VAR_12->jack_det_ctrl = VAR_11->jack_det_ctrl;
 } else {
  if (VAR_9->dev.of_node) {
   VAR_13 = VAR_9->dev.of_node;
   VAR_16 = FUNC_8(VAR_13, "add-ctrl", &VAR_17);
   if (!VAR_16)
    VAR_12->add_ctrl = VAR_17;
   VAR_16 = FUNC_8(VAR_13, "jack-det-ctrl", &VAR_17);
   if (!VAR_16)
    VAR_12->jack_det_ctrl = VAR_17;
  }
 }

 VAR_12->id = VAR_15;
 switch (VAR_12->id) {
 case 0x21:
  VAR_6.name = "alc5621-hifi";
  break;
 case 0x22:
  VAR_6.name = "alc5622-hifi";
  break;
 case 0x23:
  VAR_6.name = "alc5623-hifi";
  break;
 default:
  return -VAR_2;
 }

 FUNC_7(VAR_9, VAR_12);

 VAR_16 = FUNC_6(&VAR_9->dev,
  &VAR_8, &VAR_6, 1);
 if (VAR_16 != 0)
  FUNC_3(&VAR_9->dev, "Failed to register codec: %d\n", VAR_16);

 return VAR_16;
}

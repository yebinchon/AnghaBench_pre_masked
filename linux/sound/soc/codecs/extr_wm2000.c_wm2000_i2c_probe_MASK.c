
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u16 ;
struct wm2000_priv {int speech_clarity; int anc_download_size; int* anc_download; int anc_eng_ena; int anc_active; int spk_ena; TYPE_1__* supplies; struct i2c_client* i2c; int mclk; int regmap; int lock; } ;
struct wm2000_platform_data {char* download_file; int speech_enh_disable; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {int supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int) ;
 struct wm2000_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *,struct wm2000_priv*) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int *,int,TYPE_1__*) ;
 int FUNC_10 (int *,int *,int *,int ) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,unsigned int*) ;
 int FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (int,TYPE_1__*) ;
 int FUNC_16 (struct firmware const*) ;
 int FUNC_17 (struct firmware const**,char const*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (struct wm2000_priv*) ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_10,
       const struct i2c_device_id *VAR_11)
{
 struct wm2000_priv *VAR_12;
 struct wm2000_platform_data *VAR_13;
 const char *VAR_14;
 const struct firmware *VAR_15 = ((void*)0);
 int VAR_16, VAR_17;
 unsigned int VAR_18;
 u16 VAR_19;

 VAR_12 = FUNC_7(&VAR_10->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_12(&VAR_12->lock);

 FUNC_5(&VAR_10->dev, VAR_12);

 VAR_12->regmap = FUNC_8(VAR_10, &VAR_8);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_16 = FUNC_1(VAR_12->regmap);
  FUNC_2(&VAR_10->dev, "Failed to allocate register map: %d\n",
   VAR_16);
  goto out;
 }

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
  VAR_12->supplies[VAR_17].supply = VAR_9[VAR_17];

 VAR_16 = FUNC_9(&VAR_10->dev, VAR_3,
          VAR_12->supplies);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_10->dev, "Failed to get supplies: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_15(VAR_3, VAR_12->supplies);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_10->dev, "Failed to enable supplies: %d\n", VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_13(VAR_12->regmap, VAR_4, &VAR_18);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_10->dev, "Unable to read ID1: %d\n", VAR_16);
  return VAR_16;
 }
 VAR_19 = VAR_18 << 8;
 VAR_16 = FUNC_13(VAR_12->regmap, VAR_5, &VAR_18);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_10->dev, "Unable to read ID2: %d\n", VAR_16);
  return VAR_16;
 }
 VAR_19 |= VAR_18 & 0xff;

 if (VAR_19 != 0x2000) {
  FUNC_2(&VAR_10->dev, "Device is not a WM2000 - ID %x\n", VAR_19);
  VAR_16 = -VAR_0;
  goto err_supplies;
 }

 VAR_16 = FUNC_13(VAR_12->regmap, VAR_6, &VAR_18);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_10->dev, "Unable to read Revision: %d\n", VAR_16);
  return VAR_16;
 }
 FUNC_4(&VAR_10->dev, "revision %c\n", VAR_18 + 'A');

 VAR_12->mclk = FUNC_6(&VAR_10->dev, "MCLK");
 if (FUNC_0(VAR_12->mclk)) {
  VAR_16 = FUNC_1(VAR_12->mclk);
  FUNC_2(&VAR_10->dev, "Failed to get MCLK: %d\n", VAR_16);
  goto err_supplies;
 }

 VAR_14 = "wm2000_anc.bin";
 VAR_13 = FUNC_3(&VAR_10->dev);
 if (VAR_13) {
  VAR_12->speech_clarity = !VAR_13->speech_enh_disable;

  if (VAR_13->download_file)
   VAR_14 = VAR_13->download_file;
 }

 VAR_16 = FUNC_17(&VAR_15, VAR_14, &VAR_10->dev);
 if (VAR_16 != 0) {
  FUNC_2(&VAR_10->dev, "Failed to acquire ANC data: %d\n", VAR_16);
  goto err_supplies;
 }


 VAR_12->anc_download_size = VAR_15->size + 2;
 VAR_12->anc_download = FUNC_7(&VAR_10->dev,
         VAR_12->anc_download_size,
         VAR_2);
 if (VAR_12->anc_download == ((void*)0)) {
  VAR_16 = -VAR_1;
  goto err_supplies;
 }

 VAR_12->anc_download[0] = 0x80;
 VAR_12->anc_download[1] = 0x00;
 FUNC_11(VAR_12->anc_download + 2, VAR_15->data, VAR_15->size);

 VAR_12->anc_eng_ena = 1;
 VAR_12->anc_active = 1;
 VAR_12->spk_ena = 1;
 VAR_12->i2c = VAR_10;

 FUNC_18(VAR_12);

 VAR_16 = FUNC_10(&VAR_10->dev,
     &VAR_7, ((void*)0), 0);

err_supplies:
 FUNC_14(VAR_3, VAR_12->supplies);

out:
 FUNC_16(VAR_15);
 return VAR_16;
}

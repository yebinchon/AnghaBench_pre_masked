
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2000_priv {scalar_t__ anc_mode; int anc_download_size; int supplies; scalar_t__ speech_clarity; int regmap; int anc_download; int mclk; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 struct wm2000_priv* FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,int ,int ) ;
 int FUNC_10 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_27, int VAR_28)
{
 struct wm2000_priv *VAR_29 = FUNC_4(&VAR_27->dev);
 unsigned long VAR_30;
 unsigned int VAR_31;
 int VAR_32;

 if (FUNC_0(VAR_29->anc_mode != VAR_1))
  return -VAR_2;

 FUNC_2(&VAR_27->dev, "Beginning power up\n");

 VAR_32 = FUNC_8(VAR_14, VAR_29->supplies);
 if (VAR_32 != 0) {
  FUNC_3(&VAR_27->dev, "Failed to enable supplies: %d\n", VAR_32);
  return VAR_32;
 }

 VAR_30 = FUNC_1(VAR_29->mclk);
 if (VAR_30 <= 13500000) {
  FUNC_2(&VAR_27->dev, "Disabling MCLK divider\n");
  FUNC_10(VAR_27, VAR_19,
        VAR_9);
 } else {
  FUNC_2(&VAR_27->dev, "Enabling MCLK divider\n");
  FUNC_10(VAR_27, VAR_19,
        VAR_10);
 }

 FUNC_10(VAR_27, VAR_19, VAR_5);
 FUNC_10(VAR_27, VAR_19, VAR_7);


 if (!FUNC_9(VAR_27, VAR_17,
        VAR_6)) {
  FUNC_3(&VAR_27->dev, "ANC engine failed to reset\n");
  FUNC_7(VAR_14, VAR_29->supplies);
  return -VAR_4;
 }

 if (!FUNC_9(VAR_27, VAR_23,
        VAR_25)) {
  FUNC_3(&VAR_27->dev, "ANC engine failed to initialise\n");
  FUNC_7(VAR_14, VAR_29->supplies);
  return -VAR_4;
 }

 FUNC_10(VAR_27, VAR_19, VAR_15);



 FUNC_2(&VAR_27->dev, "Downloading %d bytes\n",
  VAR_29->anc_download_size - 2);

 VAR_32 = FUNC_5(VAR_27, VAR_29->anc_download,
         VAR_29->anc_download_size);
 if (VAR_32 < 0) {
  FUNC_3(&VAR_27->dev, "i2c_transfer() failed: %d\n", VAR_32);
  FUNC_7(VAR_14, VAR_29->supplies);
  return VAR_32;
 }
 if (VAR_32 != VAR_29->anc_download_size) {
  FUNC_3(&VAR_27->dev, "i2c_transfer() failed, %d != %d\n",
   VAR_32, VAR_29->anc_download_size);
  FUNC_7(VAR_14, VAR_29->supplies);
  return -VAR_3;
 }

 FUNC_2(&VAR_27->dev, "Download complete\n");

 if (VAR_28) {
  FUNC_10(VAR_27, VAR_16, 248 / 4);

  FUNC_10(VAR_27, VAR_20,
        VAR_11 |
        VAR_12 |
        VAR_13);
 } else {
  FUNC_10(VAR_27, VAR_20,
        VAR_12 |
        VAR_13);
 }

 VAR_32 = FUNC_6(VAR_29->regmap, VAR_18, &VAR_31);
 if (VAR_32 != 0) {
  FUNC_3(&VAR_27->dev, "Unable to read Speech Clarity: %d\n", VAR_32);
  FUNC_7(VAR_14, VAR_29->supplies);
  return VAR_32;
 }
 if (VAR_29->speech_clarity)
  VAR_31 |= VAR_24;
 else
  VAR_31 &= ~VAR_24;
 FUNC_10(VAR_27, VAR_18, VAR_31);

 FUNC_10(VAR_27, VAR_21, 0x33);
 FUNC_10(VAR_27, VAR_22, 0x02);

 FUNC_10(VAR_27, VAR_19, VAR_8);

 if (!FUNC_9(VAR_27, VAR_23,
        VAR_26)) {
  FUNC_3(&VAR_27->dev, "Timed out waiting for device\n");
  FUNC_7(VAR_14, VAR_29->supplies);
  return -VAR_4;
 }

 FUNC_2(&VAR_27->dev, "ANC active\n");
 if (VAR_28)
  FUNC_2(&VAR_27->dev, "Analogue active\n");
 VAR_29->anc_mode = VAR_0;

 return 0;
}

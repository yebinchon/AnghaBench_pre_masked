
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2000_priv {scalar_t__ anc_mode; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
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
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct wm2000_priv* FUNC_3 (int *) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_16, int VAR_17)
{
 struct wm2000_priv *VAR_18 = FUNC_3(&VAR_16->dev);

 if (FUNC_0(VAR_18->anc_mode != VAR_0))
  return -VAR_2;

 if (VAR_17) {
  FUNC_5(VAR_16, VAR_12,
        VAR_5 |
        VAR_7 |
        VAR_6);
 } else {
  FUNC_5(VAR_16, VAR_12,
        VAR_7 |
        VAR_6);
 }

 if (!FUNC_4(VAR_16, VAR_13,
        VAR_14)) {
  FUNC_2(&VAR_16->dev, "Timeout waiting for ANC disable\n");
  return -VAR_3;
 }

 if (!FUNC_4(VAR_16, VAR_9,
        VAR_4)) {
  FUNC_2(&VAR_16->dev, "Timeout waiting for ANC engine idle\n");
  return -VAR_3;
 }

 FUNC_5(VAR_16, VAR_10, VAR_15);
 FUNC_5(VAR_16, VAR_11, VAR_8);

 VAR_18->anc_mode = VAR_1;
 FUNC_1(&VAR_16->dev, "bypass enabled\n");

 return 0;
}


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
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct wm2000_priv* FUNC_3 (int *) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_14, int VAR_15)
{
 struct wm2000_priv *VAR_16 = FUNC_3(&VAR_14->dev);

 if (FUNC_0(VAR_16->anc_mode != VAR_1))
  return -VAR_2;

 FUNC_5(VAR_14, VAR_9, 0);

 if (VAR_15) {
  FUNC_5(VAR_14, VAR_11,
        VAR_5 |
        VAR_6 |
        VAR_7);
 } else {
  FUNC_5(VAR_14, VAR_11,
        VAR_6 |
        VAR_7);
 }

 FUNC_5(VAR_14, VAR_10, VAR_8);
 FUNC_5(VAR_14, VAR_10, VAR_4);

 if (!FUNC_4(VAR_14, VAR_12,
        VAR_13)) {
  FUNC_2(&VAR_14->dev, "Timed out waiting for MOUSE\n");
  return -VAR_3;
 }

 VAR_16->anc_mode = VAR_0;
 FUNC_1(&VAR_14->dev, "MOUSE active\n");

 return 0;
}

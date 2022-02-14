
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2000_priv {int anc_mode; int supplies; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct wm2000_priv* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_11, int VAR_12)
{
 struct wm2000_priv *VAR_13 = FUNC_2(&VAR_11->dev);

 if (VAR_12) {
  FUNC_5(VAR_11, VAR_6, 248 / 4);
  FUNC_5(VAR_11, VAR_8,
        VAR_3 |
        VAR_4);
 } else {
  FUNC_5(VAR_11, VAR_8,
        VAR_4);
 }

 if (!FUNC_4(VAR_11, VAR_9,
        VAR_10)) {
  FUNC_1(&VAR_11->dev, "Timeout waiting for ANC power down\n");
  return -VAR_1;
 }

 if (!FUNC_4(VAR_11, VAR_7,
        VAR_2)) {
  FUNC_1(&VAR_11->dev, "Timeout waiting for ANC engine idle\n");
  return -VAR_1;
 }

 FUNC_3(VAR_5, VAR_13->supplies);

 FUNC_0(&VAR_11->dev, "powered off\n");
 VAR_13->anc_mode = VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm1250_priv {TYPE_1__* gpios; } ;
struct wm1250_ev1_pdata {int * gpios; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {void* flags; int label; int gpio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 struct wm1250_ev1_pdata* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct wm1250_priv*) ;
 struct wm1250_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_7)
{
 struct wm1250_ev1_pdata *VAR_8 = FUNC_2(&VAR_7->dev);
 struct wm1250_priv *VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_8)
  return 0;

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto err;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9->gpios); VAR_10++) {
  VAR_9->gpios[VAR_10].gpio = VAR_8->gpios[VAR_10];
  VAR_9->gpios[VAR_10].label = VAR_6[VAR_10];
  VAR_9->gpios[VAR_10].flags = VAR_3;
 }
 VAR_9->gpios[VAR_4].flags = VAR_2;
 VAR_9->gpios[VAR_5].flags = VAR_2;

 VAR_11 = FUNC_5(VAR_9->gpios, FUNC_0(VAR_9->gpios));
 if (VAR_11 != 0) {
  FUNC_1(&VAR_7->dev, "Failed to get GPIOs: %d\n", VAR_11);
  goto err;
 }

 FUNC_3(&VAR_7->dev, VAR_9);

 return VAR_11;

err:
 return VAR_11;
}

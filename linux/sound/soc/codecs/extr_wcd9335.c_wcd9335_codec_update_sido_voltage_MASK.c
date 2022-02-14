
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int dev; } ;
typedef enum wcd9335_sido_voltage { ____Placeholder_wcd9335_sido_voltage } wcd9335_sido_voltage ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wcd9335_codec*,int) ;
 int FUNC_2 (struct wcd9335_codec*,int) ;

__attribute__((used)) static int FUNC_3(struct wcd9335_codec *VAR_0,
          enum wcd9335_sido_voltage VAR_1)
{
 int VAR_2 = 0;


 VAR_2 = FUNC_1(VAR_0, 1);
 if (VAR_2) {
  FUNC_0(VAR_0->dev, "Ext clk enable failed\n");
  goto err;
 }

 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, 0);

err:
 return VAR_2;
}

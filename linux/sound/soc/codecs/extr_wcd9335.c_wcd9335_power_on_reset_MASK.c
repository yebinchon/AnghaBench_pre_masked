
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int reset_gpio; int supplies; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct wcd9335_codec *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_1->supplies);
 if (VAR_3) {
  FUNC_0(VAR_2, "Failed to get supplies: err = %d\n", VAR_3);
  return VAR_3;
 }
 FUNC_5(600, 650);

 FUNC_1(VAR_1->reset_gpio, 0);
 FUNC_3(20);
 FUNC_2(VAR_1->reset_gpio, 1);
 FUNC_3(20);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {struct device* dev; } ;
struct device {int dummy; } ;
struct slim_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,struct wcd9335_codec*) ;
 struct wcd9335_codec* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct wcd9335_codec*) ;
 int FUNC_4 (struct wcd9335_codec*) ;

__attribute__((used)) static int FUNC_5(struct slim_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct wcd9335_codec *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = VAR_3;
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3, "Error parsing DT: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3, VAR_4);

 return 0;
}

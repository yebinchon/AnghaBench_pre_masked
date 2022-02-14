
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct cros_ec_device {int dummy; } ;
struct cros_ec_codec_data {struct cros_ec_device* ec_device; struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cros_ec_device* FUNC_1 (int ) ;
 struct cros_ec_codec_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int *,int ,int ) ;
 int FUNC_4 (struct platform_device*,struct cros_ec_codec_data*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct cros_ec_device *VAR_6 = FUNC_1(VAR_4->dev.parent);
 struct cros_ec_codec_data *VAR_7;

 VAR_7 = FUNC_2(VAR_5, sizeof(struct cros_ec_codec_data),
      VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_5;
 VAR_7->ec_device = VAR_6;

 FUNC_4(VAR_4, VAR_7);

 return FUNC_3(VAR_5, &VAR_2,
       VAR_3, FUNC_0(VAR_3));
}

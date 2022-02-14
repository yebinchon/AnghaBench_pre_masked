
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ar8327_led {int enable_hw_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 struct ar8327_led* FUNC_1 (struct led_classdev*) ;
 scalar_t__ FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_0(VAR_1);
 struct ar8327_led *VAR_5 = FUNC_1(VAR_4);
 ssize_t VAR_6 = 0;

 VAR_6 += FUNC_2(VAR_3, VAR_0, "%d\n", VAR_5->enable_hw_mode);

 return VAR_6;
}

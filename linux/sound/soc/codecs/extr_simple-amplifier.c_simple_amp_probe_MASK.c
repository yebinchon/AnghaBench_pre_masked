
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_amp {int gpiod_enable; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct simple_amp* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *,int *,int ) ;
 int FUNC_6 (struct platform_device*,struct simple_amp*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct simple_amp *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 FUNC_6(VAR_5, VAR_7);

 VAR_7->gpiod_enable = FUNC_3(VAR_6, "enable",
           VAR_3);
 if (FUNC_0(VAR_7->gpiod_enable)) {
  VAR_8 = FUNC_1(VAR_7->gpiod_enable);
  if (VAR_8 != -VAR_1)
   FUNC_2(VAR_6, "Failed to get 'enable' gpio: %d", VAR_8);
  return VAR_8;
 }

 return FUNC_5(VAR_6,
            &VAR_4,
            ((void*)0), 0);
}

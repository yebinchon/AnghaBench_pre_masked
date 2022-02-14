
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2305 {int gpiod_shutdown; } ;
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
 struct ssm2305* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *,int *,int ) ;
 int FUNC_6 (struct platform_device*,struct ssm2305*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct ssm2305 *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(VAR_5, VAR_7);


 VAR_7->gpiod_shutdown = FUNC_3(VAR_6, "shutdown",
           VAR_3);
 if (FUNC_0(VAR_7->gpiod_shutdown)) {
  VAR_8 = FUNC_1(VAR_7->gpiod_shutdown);
  if (VAR_8 != -VAR_1)
   FUNC_2(VAR_6, "Failed to get 'shutdown' gpio: %d\n",
    VAR_8);
  return VAR_8;
 }

 return FUNC_5(VAR_6, &VAR_4,
            ((void*)0), 0);
}

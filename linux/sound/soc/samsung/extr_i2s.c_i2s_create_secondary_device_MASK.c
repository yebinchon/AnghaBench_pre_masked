
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_i2s_priv {struct platform_device* pdev_sec; TYPE_1__* pdev; } ;
struct platform_device {int dev; int driver_override; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct platform_device*) ;
 struct platform_device* FUNC_6 (char const*,int) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*) ;

__attribute__((used)) static int FUNC_9(struct samsung_i2s_priv *VAR_2)
{
 struct platform_device *VAR_3;
 const char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_2->pdev->dev, VAR_1, "%s-sec",
     FUNC_1(&VAR_2->pdev->dev));
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_6(VAR_4, -1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->driver_override = FUNC_4("samsung-i2s", VAR_1);

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 < 0) {
  FUNC_7(VAR_3);
  return VAR_5;
 }

 VAR_5 = FUNC_2(&VAR_3->dev);
 if (VAR_5 <= 0) {
  FUNC_8(VAR_2->pdev_sec);
  FUNC_0(&VAR_3->dev, "device_attach() failed\n");
  return VAR_5;
 }

 VAR_2->pdev_sec = VAR_3;

 return 0;
}

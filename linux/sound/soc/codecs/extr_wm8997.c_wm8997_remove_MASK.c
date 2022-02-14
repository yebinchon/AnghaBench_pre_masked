
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct arizona* arizona; } ;
struct wm8997_priv {TYPE_1__ core; } ;
struct platform_device {int dev; } ;
struct arizona {int dummy; } ;


 int FUNC_0 (struct arizona*) ;
 struct wm8997_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct wm8997_priv *VAR_1 = FUNC_1(VAR_0);
 struct arizona *VAR_2 = VAR_1->core.arizona;

 FUNC_2(&VAR_0->dev);

 FUNC_0(VAR_2);

 return 0;
}

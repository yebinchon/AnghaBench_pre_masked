
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct wm5110_priv {TYPE_1__ core; } ;
struct platform_device {int dev; } ;
struct arizona {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arizona*,int ,struct wm5110_priv*) ;
 int FUNC_1 (struct arizona*) ;
 int FUNC_2 (struct arizona*,int ,int ) ;
 struct wm5110_priv* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct wm5110_priv *VAR_3 = FUNC_3(VAR_2);
 struct arizona *VAR_4 = VAR_3->core.arizona;
 int VAR_5;

 FUNC_4(&VAR_2->dev);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_5(&VAR_3->core.adsp[VAR_5]);

 FUNC_1(VAR_4);

 FUNC_2(VAR_4, VAR_0, 0);
 FUNC_0(VAR_4, VAR_0, VAR_3);

 return 0;
}

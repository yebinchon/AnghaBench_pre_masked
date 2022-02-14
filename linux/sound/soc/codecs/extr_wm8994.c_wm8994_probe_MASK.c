
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wm8994_priv {int wm8994; int fw_lock; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct wm8994_priv* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,struct wm8994_priv*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct wm8994_priv *VAR_5;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(struct wm8994_priv),
         VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 FUNC_5(VAR_4, VAR_5);

 FUNC_4(&VAR_5->fw_lock);

 VAR_5->wm8994 = FUNC_1(VAR_4->dev.parent);

 FUNC_6(&VAR_4->dev);
 FUNC_7(&VAR_4->dev);

 return FUNC_3(&VAR_4->dev, &VAR_2,
   VAR_3, FUNC_0(VAR_3));
}

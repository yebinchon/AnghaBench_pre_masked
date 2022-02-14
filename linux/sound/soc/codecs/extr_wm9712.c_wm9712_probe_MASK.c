
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9712_priv {int mfd_pdata; int lock; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct wm9712_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,struct wm9712_priv*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct wm9712_priv *VAR_5;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_4(&VAR_5->lock);

 VAR_5->mfd_pdata = FUNC_1(&VAR_4->dev);
 FUNC_5(VAR_4, VAR_5);

 return FUNC_3(&VAR_4->dev,
   &VAR_2, VAR_3, FUNC_0(VAR_3));
}

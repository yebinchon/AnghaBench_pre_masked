
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uda1334_priv {void* deemph; void* mute; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct uda1334_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (struct platform_device*,struct uda1334_priv*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct uda1334_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(struct uda1334_priv),
          VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(VAR_5, VAR_6);

 VAR_6->mute = FUNC_3(&VAR_5->dev, "nxp,mute", VAR_2);
 if (FUNC_0(VAR_6->mute)) {
  VAR_7 = FUNC_1(VAR_6->mute);
  FUNC_2(&VAR_5->dev, "Failed to get mute line: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_6->deemph = FUNC_3(&VAR_5->dev, "nxp,deemph", VAR_2);
 if (FUNC_0(VAR_6->deemph)) {
  VAR_7 = FUNC_1(VAR_6->deemph);
  FUNC_2(&VAR_5->dev, "Failed to get deemph line: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_5(&VAR_5->dev,
           &VAR_3,
           &VAR_4, 1);
 if (VAR_7 < 0)
  FUNC_2(&VAR_5->dev, "Failed to register component: %d\n", VAR_7);

 return VAR_7;
}

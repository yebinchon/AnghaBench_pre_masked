
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct max98357a_priv {scalar_t__ sdmode_delay; int sdmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct max98357a_priv*) ;
 int FUNC_4 (int *,char*,scalar_t__*) ;
 int FUNC_5 (int *,char*,int ) ;
 struct max98357a_priv* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct max98357a_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->sdmode = FUNC_5(&VAR_5->dev,
    "sdmode", VAR_2);
 if (FUNC_0(VAR_6->sdmode))
  return FUNC_1(VAR_6->sdmode);

 VAR_7 = FUNC_4(&VAR_5->dev, "sdmode-delay",
     &VAR_6->sdmode_delay);
 if (VAR_7) {
  VAR_6->sdmode_delay = 0;
  FUNC_2(&VAR_5->dev,
   "no optional property 'sdmode-delay' found, "
   "default: no delay\n");
 }

 FUNC_3(&VAR_5->dev, VAR_6);

 return FUNC_7(&VAR_5->dev,
   &VAR_3,
   &VAR_4, 1);
}

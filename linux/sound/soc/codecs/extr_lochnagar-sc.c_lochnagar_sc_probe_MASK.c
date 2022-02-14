
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lochnagar_sc_priv {int mclk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 struct lochnagar_sc_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct platform_device*,struct lochnagar_sc_priv*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct lochnagar_sc_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->mclk = FUNC_4(&VAR_4->dev, "mclk");
 if (FUNC_1(VAR_5->mclk)) {
  VAR_6 = FUNC_2(VAR_5->mclk);
  FUNC_3(&VAR_4->dev, "Failed to get MCLK: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_7(VAR_4, VAR_5);

 return FUNC_6(&VAR_4->dev,
            &VAR_3,
            VAR_2,
            FUNC_0(VAR_2));
}

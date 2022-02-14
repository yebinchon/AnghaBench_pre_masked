
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3036_codec_priv {int pclk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct rk3036_codec_priv* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct rk3036_codec_priv *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1->pclk);

 return 0;
}

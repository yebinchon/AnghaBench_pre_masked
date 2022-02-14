
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec_device {int clk; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ac97_codec_device *VAR_0)
{
 int VAR_1;

 VAR_0->clk = FUNC_2(&VAR_0->dev, "ac97_clk");
 if (FUNC_0(VAR_0->clk))
  return FUNC_1(VAR_0->clk);

 VAR_1 = FUNC_3(VAR_0->clk);
 if (VAR_1)
  FUNC_4(VAR_0->clk);

 return VAR_1;
}

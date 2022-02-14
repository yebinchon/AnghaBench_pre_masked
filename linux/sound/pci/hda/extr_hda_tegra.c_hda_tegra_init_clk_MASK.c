
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_tegra {void* hda2hdmi_clk; void* hda2codec_2x_clk; void* hda_clk; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct hda_tegra *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 VAR_0->hda_clk = FUNC_3(VAR_1, "hda");
 if (FUNC_0(VAR_0->hda_clk)) {
  FUNC_2(VAR_1, "failed to get hda clock\n");
  return FUNC_1(VAR_0->hda_clk);
 }
 VAR_0->hda2codec_2x_clk = FUNC_3(VAR_1, "hda2codec_2x");
 if (FUNC_0(VAR_0->hda2codec_2x_clk)) {
  FUNC_2(VAR_1, "failed to get hda2codec_2x clock\n");
  return FUNC_1(VAR_0->hda2codec_2x_clk);
 }
 VAR_0->hda2hdmi_clk = FUNC_3(VAR_1, "hda2hdmi");
 if (FUNC_0(VAR_0->hda2hdmi_clk)) {
  FUNC_2(VAR_1, "failed to get hda2hdmi clock\n");
  return FUNC_1(VAR_0->hda2hdmi_clk);
 }

 return 0;
}

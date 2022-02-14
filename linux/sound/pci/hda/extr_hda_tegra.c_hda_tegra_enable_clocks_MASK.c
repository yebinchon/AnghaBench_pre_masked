
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_tegra {int hda_clk; int hda2codec_2x_clk; int hda2hdmi_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hda_tegra *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->hda_clk);
 if (VAR_1)
  return VAR_1;
 VAR_1 = FUNC_1(VAR_0->hda2codec_2x_clk);
 if (VAR_1)
  goto disable_hda;
 VAR_1 = FUNC_1(VAR_0->hda2hdmi_clk);
 if (VAR_1)
  goto disable_codec_2x;

 return 0;

disable_codec_2x:
 FUNC_0(VAR_0->hda2codec_2x_clk);
disable_hda:
 FUNC_0(VAR_0->hda_clk);
 return VAR_1;
}

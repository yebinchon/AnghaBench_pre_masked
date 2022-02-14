
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int codec_dai; TYPE_1__* card; } ;
struct imx_sgtl5000_data {int clk_frequency; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct imx_sgtl5000_data* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_2)
{
 struct imx_sgtl5000_data *VAR_3 = FUNC_1(VAR_2->card);
 struct device *VAR_4 = VAR_2->card->dev;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2->codec_dai, VAR_0,
         VAR_3->clk_frequency, VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4, "could not set codec driver clock params\n");
  return VAR_5;
 }

 return 0;
}

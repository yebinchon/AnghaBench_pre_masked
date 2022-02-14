
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_out_dev {int running; int clk; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct spdif_out_dev* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct spdif_out_dev*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
  struct snd_soc_dai *VAR_3)
{
 struct spdif_out_dev *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 if (VAR_2->stream != VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4->clk);
 if (VAR_5)
  return VAR_5;

 VAR_4->running = 1;
 FUNC_2(VAR_4);

 return 0;
}

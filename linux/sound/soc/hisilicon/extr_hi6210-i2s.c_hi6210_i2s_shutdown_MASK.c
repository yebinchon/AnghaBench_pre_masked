
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct hi6210_i2s {int clocks; int sysctrl; int * clk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct hi6210_i2s* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct hi6210_i2s *VAR_3 = FUNC_2(VAR_2->dev);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->clocks; VAR_4++)
  FUNC_1(VAR_3->clk[VAR_4]);

 FUNC_3(VAR_3->sysctrl, VAR_0, FUNC_0(5));
}

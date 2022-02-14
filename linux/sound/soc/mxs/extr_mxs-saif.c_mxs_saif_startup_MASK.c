
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct mxs_saif {int clk; scalar_t__ base; scalar_t__ fifo_overrun; scalar_t__ fifo_underrun; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 struct mxs_saif* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
      struct snd_soc_dai *VAR_5)
{
 struct mxs_saif *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;


 VAR_6->fifo_underrun = 0;
 VAR_6->fifo_overrun = 0;


 FUNC_0(VAR_1,
  VAR_6->base + VAR_3 + VAR_2);


 FUNC_0(VAR_0,
  VAR_6->base + VAR_3 + VAR_2);

 VAR_7 = FUNC_1(VAR_6->clk);
 if (VAR_7)
  return VAR_7;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct jz4740_i2s {scalar_t__ version; int capture_dma_data; int playback_dma_data; int clk_aic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct jz4740_i2s*) ;
 int FUNC_2 (struct jz4740_i2s*,int ,int) ;
 struct jz4740_i2s* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_10)
{
 struct jz4740_i2s *VAR_11 = FUNC_3(VAR_10);
 uint32_t VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_11->clk_aic);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_11);
 FUNC_4(VAR_10, &VAR_11->playback_dma_data,
  &VAR_11->capture_dma_data);

 if (VAR_11->version >= VAR_8) {
  VAR_12 = (7 << VAR_0) |
   (8 << VAR_1) |
   VAR_6 |
   VAR_4 |
   VAR_5;
 } else {
  VAR_12 = (7 << VAR_2) |
   (8 << VAR_3) |
   VAR_6 |
   VAR_4 |
   VAR_5;
 }

 FUNC_2(VAR_11, VAR_9, VAR_7);
 FUNC_2(VAR_11, VAR_9, VAR_12);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {scalar_t__ active; } ;
struct snd_pcm_substream {int dummy; } ;
struct jz4740_i2s {int clk_i2s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct jz4740_i2s*,int ) ;
 int FUNC_2 (struct jz4740_i2s*,int ,int ) ;
 struct jz4740_i2s* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_2,
 struct snd_soc_dai *VAR_3)
{
 struct jz4740_i2s *VAR_4 = FUNC_3(VAR_3);
 uint32_t VAR_5;

 if (VAR_3->active)
  return;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 VAR_5 &= ~VAR_0;
 FUNC_2(VAR_4, VAR_1, VAR_5);

 FUNC_0(VAR_4->clk_i2s);
}

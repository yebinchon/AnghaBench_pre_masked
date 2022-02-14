
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct jz4740_i2s*,int ) ;
 int FUNC_2 (struct jz4740_i2s*,int ,int ) ;
 struct jz4740_i2s* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
 struct snd_soc_dai *VAR_5)
{
 struct jz4740_i2s *VAR_6 = FUNC_3(VAR_5);
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 if (VAR_5->active)
  return 0;

 VAR_8 = FUNC_1(VAR_6, VAR_3);
 VAR_8 |= VAR_1;
 FUNC_2(VAR_6, VAR_3, VAR_8);

 VAR_9 = FUNC_0(VAR_6->clk_i2s);
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 VAR_7 |= VAR_0;
 FUNC_2(VAR_6, VAR_2, VAR_7);

 return 0;
}

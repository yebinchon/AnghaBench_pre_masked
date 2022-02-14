
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct jz4740_i2s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;






 int FUNC_0 (struct jz4740_i2s*,int ) ;
 int FUNC_1 (struct jz4740_i2s*,int ,int) ;
 struct jz4740_i2s* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_7, int VAR_8,
 struct snd_soc_dai *VAR_9)
{
 struct jz4740_i2s *VAR_10 = FUNC_2(VAR_9);

 uint32_t VAR_11;
 uint32_t VAR_12;

 if (VAR_7->stream == VAR_6)
  VAR_12 = VAR_2 | VAR_4;
 else
  VAR_12 = VAR_1 | VAR_3;

 VAR_11 = FUNC_0(VAR_10, VAR_5);

 switch (VAR_8) {
 case 130:
 case 131:
 case 132:
  VAR_11 |= VAR_12;
  break;
 case 129:
 case 128:
 case 133:
  VAR_11 &= ~VAR_12;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_10, VAR_5, VAR_11);

 return 0;
}

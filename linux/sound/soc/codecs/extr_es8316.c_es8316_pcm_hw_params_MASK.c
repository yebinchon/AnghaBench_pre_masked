
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct es8316_priv {unsigned int const sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (struct snd_pcm_hw_params*) ;
 unsigned int const FUNC_1 (struct snd_pcm_hw_params*) ;
 struct es8316_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;
 unsigned int* VAR_9 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_10,
    struct snd_pcm_hw_params *VAR_11,
    struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct es8316_priv *VAR_14 = FUNC_2(VAR_13);
 u8 VAR_15 = 0;
 int VAR_16;


 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  const unsigned int VAR_17 = VAR_9[VAR_16];

  if (VAR_14->sysclk % VAR_17 != 0)
   continue;
  if (VAR_14->sysclk / VAR_17 == FUNC_1(VAR_11))
   break;
 }
 if (VAR_16 == VAR_8)
  return -VAR_0;

 switch (FUNC_0(VAR_11)) {
 case 131:
  VAR_15 = VAR_1;
  break;
 case 130:
  VAR_15 = VAR_2;
  break;
 case 129:
  VAR_15 = VAR_3;
  break;
 case 128:
  VAR_15 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(VAR_13, VAR_7,
       VAR_5, VAR_15);
 FUNC_3(VAR_13, VAR_6,
       VAR_5, VAR_15);
 return 0;
}

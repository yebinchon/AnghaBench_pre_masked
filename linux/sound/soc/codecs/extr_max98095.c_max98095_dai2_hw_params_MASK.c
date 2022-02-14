
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98095_priv {scalar_t__ sysclk; struct max98095_cdata* dai; } ;
struct max98095_cdata {unsigned int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_4 (unsigned int,int *) ;
 struct max98095_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_10,
       struct snd_pcm_hw_params *VAR_11,
       struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct max98095_priv *VAR_14 = FUNC_5(VAR_13);
 struct max98095_cdata *VAR_15;
 unsigned long long VAR_16;
 unsigned int VAR_17;
 u8 VAR_18;

 VAR_15 = &VAR_14->dai[1];

 VAR_17 = FUNC_2(VAR_11);

 switch (FUNC_3(VAR_11)) {
 case 16:
  FUNC_7(VAR_13, VAR_4,
   VAR_9, 0);
  break;
 case 24:
  FUNC_7(VAR_13, VAR_4,
   VAR_9, VAR_9);
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_4(VAR_17, &VAR_18))
  return -VAR_0;

 FUNC_7(VAR_13, VAR_1,
  VAR_6, VAR_18);
 VAR_15->rate = VAR_17;


 if (FUNC_6(VAR_13, VAR_4) & VAR_8) {
  if (VAR_14->sysclk == 0) {
   FUNC_0(VAR_13->dev, "Invalid system clock frequency\n");
   return -VAR_0;
  }
  VAR_16 = 65536ULL * (VAR_17 < 50000 ? 96ULL : 48ULL)
    * (unsigned long long int)VAR_17;
  FUNC_1(VAR_16, (unsigned long long int)VAR_14->sysclk);
  FUNC_8(VAR_13, VAR_2,
   (VAR_16 >> 8) & 0x7F);
  FUNC_8(VAR_13, VAR_3,
   VAR_16 & 0xFF);
 }


 if (VAR_17 < 50000)
  FUNC_7(VAR_13, VAR_5,
   VAR_7, 0);
 else
  FUNC_7(VAR_13, VAR_5,
   VAR_7, VAR_7);

 return 0;
}

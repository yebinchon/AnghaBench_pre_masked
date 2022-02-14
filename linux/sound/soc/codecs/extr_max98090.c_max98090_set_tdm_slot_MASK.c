
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct max98090_priv {int tdm_slots; int tdm_width; int dai_fmt; struct max98090_cdata* dai; } ;
struct max98090_cdata {scalar_t__ fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_soc_dai*,int ) ;
 struct max98090_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_7,
 unsigned int VAR_8, unsigned int VAR_9, int VAR_10, int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_7->component;
 struct max98090_priv *VAR_13 = FUNC_1(VAR_12);
 struct max98090_cdata *VAR_14;
 VAR_14 = &VAR_13->dai[0];

 if (VAR_10 < 0 || VAR_10 > 4)
  return -VAR_0;

 VAR_13->tdm_slots = VAR_10;
 VAR_13->tdm_width = VAR_11;

 if (VAR_13->tdm_slots > 1) {

  FUNC_3(VAR_12, VAR_2,
   0 << VAR_5 |
   1 << VAR_6 |
   0 << VAR_4);


  FUNC_2(VAR_12, VAR_1,
   VAR_3,
   VAR_3);
 }




 VAR_14->fmt = 0;
 FUNC_0(VAR_7, VAR_13->dai_fmt);

 return 0;
}

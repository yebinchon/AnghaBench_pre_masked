
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max98090_priv {int shdn_pending; } ;
typedef enum snd_soc_dapm_type { ____Placeholder_snd_soc_dapm_type } snd_soc_dapm_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct max98090_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_2,
 enum snd_soc_dapm_type VAR_3, int VAR_4)
{
 struct max98090_priv *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->shdn_pending) {
  FUNC_2(VAR_2, VAR_0,
    VAR_1, 0);
  FUNC_0(40);
  FUNC_2(VAR_2, VAR_0,
    VAR_1, VAR_1);
  VAR_5->shdn_pending = 0;
 }
}

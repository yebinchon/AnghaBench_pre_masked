
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct aic31xx_priv {int master_dapm_route_applied; int codec_type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct aic31xx_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_5,
           unsigned int VAR_6)
{
 struct snd_soc_dapm_context *VAR_7 = FUNC_1(VAR_5);
 struct aic31xx_priv *VAR_8 = FUNC_2(VAR_5);
 int VAR_9;

 VAR_6 &= VAR_2;
 if (VAR_6 == VAR_1 &&
     VAR_8->master_dapm_route_applied) {




  VAR_9 = FUNC_4(VAR_7, VAR_4,
     FUNC_0(VAR_4));
  if (!VAR_9 && !(VAR_8->codec_type & VAR_0))
   VAR_9 = FUNC_4(VAR_7,
     VAR_3,
     FUNC_0(VAR_3));

  if (VAR_9)
   return VAR_9;

  VAR_8->master_dapm_route_applied = 0;
 } else if (VAR_6 != VAR_1 &&
     !VAR_8->master_dapm_route_applied) {




  VAR_9 = FUNC_3(VAR_7, VAR_4,
     FUNC_0(VAR_4));
  if (!VAR_9 && !(VAR_8->codec_type & VAR_0))
   VAR_9 = FUNC_3(VAR_7,
     VAR_3,
     FUNC_0(VAR_3));

  if (VAR_9)
   return VAR_9;

  VAR_8->master_dapm_route_applied = 1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct ad193x_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ad193x_priv*) ;
 int FUNC_2 (struct ad193x_priv*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_soc_component*) ;
 struct ad193x_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_3)
{
 struct ad193x_priv *VAR_4 = FUNC_5(VAR_3);
 struct snd_soc_dapm_context *VAR_5 = FUNC_4(VAR_3);
 int VAR_6, VAR_7;


 FUNC_2(VAR_4);


 if (FUNC_1(VAR_4)) {

  VAR_6 = FUNC_0(VAR_1);
  VAR_7 = FUNC_3(VAR_3,
       VAR_1,
       VAR_6);
  if (VAR_7)
   return VAR_7;


  VAR_6 = FUNC_0(VAR_2);
  VAR_7 = FUNC_7(VAR_5,
      VAR_2,
      VAR_6);
  if (VAR_7)
   return VAR_7;


  VAR_6 = FUNC_0(VAR_0);
  VAR_7 = FUNC_6(VAR_5,
           VAR_0,
           VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}

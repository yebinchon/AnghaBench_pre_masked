
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct adau1977 {int type; } ;



 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct adau1977* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = FUNC_1(VAR_1);
 struct adau1977 *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 switch (VAR_3->type) {
 case 128:
  VAR_4 = FUNC_3(VAR_2,
   VAR_0,
   FUNC_0(VAR_0));
  if (VAR_4 < 0)
   return VAR_4;
  break;
 default:
  break;
 }

 return 0;
}

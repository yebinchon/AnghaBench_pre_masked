
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 = FUNC_3(VAR_3);
 struct device *VAR_5 = VAR_3->dev;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3,
          VAR_0,
          FUNC_0(VAR_0));
 if (VAR_6) {
  FUNC_1(VAR_5, "Failed to add Line In controls: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_4, VAR_2,
     FUNC_0(VAR_2));
 if (VAR_6) {
  FUNC_1(VAR_5, "Failed to add Line In DAPM widgets: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_4, VAR_1,
          FUNC_0(VAR_1));
 if (VAR_6) {
  FUNC_1(VAR_5, "Failed to add Line In DAPM routes: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}

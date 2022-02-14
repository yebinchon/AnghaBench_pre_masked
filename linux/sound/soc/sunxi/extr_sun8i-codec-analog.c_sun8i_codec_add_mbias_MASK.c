
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_0,
     FUNC_0(VAR_0));
 if (VAR_4)
  FUNC_1(VAR_3, "Failed to add MBIAS DAPM widgets: %d\n", VAR_4);

 return VAR_4;
}

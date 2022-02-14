
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm2_machine_priv {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_soc_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 struct tm2_machine_priv* FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_card *VAR_3)
{
 struct tm2_machine_priv *VAR_4 = FUNC_1(VAR_3);
 struct snd_soc_component *VAR_5 = VAR_4->component;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_2, 0, 0, 0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5->dev, "Failed to stop FLL1: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_1,
           VAR_0, 0, 0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5->dev, "Failed to stop SYSCLK: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}

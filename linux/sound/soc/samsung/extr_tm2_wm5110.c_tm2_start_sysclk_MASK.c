
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm2_machine_priv {int sysclk_rate; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_soc_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 struct tm2_machine_priv* FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_card *VAR_7)
{
 struct tm2_machine_priv *VAR_8 = FUNC_1(VAR_7);
 struct snd_soc_component *VAR_9 = VAR_8->component;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9, VAR_6,
        VAR_2,
        VAR_3,
        VAR_8->sysclk_rate);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to set FLL1 source: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_9, VAR_5,
        VAR_2,
        VAR_3,
        VAR_8->sysclk_rate);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to start FLL1: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_9, VAR_1,
           VAR_0,
           VAR_8->sysclk_rate,
           VAR_4);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to set SYSCLK source: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}

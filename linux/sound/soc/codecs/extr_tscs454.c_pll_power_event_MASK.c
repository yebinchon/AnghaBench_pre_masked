
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs454 {int dummy; } ;
struct snd_soc_dapm_widget {int name; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_soc_component*,struct tscs454*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 struct tscs454* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 struct snd_soc_component* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_8,
  struct snd_kcontrol *VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 =
  FUNC_5(VAR_8->dapm);
 struct tscs454 *VAR_12 = FUNC_3(VAR_11);
 bool VAR_13;
 bool VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 if (FUNC_6(VAR_8->name, "PLL 1"))
  VAR_14 = 1;
 else
  VAR_14 = 0;

 VAR_15 = VAR_14 ? VAR_0 : VAR_1;

 if (VAR_10 == VAR_7)
  VAR_13 = 1;
 else
  VAR_13 = 0;

 if (VAR_13)
  VAR_16 = VAR_14 ? VAR_3 : VAR_5;
 else
  VAR_16 = VAR_14 ? VAR_2 : VAR_4;

 VAR_17 = FUNC_4(VAR_11, VAR_6, VAR_15, VAR_16);
 if (VAR_17 < 0) {
  FUNC_1(VAR_11->dev, "Failed to %s PLL %d  (%d)\n",
    VAR_13 ? "enable" : "disable",
    VAR_14 ? 1 : 2,
    VAR_17);
  return VAR_17;
 }

 if (VAR_13) {
  FUNC_2(20);
  VAR_17 = FUNC_0(VAR_11, VAR_12);
  if (VAR_17 < 0) {
   FUNC_1(VAR_11->dev,
     "Failed to sync coeff ram (%d)\n", VAR_17);
   return VAR_17;
  }
 }

 return 0;
}

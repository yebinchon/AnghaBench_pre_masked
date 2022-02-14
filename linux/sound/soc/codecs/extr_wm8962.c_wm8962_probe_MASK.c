
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8962_priv {TYPE_1__* disable_nb; TYPE_2__* supplies; struct snd_soc_component* component; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_4__ {int consumer; } ;
struct TYPE_3__ {int notifier_call; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct wm8962_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_8 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_component*) ;
 int FUNC_11 (struct snd_soc_component*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_11)
{
 struct snd_soc_dapm_context *VAR_12 = FUNC_5(VAR_11);
 int VAR_13;
 struct wm8962_priv *VAR_14 = FUNC_6(VAR_11);
 int VAR_15;
 bool VAR_16, VAR_17;

 VAR_14->component = VAR_11;

 VAR_14->disable_nb[0].notifier_call = VAR_3;
 VAR_14->disable_nb[1].notifier_call = VAR_4;
 VAR_14->disable_nb[2].notifier_call = VAR_5;
 VAR_14->disable_nb[3].notifier_call = VAR_6;
 VAR_14->disable_nb[4].notifier_call = VAR_7;
 VAR_14->disable_nb[5].notifier_call = VAR_8;
 VAR_14->disable_nb[6].notifier_call = VAR_9;
 VAR_14->disable_nb[7].notifier_call = VAR_10;


 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->supplies); VAR_15++) {
  VAR_13 = FUNC_4(
      VAR_14->supplies[VAR_15].consumer,
      &VAR_14->disable_nb[VAR_15]);
  if (VAR_13 != 0) {
   FUNC_2(VAR_11->dev,
    "Failed to register regulator notifier: %d\n",
    VAR_13);
  }
 }

 FUNC_9(VAR_11);


 VAR_16 = 0;
 VAR_17 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  switch (FUNC_7(VAR_11, VAR_1 + VAR_15)
   & VAR_0) {
  case 129:
   VAR_16 = 1;
   break;
  case 128:
   VAR_17 = 1;
   break;
  default:
   break;
  }
 }
 if (!VAR_16 || !VAR_17) {
  FUNC_1(VAR_11->dev, "DMIC not in use, disabling\n");
  FUNC_8(VAR_12, "DMICDAT");
 }
 if (VAR_16 != VAR_17)
  FUNC_3(VAR_11->dev, "DMIC GPIOs partially configured\n");

 FUNC_10(VAR_11);
 FUNC_11(VAR_11);

 return 0;
}

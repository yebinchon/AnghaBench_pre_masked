
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm8995_priv {TYPE_1__* supplies; TYPE_3__* disable_nb; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_7__ {int notifier_call; } ;
struct TYPE_6__ {int consumer; int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 struct wm8995_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_9 (struct snd_soc_component*,int ,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int * VAR_36 ;
 int FUNC_10 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_37)
{
 struct wm8995_priv *VAR_38;
 int VAR_39;
 int VAR_40;

 VAR_38 = FUNC_6(VAR_37);
 VAR_38->component = VAR_37;

 for (VAR_39 = 0; VAR_39 < FUNC_0(VAR_38->supplies); VAR_39++)
  VAR_38->supplies[VAR_39].supply = VAR_36[VAR_39];

 VAR_40 = FUNC_2(VAR_37->dev,
          FUNC_0(VAR_38->supplies),
          VAR_38->supplies);
 if (VAR_40) {
  FUNC_1(VAR_37->dev, "Failed to request supplies: %d\n", VAR_40);
  return VAR_40;
 }

 VAR_38->disable_nb[0].notifier_call = VAR_28;
 VAR_38->disable_nb[1].notifier_call = VAR_29;
 VAR_38->disable_nb[2].notifier_call = VAR_30;
 VAR_38->disable_nb[3].notifier_call = VAR_31;
 VAR_38->disable_nb[4].notifier_call = VAR_32;
 VAR_38->disable_nb[5].notifier_call = VAR_33;
 VAR_38->disable_nb[6].notifier_call = VAR_34;
 VAR_38->disable_nb[7].notifier_call = VAR_35;


 for (VAR_39 = 0; VAR_39 < FUNC_0(VAR_38->supplies); VAR_39++) {
  VAR_40 = FUNC_3(
      VAR_38->supplies[VAR_39].consumer,
      &VAR_38->disable_nb[VAR_39]);
  if (VAR_40) {
   FUNC_1(VAR_37->dev,
    "Failed to register regulator notifier: %d\n",
    VAR_40);
  }
 }

 VAR_40 = FUNC_5(FUNC_0(VAR_38->supplies),
        VAR_38->supplies);
 if (VAR_40) {
  FUNC_1(VAR_37->dev, "Failed to enable supplies: %d\n", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_7(VAR_37, VAR_27);
 if (VAR_40 < 0) {
  FUNC_1(VAR_37->dev, "Failed to read device ID: %d\n", VAR_40);
  goto err_reg_enable;
 }

 if (VAR_40 != 0x8995) {
  FUNC_1(VAR_37->dev, "Invalid device ID: %#x\n", VAR_40);
  VAR_40 = -VAR_0;
  goto err_reg_enable;
 }

 VAR_40 = FUNC_9(VAR_37, VAR_27, 0);
 if (VAR_40 < 0) {
  FUNC_1(VAR_37->dev, "Failed to issue reset: %d\n", VAR_40);
  goto err_reg_enable;
 }


 FUNC_8(VAR_37, VAR_11,
       VAR_6, VAR_5);
 FUNC_8(VAR_37, VAR_12,
       VAR_8, VAR_7);
 FUNC_8(VAR_37, VAR_17,
       VAR_15, VAR_14);
 FUNC_8(VAR_37, VAR_9,
       VAR_2, VAR_1);
 FUNC_8(VAR_37, VAR_10,
       VAR_4, VAR_3);
 FUNC_8(VAR_37, VAR_16,
       VAR_13, VAR_3);
 FUNC_8(VAR_37, VAR_18,
       VAR_20, VAR_19);
 FUNC_8(VAR_37, VAR_21,
       VAR_23, VAR_22);
 FUNC_8(VAR_37, VAR_26,
       VAR_25, VAR_24);

 FUNC_10(VAR_37);

 return 0;

err_reg_enable:
 FUNC_4(FUNC_0(VAR_38->supplies), VAR_38->supplies);
 return VAR_40;
}

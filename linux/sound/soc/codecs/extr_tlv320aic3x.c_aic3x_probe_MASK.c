
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct aic3x_priv {int model; int micbias_vg; TYPE_2__* setup; int regmap; TYPE_1__* disable_nb; TYPE_3__* supplies; struct snd_soc_component* component; } ;
struct TYPE_12__ {int notifier_call; } ;
struct TYPE_11__ {int consumer; } ;
struct TYPE_10__ {int* gpio_func; } ;
struct TYPE_9__ {TYPE_4__ nb; struct aic3x_priv* aic3x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_soc_component*) ;
 TYPE_3__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (struct snd_soc_component*) ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_soc_component*,TYPE_3__*,int) ;
 struct aic3x_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_10 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_9)
{
 struct aic3x_priv *VAR_10 = FUNC_8(VAR_9);
 int VAR_11, VAR_12;

 VAR_10->component = VAR_9;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->supplies); VAR_12++) {
  VAR_10->disable_nb[VAR_12].nb.notifier_call = VAR_8;
  VAR_10->disable_nb[VAR_12].aic3x = VAR_10;
  VAR_11 = FUNC_5(
      VAR_10->supplies[VAR_12].consumer,
      &VAR_10->disable_nb[VAR_12].nb);
  if (VAR_11) {
   FUNC_3(VAR_9->dev,
    "Failed to request regulator notifier: %d\n",
     VAR_11);
   return VAR_11;
  }
 }

 FUNC_6(VAR_10->regmap);
 FUNC_2(VAR_9);

 if (VAR_10->setup) {
  if (VAR_10->model != 130) {

   FUNC_10(VAR_9, VAR_0,
          (VAR_10->setup->gpio_func[0] & 0xf) << 4);
   FUNC_10(VAR_9, VAR_1,
          (VAR_10->setup->gpio_func[1] & 0xf) << 4);
  } else {
   FUNC_4(VAR_9->dev, "GPIO functionality is not supported on tlv320aic3104\n");
  }
 }

 switch (VAR_10->model) {
 case 128:
 case 129:
  FUNC_7(VAR_9, VAR_6,
    FUNC_0(VAR_6));
  FUNC_7(VAR_9, VAR_7,
    FUNC_0(VAR_7));
  break;
 case 131:
  FUNC_7(VAR_9, VAR_6,
    FUNC_0(VAR_6));
  FUNC_7(VAR_9,
    &VAR_5, 1);
  break;
 case 130:
  break;
 }


 switch (VAR_10->micbias_vg) {
 case 135:
 case 134:
 case 133:
  FUNC_9(VAR_9, VAR_2,
        VAR_3,
        (VAR_10->micbias_vg) << VAR_4);
  break;
 case 132:





  break;
 }

 FUNC_1(VAR_9);

 return 0;
}

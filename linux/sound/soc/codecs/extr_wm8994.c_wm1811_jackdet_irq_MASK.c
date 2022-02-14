
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct snd_soc_component* component; } ;
struct wm8994_priv {int mic_detecting; int jack_mic; int btn_mask; TYPE_3__* micdet; int accdet_lock; int mic_work; int mic_complete_work; TYPE_1__ hubs; struct wm8994* wm8994; } ;
struct TYPE_5__ {int micdet_delay; scalar_t__ jd_ext_cap; } ;
struct wm8994 {TYPE_2__ pdata; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int jack; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int ) ;
 struct snd_soc_dapm_context* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_component*,int ) ;
 int FUNC_11 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_12 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_13 (int ,int,int) ;
 int VAR_12 ;
 int FUNC_14 (struct snd_soc_component*,int ) ;
 int FUNC_15 (struct snd_soc_component*) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_13, void *VAR_14)
{
 struct wm8994_priv *VAR_15 = VAR_14;
 struct wm8994 *VAR_16 = VAR_15->wm8994;
 struct snd_soc_component *VAR_17 = VAR_15->hubs.component;
 struct snd_soc_dapm_context *VAR_18 = FUNC_9(VAR_17);
 int VAR_19, VAR_20;
 bool VAR_21;

 FUNC_6(VAR_17->dev);

 FUNC_0(&VAR_15->mic_complete_work);

 FUNC_4(&VAR_15->accdet_lock);

 VAR_19 = FUNC_10(VAR_17, VAR_4);
 if (VAR_19 < 0) {
  FUNC_2(VAR_17->dev, "Failed to read jack status: %d\n", VAR_19);
  FUNC_5(&VAR_15->accdet_lock);
  FUNC_7(VAR_17->dev);
  return VAR_1;
 }

 FUNC_1(VAR_17->dev, "JACKDET %x\n", VAR_19);

 VAR_21 = VAR_19 & VAR_6;

 if (VAR_21) {
  FUNC_1(VAR_17->dev, "Jack detected\n");

  FUNC_15(VAR_17);

  FUNC_11(VAR_17, VAR_9,
        VAR_8, 0);


  FUNC_11(VAR_17, VAR_4,
        VAR_5, 0);

  VAR_20 = VAR_16->pdata.micdet_delay;
  FUNC_8(VAR_12,
       &VAR_15->mic_work,
       FUNC_3(VAR_20));
 } else {
  FUNC_1(VAR_17->dev, "Jack not detected\n");

  FUNC_0(&VAR_15->mic_work);

  FUNC_11(VAR_17, VAR_9,
        VAR_8, VAR_8);


  FUNC_11(VAR_17, VAR_4,
        VAR_5, VAR_5);

  VAR_15->mic_detecting = 0;
  VAR_15->jack_mic = 0;
  FUNC_11(VAR_17, VAR_11,
        VAR_10, 0);
  FUNC_14(VAR_17, VAR_7);
 }

 FUNC_5(&VAR_15->accdet_lock);


 if (VAR_16->pdata.jd_ext_cap && !VAR_21)
  FUNC_12(VAR_18, "MICBIAS2");

 if (VAR_21)
  FUNC_13(VAR_15->micdet[0].jack,
        VAR_3, VAR_3);
 else
  FUNC_13(VAR_15->micdet[0].jack, 0,
        VAR_3 | VAR_2 |
        VAR_15->btn_mask);



 FUNC_13(VAR_15->micdet[0].jack, 0, 0);

 FUNC_7(VAR_17->dev);
 return VAR_0;
}

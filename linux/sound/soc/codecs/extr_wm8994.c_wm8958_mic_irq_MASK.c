
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct snd_soc_component* component; } ;
struct wm8994_priv {int btn_mask; int mic_detecting; int mic_status; int mic_complete_work; TYPE_4__* wm8994; TYPE_2__* micdet; scalar_t__ jackdet; int open_circuit_work; TYPE_1__ hubs; } ;
struct snd_soc_component {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int mic_id_delay; } ;
struct TYPE_8__ {TYPE_3__ pdata; } ;
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (struct snd_soc_component*,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int VAR_12 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct snd_soc_component*,int) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_13, void *VAR_14)
{
 struct wm8994_priv *VAR_15 = VAR_14;
 struct snd_soc_component *VAR_16 = VAR_15->hubs.component;
 int VAR_17, VAR_18, VAR_19, VAR_20;






 if (!(FUNC_10(VAR_16, VAR_10) & VAR_6))
  return VAR_0;

 FUNC_0(&VAR_15->mic_complete_work);
 FUNC_0(&VAR_15->open_circuit_work);

 FUNC_7(VAR_16->dev);




 VAR_18 = 10;
 do {
  VAR_17 = FUNC_10(VAR_16, VAR_11);
  if (VAR_17 < 0) {
   FUNC_2(VAR_16->dev,
    "Failed to read mic detect status: %d\n",
    VAR_17);
   FUNC_8(VAR_16->dev);
   return VAR_1;
  }

  if (!(VAR_17 & VAR_9)) {
   FUNC_1(VAR_16->dev, "Mic detect data not valid\n");
   goto out;
  }

  if (!(VAR_17 & VAR_8) || (VAR_17 & VAR_7))
   break;

  FUNC_6(1);
 } while (VAR_18--);

 if (VAR_18 == 0)
  FUNC_4(VAR_16->dev, "No impedance range reported for jack\n");


 FUNC_12(FUNC_3(VAR_16->dev));



 if (VAR_15->jackdet) {
  VAR_19 = FUNC_10(VAR_16, VAR_4);
  if (VAR_19 < 0) {
   FUNC_2(VAR_16->dev, "Failed to read jack status: %d\n",
    VAR_19);
  } else if (!(VAR_19 & VAR_5)) {
   FUNC_1(VAR_16->dev, "Ignoring removed jack\n");
   goto out;
  }
 } else if (!(VAR_17 & VAR_8)) {
  FUNC_11(VAR_15->micdet[0].jack, 0,
        VAR_3 | VAR_2 |
        VAR_15->btn_mask);
  VAR_15->mic_detecting = 1;
  goto out;
 }

 VAR_15->mic_status = VAR_17;
 VAR_20 = VAR_15->wm8994->pdata.mic_id_delay;

 if (VAR_15->mic_detecting)
  FUNC_9(VAR_12,
       &VAR_15->mic_complete_work,
       FUNC_5(VAR_20));
 else
  FUNC_13(VAR_16, VAR_17);

out:
 FUNC_8(VAR_16->dev);
 return VAR_0;
}

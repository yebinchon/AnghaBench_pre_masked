
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_dapm_context {TYPE_1__* card; } ;
struct snd_soc_component {TYPE_2__* card; } ;
struct hdac_hdmi_priv {int card; struct snd_soc_component* component; struct hdac_device* hdev; } ;
struct hdac_ext_link {int dummy; } ;
struct hdac_device {int dev; int bus; } ;
struct TYPE_7__ {struct hdac_device* audio_ptr; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int snd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (struct snd_soc_dapm_context*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct hdac_device*,struct hdac_hdmi_priv*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 struct hdac_ext_link* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct hdac_ext_link*) ;
 struct snd_soc_dapm_context* FUNC_11 (struct snd_soc_component*) ;
 struct hdac_hdmi_priv* FUNC_12 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_4)
{
 struct hdac_hdmi_priv *VAR_5 = FUNC_12(VAR_4);
 struct hdac_device *VAR_6 = VAR_5->hdev;
 struct snd_soc_dapm_context *VAR_7 =
  FUNC_11(VAR_4);
 struct hdac_ext_link *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_5->component = VAR_4;





 VAR_8 = FUNC_9(VAR_6->bus, FUNC_2(&VAR_6->dev));
 if (!VAR_8) {
  FUNC_1(&VAR_6->dev, "hdac link not found\n");
  return -VAR_2;
 }

 FUNC_10(VAR_6->bus, VAR_8);

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_3.audio_ptr = VAR_6;
 VAR_9 = FUNC_8(VAR_6->bus, &VAR_3);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_6->dev, "notifier register failed: err: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_4(VAR_6, VAR_5, 1);

 VAR_5->card = VAR_7->card->snd_card;
 FUNC_3(VAR_4->card->dev, &VAR_6->dev, VAR_1 |
   VAR_0);




 FUNC_5(&VAR_6->dev);
 FUNC_6(&VAR_6->dev);
 FUNC_7(&VAR_6->dev);

 return 0;
}

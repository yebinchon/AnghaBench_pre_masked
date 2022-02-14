
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct hdac_hdmi_priv {struct hdac_device* hdev; } ;
struct hdac_device {int dev; int bus; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct hdac_hdmi_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_0)
{
 struct hdac_hdmi_priv *VAR_1 = FUNC_3(VAR_0);
 struct hdac_device *VAR_2 = VAR_1->hdev;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->bus, ((void*)0));
 if (VAR_3 < 0)
  FUNC_0(&VAR_2->dev, "notifier unregister failed: err: %d\n",
    VAR_3);

 FUNC_1(&VAR_2->dev);
}

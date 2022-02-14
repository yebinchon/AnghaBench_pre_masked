
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct hdac_device {int bus; int dev; } ;
struct TYPE_2__ {struct hdac_device core; } ;
struct hdac_hda_priv {TYPE_1__ codec; } ;
struct hdac_ext_link {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hdac_ext_link* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct hdac_ext_link*) ;
 struct hdac_hda_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_0)
{
 struct hdac_hda_priv *VAR_1 =
        FUNC_5(VAR_0);
 struct hdac_device *VAR_2 = &VAR_1->codec.core;
 struct hdac_ext_link *VAR_3 = ((void*)0);

 VAR_3 = FUNC_3(VAR_2->bus, FUNC_1(&VAR_2->dev));
 if (!VAR_3) {
  FUNC_0(&VAR_2->dev, "hdac link not found\n");
  return;
 }

 FUNC_2(&VAR_2->dev);
 FUNC_4(VAR_2->bus, VAR_3);
}

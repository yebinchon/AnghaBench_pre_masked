
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_enum {int * texts; } ;
struct snd_soc_dapm_widget {int name; struct snd_kcontrol_new* kcontrol_news; } ;
struct snd_soc_dapm_route {int dummy; } ;
struct snd_kcontrol_new {scalar_t__ private_value; } ;
struct hdac_hdmi_priv {int num_cvt; int num_ports; } ;
struct hdac_device {int dummy; } ;


 int FUNC_0 (struct snd_soc_dapm_route*,int ,int ,int ,int *) ;
 struct hdac_hdmi_priv* FUNC_1 (struct hdac_device*) ;

__attribute__((used)) static void FUNC_2(struct hdac_device *VAR_0,
   struct snd_soc_dapm_widget *VAR_1,
   struct snd_soc_dapm_route *VAR_2, int VAR_3)
{
 struct hdac_hdmi_priv *VAR_4 = FUNC_1(VAR_0);
 const struct snd_kcontrol_new *VAR_5;
 struct soc_enum *VAR_6;
 int VAR_7 = VAR_4->num_cvt + VAR_4->num_ports;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_ports; VAR_8++) {
  VAR_5 = VAR_1[VAR_7].kcontrol_news;
  VAR_6 = (struct soc_enum *)VAR_5->private_value;
  for (VAR_9 = 0; VAR_9 < VAR_4->num_cvt; VAR_9++) {
   FUNC_0(&VAR_2[VAR_3],
     VAR_1[VAR_7].name,
     VAR_6->texts[VAR_9 + 1],
     VAR_1[VAR_9].name, ((void*)0));

   VAR_3++;
  }

  VAR_7++;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {size_t id; } ;
struct snd_pcm_substream {int runtime; } ;
struct hdac_hdmi_priv {struct hdac_hdmi_dai_port_map* dai_map; struct hdac_device* hdev; } ;
struct TYPE_4__ {int eld_buffer; int eld_valid; int monitor_present; } ;
struct hdac_hdmi_port {TYPE_2__ eld; int id; TYPE_1__* pin; } ;
struct hdac_hdmi_dai_port_map {struct hdac_hdmi_port* port; struct hdac_hdmi_cvt* cvt; } ;
struct hdac_hdmi_cvt {int dummy; } ;
struct hdac_device {int dev; } ;
struct TYPE_3__ {int nid; } ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct hdac_hdmi_port* FUNC_2 (struct hdac_device*,struct hdac_hdmi_priv*,struct hdac_hdmi_cvt*) ;
 int FUNC_3 (int ,int ) ;
 struct hdac_hdmi_priv* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
   struct snd_soc_dai *VAR_1)
{
 struct hdac_hdmi_priv *VAR_2 = FUNC_4(VAR_1);
 struct hdac_device *VAR_3 = VAR_2->hdev;
 struct hdac_hdmi_dai_port_map *VAR_4;
 struct hdac_hdmi_cvt *VAR_5;
 struct hdac_hdmi_port *VAR_6;
 int VAR_7;

 VAR_4 = &VAR_2->dai_map[VAR_1->id];

 VAR_5 = VAR_4->cvt;
 VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_5);





 if (!VAR_6)
  return 0;
 if ((!VAR_6->eld.monitor_present) ||
   (!VAR_6->eld.eld_valid)) {

  FUNC_0(&VAR_3->dev,
   "Failed: present?:%d ELD valid?:%d pin:port: %d:%d\n",
   VAR_6->eld.monitor_present, VAR_6->eld.eld_valid,
   VAR_6->pin->nid, VAR_6->id);

  return 0;
 }

 VAR_4->port = VAR_6;

 VAR_7 = FUNC_1(VAR_0->runtime,
    VAR_6->eld.eld_buffer);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_3(VAR_0->runtime,
    VAR_6->eld.eld_buffer);
}

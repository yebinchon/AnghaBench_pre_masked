
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_dai_driver {int dummy; } ;
struct TYPE_8__ {int get_spk_alloc; int is_pcm_attached; int set_chmap; int get_chmap; } ;
struct TYPE_9__ {TYPE_1__ ops; } ;
struct hdac_hdmi_priv {int pin_mutex; int pcm_list; int cvt_list; int pin_list; struct hdac_hdmi_drv_data* drv_data; struct hdac_device* hdev; TYPE_2__ chmap; } ;
struct hdac_hdmi_drv_data {int dummy; } ;
struct hdac_ext_link {int dummy; } ;
struct hdac_driver {int dummy; } ;
struct TYPE_10__ {int driver; } ;
struct hdac_device {int bus; TYPE_3__ dev; int addr; } ;
struct hda_device_id {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct hdac_hdmi_priv*) ;
 struct hdac_hdmi_priv* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,int *,struct snd_soc_dai_driver*,int) ;
 struct hdac_driver* FUNC_6 (int ) ;
 struct hda_device_id* FUNC_7 (struct hdac_device*,struct hdac_driver*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct hdac_device*,struct snd_soc_dai_driver**,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct hdac_hdmi_drv_data VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int) ;
 struct hdac_ext_link* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct hdac_ext_link*) ;
 int FUNC_13 (int ,struct hdac_ext_link*) ;
 int FUNC_14 (struct hdac_device*) ;
 int FUNC_15 (struct hdac_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(struct hdac_device *VAR_10)
{
 struct hdac_hdmi_priv *VAR_11 = ((void*)0);
 struct snd_soc_dai_driver *VAR_12 = ((void*)0);
 struct hdac_ext_link *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15 = 0;
 struct hdac_driver *VAR_16 = FUNC_6(VAR_10->dev.driver);
 const struct hda_device_id *VAR_17 = FUNC_7(VAR_10, VAR_16);


 VAR_13 = FUNC_11(VAR_10->bus, FUNC_2(&VAR_10->dev));
 if (!VAR_13) {
  FUNC_1(&VAR_10->dev, "hdac link not found\n");
  return -VAR_0;
 }

 FUNC_12(VAR_10->bus, VAR_13);

 VAR_11 = FUNC_4(&VAR_10->dev, sizeof(*VAR_11), VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_2;

 FUNC_15(VAR_10, &VAR_11->chmap);
 VAR_11->chmap.ops.get_chmap = VAR_4;
 VAR_11->chmap.ops.set_chmap = VAR_6;
 VAR_11->chmap.ops.is_pcm_attached = VAR_9;
 VAR_11->chmap.ops.get_spk_alloc = VAR_5;
 VAR_11->hdev = VAR_10;

 if (!VAR_17)
  return -VAR_1;

 if (VAR_17->driver_data)
  VAR_11->drv_data =
   (struct hdac_hdmi_drv_data *)VAR_17->driver_data;
 else
  VAR_11->drv_data = &VAR_8;

 FUNC_3(&VAR_10->dev, VAR_11);

 FUNC_0(&VAR_11->pin_list);
 FUNC_0(&VAR_11->cvt_list);
 FUNC_0(&VAR_11->pcm_list);
 FUNC_9(&VAR_11->pin_mutex);





 FUNC_10(VAR_10->bus, VAR_10->addr, 1);

 VAR_15 = FUNC_8(VAR_10, &VAR_12, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_1(&VAR_10->dev,
   "Failed in parse and map nid with err: %d\n", VAR_15);
  return VAR_15;
 }
 FUNC_14(VAR_10);


 VAR_15 = FUNC_5(&VAR_10->dev, &VAR_7,
     VAR_12, VAR_14);

 FUNC_13(VAR_10->bus, VAR_13);

 return VAR_15;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct hdmi_audio_infoframe {int channels; int channel_allocation; } ;
struct TYPE_6__ {int (* set_channel_count ) (struct hdac_device*,int ,int) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct hdac_hdmi_priv {TYPE_4__ chmap; } ;
struct TYPE_5__ {int spk_alloc; } ;
struct TYPE_7__ {int* eld_buffer; TYPE_1__ info; } ;
struct hdac_hdmi_port {TYPE_3__ eld; struct hdac_hdmi_pin* pin; } ;
struct hdac_hdmi_pin {int nid; } ;
struct hdac_hdmi_pcm {int chmap_set; int chmap; int channels; struct hdac_hdmi_cvt* cvt; } ;
struct hdac_hdmi_cvt {int nid; } ;
struct hdac_device {int dev; } ;
struct dp_audio_infoframe {int type; int len; int ver; int CC02_CT47; int CA; } ;
typedef int dp_ai ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct hdac_device*,int ,int,int) ;
 struct hdac_hdmi_priv* FUNC_3 (struct hdac_device*) ;
 int FUNC_4 (struct hdmi_audio_infoframe*) ;
 int FUNC_5 (struct hdmi_audio_infoframe*,int*,int) ;
 int FUNC_6 (struct dp_audio_infoframe*,int ,int) ;
 int FUNC_7 (struct hdac_device*,int ,int ,int ,int,int ) ;
 int FUNC_8 (struct hdac_device*,int ,int ,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,int ,int,int,int ,int ,int ) ;
 int FUNC_11 (struct hdac_device*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct hdac_device *VAR_7,
     struct hdac_hdmi_pcm *VAR_8, struct hdac_hdmi_port *VAR_9)
{
 uint8_t VAR_10[VAR_6 + VAR_5];
 struct hdmi_audio_infoframe VAR_11;
 struct hdac_hdmi_pin *VAR_12 = VAR_9->pin;
 struct dp_audio_infoframe VAR_13;
 struct hdac_hdmi_priv *VAR_14 = FUNC_3(VAR_7);
 struct hdac_hdmi_cvt *VAR_15 = VAR_8->cvt;
 u8 *VAR_16;
 int VAR_17;
 int VAR_18;
 const u8 *VAR_19;
 u8 VAR_20;
 int VAR_21, VAR_22;

 VAR_22 = FUNC_7(VAR_7, VAR_9->eld.info.spk_alloc,
   VAR_8->channels, VAR_8->chmap_set, 1, VAR_8->chmap);

 VAR_21 = FUNC_9(VAR_22);
 VAR_14->chmap.ops.set_channel_count(VAR_7, VAR_15->nid, VAR_21);

 FUNC_10(&VAR_14->chmap, VAR_12->nid, 0, VAR_22,
    VAR_8->channels, VAR_8->chmap, VAR_8->chmap_set);

 VAR_19 = VAR_9->eld.eld_buffer;
 VAR_20 = FUNC_1(VAR_19);

 switch (VAR_20) {
 case 128:
  FUNC_4(&VAR_11);

  VAR_11.channels = VAR_21;
  VAR_11.channel_allocation = VAR_22;

  VAR_17 = FUNC_5(&VAR_11, VAR_10, sizeof(VAR_10));
  if (VAR_17 < 0)
   return VAR_17;

  break;

 case 129:
  FUNC_6(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.type = 0x84;
  VAR_13.len = 0x1b;
  VAR_13.ver = 0x11 << 2;
  VAR_13.CC02_CT47 = VAR_21 - 1;
  VAR_13.CA = VAR_22;

  VAR_16 = (u8 *)&VAR_13;
  break;

 default:
  FUNC_0(&VAR_7->dev, "Invalid connection type: %d\n", VAR_20);
  return -VAR_4;
 }


 FUNC_2(VAR_7, VAR_12->nid, 0x0, 0x0);
 FUNC_8(VAR_7, VAR_12->nid, 0,
   VAR_3, VAR_1);



 FUNC_2(VAR_7, VAR_12->nid, 0x0, 0x0);
 if (VAR_20 == 128) {
  for (VAR_18 = 0; VAR_18 < sizeof(VAR_10); VAR_18++)
   FUNC_8(VAR_7, VAR_12->nid, 0,
    VAR_2, VAR_10[VAR_18]);
 } else {
  for (VAR_18 = 0; VAR_18 < sizeof(VAR_13); VAR_18++)
   FUNC_8(VAR_7, VAR_12->nid, 0,
    VAR_2, VAR_16[VAR_18]);
 }


 FUNC_2(VAR_7, VAR_12->nid, 0x0, 0x0);
 FUNC_8(VAR_7, VAR_12->nid, 0,
   VAR_3, VAR_0);

 return 0;
}

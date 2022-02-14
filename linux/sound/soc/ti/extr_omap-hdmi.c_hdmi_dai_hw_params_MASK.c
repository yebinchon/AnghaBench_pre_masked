
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_cea_861_aud_if {int db1_ct_cc; int db4_ca; int db5_dminh_lsv; scalar_t__ db3; int db2_sf_ss; } ;
struct snd_aes_iec958 {int * status; } ;
struct TYPE_6__ {struct snd_cea_861_aud_if* cea; struct snd_aes_iec958* iec; } ;
struct TYPE_4__ {int maxburst; } ;
struct hdmi_audio_data {TYPE_3__ dss_audio; int dssdev; TYPE_2__* ops; TYPE_1__ dma_data; struct snd_pcm_substream* current_stream; struct snd_cea_861_aud_if cea; struct snd_aes_iec958 iec; } ;
struct TYPE_5__ {int (* audio_config ) (int ,TYPE_3__*) ;} ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;


 int FUNC_0 (int) ;
 struct hdmi_audio_data* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_26,
         struct snd_pcm_hw_params *VAR_27,
         struct snd_soc_dai *VAR_28)
{
 struct hdmi_audio_data *VAR_29 = FUNC_1(VAR_26);
 struct snd_aes_iec958 *VAR_30 = &VAR_29->iec;
 struct snd_cea_861_aud_if *VAR_31 = &VAR_29->cea;

 FUNC_0(VAR_29->current_stream != VAR_26);

 switch (FUNC_5(VAR_27)) {
 case 129:
  VAR_29->dma_data.maxburst = 16;
  break;
 case 128:
  VAR_29->dma_data.maxburst = 32;
  break;
 default:
  FUNC_2(VAR_28->dev, "format not supported!\n");
  return -VAR_7;
 }

 VAR_29->dss_audio.iec = VAR_30;
 VAR_29->dss_audio.cea = VAR_31;




 FUNC_3(VAR_30->status, 0, sizeof(VAR_30->status));


 VAR_30->status[0] &= ~VAR_11;


 VAR_30->status[0] &= ~VAR_10;

 VAR_30->status[0] |= VAR_9;

 VAR_30->status[0] |= VAR_8;

 VAR_30->status[1] = VAR_12;

 VAR_30->status[2] |= VAR_14;

 VAR_30->status[2] |= VAR_13;

 switch (FUNC_6(VAR_27)) {
 case 32000:
  VAR_30->status[3] |= VAR_18;
  break;
 case 44100:
  VAR_30->status[3] |= VAR_19;
  break;
 case 48000:
  VAR_30->status[3] |= VAR_20;
  break;
 case 88200:
  VAR_30->status[3] |= VAR_21;
  break;
 case 96000:
  VAR_30->status[3] |= VAR_22;
  break;
 case 176400:
  VAR_30->status[3] |= VAR_16;
  break;
 case 192000:
  VAR_30->status[3] |= VAR_17;
  break;
 default:
  FUNC_2(VAR_28->dev, "rate not supported!\n");
  return -VAR_7;
 }


 VAR_30->status[3] |= VAR_15;






 switch (FUNC_5(VAR_27)) {
 case 129:
  VAR_30->status[4] |= VAR_24;
  VAR_30->status[4] &= ~VAR_23;
  break;
 case 128:
  VAR_30->status[4] |= VAR_25;
  VAR_30->status[4] |= VAR_23;
  break;
 default:
  FUNC_2(VAR_28->dev, "format not supported!\n");
  return -VAR_7;
 }





 VAR_31->db1_ct_cc = (FUNC_4(VAR_27) - 1)
  & VAR_0;
 VAR_31->db1_ct_cc |= VAR_1;

 VAR_31->db2_sf_ss = VAR_2;
 VAR_31->db2_sf_ss |= VAR_3;

 VAR_31->db3 = 0;

 if (FUNC_4(VAR_27) == 2)
  VAR_31->db4_ca = 0x0;
 else if (FUNC_4(VAR_27) == 6)
  VAR_31->db4_ca = 0xb;
 else
  VAR_31->db4_ca = 0x13;

 if (VAR_31->db4_ca == 0x00)
  VAR_31->db5_dminh_lsv = VAR_4;
 else
  VAR_31->db5_dminh_lsv = VAR_5;


 VAR_31->db5_dminh_lsv |= (0 & VAR_6);

 return VAR_29->ops->audio_config(VAR_29->dssdev, &VAR_29->dss_audio);
}

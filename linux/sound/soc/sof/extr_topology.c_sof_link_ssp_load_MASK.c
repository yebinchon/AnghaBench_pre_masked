
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sof_ipc_reply {int dummy; } ;
struct sof_ipc_dai_ssp_params {int dummy; } ;
struct TYPE_4__ {int size; int cmd; } ;
struct TYPE_5__ {int fsync_rate; int tdm_slots; int quirks; int mclk_id; void* tdm_slot_width; int sample_valid_bits; void* bclk_rate; void* mclk_rate; void* tx_slots; void* rx_slots; int mclk_direction; } ;
struct sof_ipc_dai_config {void* dai_index; TYPE_1__ hdr; TYPE_2__ ssp; int format; } ;
struct snd_sof_dev {int dev; int ipc; } ;
struct snd_soc_tplg_private {int size; int array; } ;
struct snd_soc_tplg_link_config {struct snd_soc_tplg_private priv; } ;
struct snd_soc_tplg_hw_config {int tx_slots; int rx_slots; int mclk_direction; int tdm_slot_width; int tdm_slots; int fsync_rate; int bclk_rate; int mclk_rate; } ;
struct snd_soc_dai_link {int dummy; } ;
struct snd_soc_component {int dummy; } ;
typedef int reply ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,void*,int ,void*,void*,int,int ,void*,int,int ,int ) ;
 int FUNC_2 (int ,char*,void*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 struct snd_sof_dev* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_tplg_hw_config*,struct sof_ipc_dai_config*) ;
 int FUNC_7 (int ,int ,struct sof_ipc_dai_config*,int,struct sof_ipc_reply*,int) ;
 int FUNC_8 (struct snd_soc_component*,TYPE_2__*,int ,int ,int ,void*) ;
 int FUNC_9 (struct snd_sof_dev*,int,struct snd_soc_dai_link*,struct sof_ipc_dai_config*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_2, int VAR_3,
        struct snd_soc_dai_link *VAR_4,
        struct snd_soc_tplg_link_config *VAR_5,
        struct snd_soc_tplg_hw_config *VAR_6,
        struct sof_ipc_dai_config *VAR_7)
{
 struct snd_sof_dev *VAR_8 = FUNC_5(VAR_2);
 struct snd_soc_tplg_private *VAR_9 = &VAR_5->priv;
 struct sof_ipc_reply VAR_10;
 u32 VAR_11 = sizeof(*VAR_7);
 int VAR_12;


 FUNC_6(VAR_6, VAR_7);


 FUNC_4(&VAR_7->ssp, 0, sizeof(struct sof_ipc_dai_ssp_params));
 VAR_7->hdr.size = VAR_11;

 VAR_12 = FUNC_8(VAR_2, &VAR_7->ssp, VAR_1,
          FUNC_0(VAR_1), VAR_9->array,
          FUNC_3(VAR_9->size));
 if (VAR_12 != 0) {
  FUNC_2(VAR_8->dev, "error: parse ssp tokens failed %d\n",
   FUNC_3(VAR_9->size));
  return VAR_12;
 }

 VAR_7->ssp.mclk_rate = FUNC_3(VAR_6->mclk_rate);
 VAR_7->ssp.bclk_rate = FUNC_3(VAR_6->bclk_rate);
 VAR_7->ssp.fsync_rate = FUNC_3(VAR_6->fsync_rate);
 VAR_7->ssp.tdm_slots = FUNC_3(VAR_6->tdm_slots);
 VAR_7->ssp.tdm_slot_width = FUNC_3(VAR_6->tdm_slot_width);
 VAR_7->ssp.mclk_direction = VAR_6->mclk_direction;
 VAR_7->ssp.rx_slots = FUNC_3(VAR_6->rx_slots);
 VAR_7->ssp.tx_slots = FUNC_3(VAR_6->tx_slots);

 FUNC_1(VAR_8->dev, "tplg: config SSP%d fmt 0x%x mclk %d bclk %d fclk %d width (%d)%d slots %d mclk id %d quirks %d\n",
  VAR_7->dai_index, VAR_7->format,
  VAR_7->ssp.mclk_rate, VAR_7->ssp.bclk_rate,
  VAR_7->ssp.fsync_rate, VAR_7->ssp.sample_valid_bits,
  VAR_7->ssp.tdm_slot_width, VAR_7->ssp.tdm_slots,
  VAR_7->ssp.mclk_id, VAR_7->ssp.quirks);


 if (VAR_7->ssp.fsync_rate < 8000 || VAR_7->ssp.fsync_rate > 192000) {
  FUNC_2(VAR_8->dev, "error: invalid fsync rate for SSP%d\n",
   VAR_7->dai_index);
  return -VAR_0;
 }

 if (VAR_7->ssp.tdm_slots < 1 || VAR_7->ssp.tdm_slots > 8) {
  FUNC_2(VAR_8->dev, "error: invalid channel count for SSP%d\n",
   VAR_7->dai_index);
  return -VAR_0;
 }


 VAR_12 = FUNC_7(VAR_8->ipc,
     VAR_7->hdr.cmd, VAR_7, VAR_11, &VAR_10,
     sizeof(VAR_10));

 if (VAR_12 < 0) {
  FUNC_2(VAR_8->dev, "error: failed to set DAI config for SSP%d\n",
   VAR_7->dai_index);
  return VAR_12;
 }


 VAR_12 = FUNC_9(VAR_8, VAR_11, VAR_4, VAR_7);
 if (VAR_12 < 0)
  FUNC_2(VAR_8->dev, "error: failed to save DAI config for SSP%d\n",
   VAR_7->dai_index);

 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_ssp_config {int ssp_mode; int pcm_mode; int start_delay; int ssp_protocol; int fs_width; int data_polarity; int frame_sync_polarity; int fs_frequency; int active_slot_map; int duplex; int slots; int bits_per_slot; int ssp_id; } ;
struct TYPE_2__ {int mode; int reserved1; int reserved2; int start_delay; int ssp_protocol; int frame_sync_width; int data_polarity; int frame_sync_polarity; int frame_sync_frequency; int active_rx_slot_map; int active_tx_slot_map; int duplex; int nb_slots; int nb_bits_per_slots; int selection; } ;
struct sst_data {TYPE_1__ ssp_cmd; } ;
struct snd_soc_dai {int dummy; } ;


 struct sst_data* FUNC_0 (struct snd_soc_dai*) ;
 struct sst_ssp_config VAR_0 ;

void FUNC_1(struct snd_soc_dai *VAR_1)
{
 const struct sst_ssp_config *VAR_2;
 struct sst_data *VAR_3 = FUNC_0(VAR_1);

 VAR_2 = &VAR_0;

 VAR_3->ssp_cmd.selection = VAR_2->ssp_id;
 VAR_3->ssp_cmd.nb_bits_per_slots = VAR_2->bits_per_slot;
 VAR_3->ssp_cmd.nb_slots = VAR_2->slots;
 VAR_3->ssp_cmd.mode = VAR_2->ssp_mode | (VAR_2->pcm_mode << 1);
 VAR_3->ssp_cmd.duplex = VAR_2->duplex;
 VAR_3->ssp_cmd.active_tx_slot_map = VAR_2->active_slot_map;
 VAR_3->ssp_cmd.active_rx_slot_map = VAR_2->active_slot_map;
 VAR_3->ssp_cmd.frame_sync_frequency = VAR_2->fs_frequency;
 VAR_3->ssp_cmd.frame_sync_polarity = VAR_2->frame_sync_polarity;
 VAR_3->ssp_cmd.data_polarity = VAR_2->data_polarity;
 VAR_3->ssp_cmd.frame_sync_width = VAR_2->fs_width;
 VAR_3->ssp_cmd.ssp_protocol = VAR_2->ssp_protocol;
 VAR_3->ssp_cmd.start_delay = VAR_2->start_delay;
 VAR_3->ssp_cmd.reserved1 = VAR_3->ssp_cmd.reserved2 = 0xFF;
}

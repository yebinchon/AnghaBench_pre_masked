
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nb_slots; unsigned int active_tx_slot_map; unsigned int active_rx_slot_map; int nb_bits_per_slots; } ;
struct sst_data {TYPE_1__ ssp_cmd; } ;
struct snd_soc_dai {int dummy; } ;


 struct sst_data* FUNC_0 (struct snd_soc_dai*) ;

int FUNC_1(struct snd_soc_dai *VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, int VAR_3, int VAR_4)
{
 struct sst_data *VAR_5 = FUNC_0(VAR_0);

 VAR_5->ssp_cmd.nb_slots = VAR_3;
 VAR_5->ssp_cmd.active_tx_slot_map = VAR_1;
 VAR_5->ssp_cmd.active_rx_slot_map = VAR_2;
 VAR_5->ssp_cmd.nb_bits_per_slots = VAR_4;

 return 0;
}

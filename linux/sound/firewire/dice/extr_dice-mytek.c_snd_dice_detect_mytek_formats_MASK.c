
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {scalar_t__* rx_midi_ports; scalar_t__* tx_midi_ports; int rx_pcm_chs; int tx_pcm_chs; } ;
struct dice_mytek_spec {int rx_pcm_chs; int tx_pcm_chs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct dice_mytek_spec VAR_2 ;

int FUNC_1(struct snd_dice *VAR_3)
{
 int VAR_4;
 const struct dice_mytek_spec *VAR_5;

 VAR_5 = &VAR_2;

 FUNC_0(VAR_3->tx_pcm_chs, VAR_5->tx_pcm_chs,
        VAR_0 * VAR_1 * sizeof(unsigned int));
 FUNC_0(VAR_3->rx_pcm_chs, VAR_5->rx_pcm_chs,
        VAR_0 * VAR_1 * sizeof(unsigned int));

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_3->tx_midi_ports[VAR_4] = 0;
  VAR_3->rx_midi_ports[VAR_4] = 0;
 }

 return 0;
}

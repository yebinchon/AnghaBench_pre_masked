
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dice {int** rx_pcm_chs; int* tx_midi_ports; int* rx_midi_ports; int tx_pcm_chs; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct snd_dice*,int ,int *,int) ;

int FUNC_3(struct snd_dice *VAR_5)
{
 __be32 VAR_6;
 u32 VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_2, &VAR_6,
        sizeof(VAR_6));
 if (VAR_9 < 0)
  return VAR_9;
 VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 == 4 || VAR_7 == 6) {
  FUNC_1(VAR_5->tx_pcm_chs, VAR_3,
    VAR_0 * VAR_1 *
    sizeof(unsigned int));
 } else {
  FUNC_1(VAR_5->tx_pcm_chs, VAR_4,
    VAR_0 * VAR_1 *
    sizeof(unsigned int));
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
  VAR_5->rx_pcm_chs[0][VAR_8] = 8;

 VAR_5->tx_midi_ports[0] = 1;
 VAR_5->rx_midi_ports[0] = 1;

 return 0;
}

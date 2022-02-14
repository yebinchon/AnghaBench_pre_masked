
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_midi {int interrupt; int ipr_rx; int ipr_tx; int port; int rx_enable; int tx_enable; } ;
struct snd_emu10k1 {struct snd_emu10k1_midi midi2; struct snd_emu10k1_midi midi; } ;


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
 int FUNC_0 (struct snd_emu10k1*,struct snd_emu10k1_midi*,int,char*) ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_1(struct snd_emu10k1 *VAR_12)
{
 struct snd_emu10k1_midi *VAR_13;
 int VAR_14;

 VAR_13 = &VAR_12->midi;
 if ((VAR_14 = FUNC_0(VAR_12, VAR_13, 0, "Audigy MPU-401 (UART)")) < 0)
  return VAR_14;

 VAR_13->tx_enable = VAR_5;
 VAR_13->rx_enable = VAR_4;
 VAR_13->port = VAR_0;
 VAR_13->ipr_tx = VAR_9;
 VAR_13->ipr_rx = VAR_8;
 VAR_13->interrupt = VAR_10;

 VAR_13 = &VAR_12->midi2;
 if ((VAR_14 = FUNC_0(VAR_12, VAR_13, 1, "Audigy MPU-401 #2")) < 0)
  return VAR_14;

 VAR_13->tx_enable = VAR_3;
 VAR_13->rx_enable = VAR_2;
 VAR_13->port = VAR_1;
 VAR_13->ipr_tx = VAR_7;
 VAR_13->ipr_rx = VAR_6;
 VAR_13->interrupt = VAR_11;
 return 0;
}

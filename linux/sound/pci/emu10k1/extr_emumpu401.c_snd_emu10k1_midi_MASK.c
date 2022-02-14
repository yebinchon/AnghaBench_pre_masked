
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_midi {int interrupt; int ipr_rx; int ipr_tx; int port; int rx_enable; int tx_enable; } ;
struct snd_emu10k1 {struct snd_emu10k1_midi midi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_emu10k1*,struct snd_emu10k1_midi*,int ,char*) ;
 int VAR_5 ;

int FUNC_1(struct snd_emu10k1 *VAR_6)
{
 struct snd_emu10k1_midi *VAR_7 = &VAR_6->midi;
 int VAR_8;

 if ((VAR_8 = FUNC_0(VAR_6, VAR_7, 0, "EMU10K1 MPU-401 (UART)")) < 0)
  return VAR_8;

 VAR_7->tx_enable = VAR_1;
 VAR_7->rx_enable = VAR_0;
 VAR_7->port = VAR_4;
 VAR_7->ipr_tx = VAR_3;
 VAR_7->ipr_rx = VAR_2;
 VAR_7->interrupt = VAR_5;
 return 0;
}

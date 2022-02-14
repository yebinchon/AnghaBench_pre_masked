
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu10k1x_midi {int interrupt; int ipr_rx; int ipr_tx; int port; int rx_enable; int tx_enable; } ;
struct emu10k1x {struct emu10k1x_midi midi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct emu10k1x*,struct emu10k1x_midi*,int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct emu10k1x *VAR_6)
{
 struct emu10k1x_midi *VAR_7 = &VAR_6->midi;
 int VAR_8;

 if ((VAR_8 = FUNC_0(VAR_6, VAR_7, 0, "EMU10K1X MPU-401 (UART)")) < 0)
  return VAR_8;

 VAR_7->tx_enable = VAR_1;
 VAR_7->rx_enable = VAR_0;
 VAR_7->port = VAR_4;
 VAR_7->ipr_tx = VAR_3;
 VAR_7->ipr_rx = VAR_2;
 VAR_7->interrupt = VAR_5;
 return 0;
}

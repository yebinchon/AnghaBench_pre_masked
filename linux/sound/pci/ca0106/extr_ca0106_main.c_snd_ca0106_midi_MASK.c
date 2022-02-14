
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca_midi {unsigned int channel; struct snd_ca0106* dev_id; int get_dev_id_port; int get_dev_id_card; int write; int read; int interrupt_disable; int interrupt_enable; int output_ready; int input_avail; int ack; int enter_uart; int reset; int port; int ipr_rx; int ipr_tx; void* rx_enable; void* tx_enable; } ;
struct snd_ca0106 {struct snd_ca_midi midi; struct snd_ca_midi midi2; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
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
 int FUNC_0 (struct snd_ca0106*,struct snd_ca_midi*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_ca0106 *VAR_21, unsigned int VAR_22)
{
 struct snd_ca_midi *VAR_23;
 char *VAR_24;
 int VAR_25;

 if (VAR_22 == VAR_0) {
  VAR_24 = "CA0106 MPU-401 (UART) B";
  VAR_23 = &VAR_21->midi2;
  VAR_23->tx_enable = VAR_8;
  VAR_23->rx_enable = VAR_6;
  VAR_23->ipr_tx = VAR_12;
  VAR_23->ipr_rx = VAR_10;
  VAR_23->port = VAR_14;
 } else {
  VAR_24 = "CA0106 MPU-401 (UART)";
  VAR_23 = &VAR_21->midi;
  VAR_23->tx_enable = VAR_7;
  VAR_23->rx_enable = VAR_8;
  VAR_23->ipr_tx = VAR_11;
  VAR_23->ipr_rx = VAR_9;
  VAR_23->port = VAR_13;
 }

 VAR_23->reset = VAR_5;
 VAR_23->enter_uart = VAR_4;
 VAR_23->ack = VAR_3;

 VAR_23->input_avail = VAR_1;
 VAR_23->output_ready = VAR_2;

 VAR_23->channel = VAR_22;

 VAR_23->interrupt_enable = VAR_18;
 VAR_23->interrupt_disable = VAR_17;

 VAR_23->read = VAR_19;
 VAR_23->write = VAR_20;

 VAR_23->get_dev_id_card = VAR_15;
 VAR_23->get_dev_id_port = VAR_16;

 VAR_23->dev_id = VAR_21;

 if ((VAR_25 = FUNC_0(VAR_21, VAR_23, 0, VAR_24)) < 0)
  return VAR_25;

 return 0;
}

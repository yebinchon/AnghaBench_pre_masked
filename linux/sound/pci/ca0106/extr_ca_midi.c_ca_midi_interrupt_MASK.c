
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca_midi {int tx_enable; int rx_enable; unsigned int ipr_rx; int midi_mode; unsigned int ipr_tx; int output_lock; int (* interrupt_disable ) (struct snd_ca_midi*,int) ;scalar_t__ substream_output; int input_lock; scalar_t__ substream_input; int * rmidi; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ca_midi*) ;
 scalar_t__ FUNC_1 (struct snd_ca_midi*) ;
 scalar_t__ FUNC_2 (struct snd_ca_midi*) ;
 unsigned char FUNC_3 (struct snd_ca_midi*) ;
 int FUNC_4 (struct snd_ca_midi*,unsigned char) ;
 int FUNC_5 (scalar_t__,unsigned char*,int) ;
 int FUNC_6 (scalar_t__,unsigned char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct snd_ca_midi*,int) ;
 int FUNC_10 (struct snd_ca_midi*,int) ;

__attribute__((used)) static void FUNC_11(struct snd_ca_midi *VAR_1, unsigned int VAR_2)
{
 unsigned char VAR_3;

 if (VAR_1->rmidi == ((void*)0)) {
  VAR_1->interrupt_disable(VAR_1,VAR_1->tx_enable | VAR_1->rx_enable);
  return;
 }

 FUNC_7(&VAR_1->input_lock);
 if ((VAR_2 & VAR_1->ipr_rx) && FUNC_1(VAR_1)) {
  if (!(VAR_1->midi_mode & VAR_0)) {
   FUNC_0(VAR_1);
  } else {
   VAR_3 = FUNC_3(VAR_1);
   if(VAR_1->substream_input)
    FUNC_5(VAR_1->substream_input, &VAR_3, 1);


  }
 }
 FUNC_8(&VAR_1->input_lock);

 FUNC_7(&VAR_1->output_lock);
 if ((VAR_2 & VAR_1->ipr_tx) && FUNC_2(VAR_1)) {
  if (VAR_1->substream_output &&
      FUNC_6(VAR_1->substream_output, &VAR_3, 1) == 1) {
   FUNC_4(VAR_1, VAR_3);
  } else {
   VAR_1->interrupt_disable(VAR_1,VAR_1->tx_enable);
  }
 }
 FUNC_8(&VAR_1->output_lock);

}

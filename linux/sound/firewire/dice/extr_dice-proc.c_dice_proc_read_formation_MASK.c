
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_dice* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_dice {int** tx_pcm_chs; int* tx_midi_ports; int** rx_pcm_chs; int* rx_midi_ports; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_2,
         struct snd_info_buffer *VAR_3)
{
 static const char *const VAR_4[] = {
  [129] = "low",
  [128] = "middle",
  [130] = "high",
 };
 struct snd_dice *VAR_5 = VAR_2->private_data;
 int VAR_6, VAR_7;

 FUNC_0(VAR_3, "Output stream from unit:\n");
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
  FUNC_0(VAR_3, "\t%s", VAR_4[VAR_6]);
 FUNC_0(VAR_3, "\tMIDI\n");
 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  FUNC_0(VAR_3, "Tx %u:", VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
   FUNC_0(VAR_3, "\t%u", VAR_5->tx_pcm_chs[VAR_6][VAR_7]);
  FUNC_0(VAR_3, "\t%u\n", VAR_5->tx_midi_ports[VAR_6]);
 }

 FUNC_0(VAR_3, "Input stream to unit:\n");
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
  FUNC_0(VAR_3, "\t%s", VAR_4[VAR_6]);
 FUNC_0(VAR_3, "\n");
 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  FUNC_0(VAR_3, "Rx %u:", VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
   FUNC_0(VAR_3, "\t%u", VAR_5->rx_pcm_chs[VAR_6][VAR_7]);
  FUNC_0(VAR_3, "\t%u\n", VAR_5->rx_midi_ports[VAR_6]);
 }
}

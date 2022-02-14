
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {int dummy; } ;
struct snd_ff {int* rx_bytes; int * transactions; int * msg_buf; int * next_ktime; TYPE_2__* spec; int * rx_midi_work; scalar_t__* rx_midi_error; int unit; int * rx_midi_substreams; } ;
struct fw_device {int generation; int max_speed; int node_id; int card; } ;
typedef int fw_transaction_callback_t ;
struct TYPE_4__ {unsigned long long* midi_rx_addrs; TYPE_1__* protocol; } ;
struct TYPE_3__ {int (* fill_midi_msg ) (struct snd_ff*,struct snd_rawmidi_substream*,unsigned int) ;} ;


 int VAR_0 ;
 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fw_device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,int ,int,int ,unsigned long long,int *,int,int ,int *) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct snd_rawmidi_substream*) ;
 int FUNC_9 (struct snd_ff*,struct snd_rawmidi_substream*,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct snd_ff *VAR_5, unsigned int VAR_6)
{
 struct snd_rawmidi_substream *VAR_7 =
   FUNC_0(VAR_5->rx_midi_substreams[VAR_6]);
 int VAR_8;

 struct fw_device *VAR_9 = FUNC_1(VAR_5->unit);
 unsigned long long VAR_10;
 int VAR_11;
 fw_transaction_callback_t VAR_12;
 int VAR_13;

 if (VAR_7 == ((void*)0) || FUNC_8(VAR_7))
  return;

 if (VAR_5->rx_bytes[VAR_6] > 0 || VAR_5->rx_midi_error[VAR_6])
  return;


 if (FUNC_4(VAR_5->next_ktime[VAR_6], FUNC_5())) {
  FUNC_6(&VAR_5->rx_midi_work[VAR_6]);
  return;
 }

 VAR_8 = VAR_5->spec->protocol->fill_midi_msg(VAR_5, VAR_7, VAR_6);
 if (VAR_8 <= 0)
  return;

 if (VAR_6 == 0) {
  VAR_10 = VAR_5->spec->midi_rx_addrs[0];
  VAR_12 = VAR_3;
 } else {
  VAR_10 = VAR_5->spec->midi_rx_addrs[1];
  VAR_12 = VAR_4;
 }


 VAR_5->next_ktime[VAR_6] = FUNC_3(FUNC_5(),
    VAR_5->rx_bytes[VAR_6] * 8 * VAR_0 / 31250);

 if (VAR_8 == 1)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_1;
 VAR_11 = VAR_9->generation;
 FUNC_7();
 FUNC_2(VAR_9->card, &VAR_5->transactions[VAR_6], VAR_13,
   VAR_9->node_id, VAR_11, VAR_9->max_speed,
   VAR_10, &VAR_5->msg_buf[VAR_6], VAR_8 * 4,
   VAR_12, &VAR_5->transactions[VAR_6]);
}

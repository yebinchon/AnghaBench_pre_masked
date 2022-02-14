
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {unsigned long long offset; } ;
struct snd_tscm {int * tx_midi_substreams; TYPE_2__* spec; TYPE_1__ async_handler; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;
struct TYPE_4__ {unsigned int midi_capture_ports; } ;


 int VAR_0 ;
 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fw_card*,struct fw_request*,int ) ;
 int FUNC_3 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static void FUNC_4(struct fw_card *VAR_1, struct fw_request *VAR_2,
      int VAR_3, int VAR_4, int VAR_5,
      int VAR_6, unsigned long long VAR_7,
      void *VAR_8, size_t VAR_9, void *VAR_10)
{
 struct snd_tscm *VAR_11 = VAR_10;
 u32 *VAR_12 = (u32 *)VAR_8;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 struct snd_rawmidi_substream *VAR_16;
 u8 *VAR_17;
 int VAR_18;

 if (VAR_7 != VAR_11->async_handler.offset)
  goto end;

 VAR_13 = VAR_9 / 8;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_17 = (u8 *)(VAR_12 + VAR_14 * 2);

  VAR_15 = VAR_17[0] >> 4;

  if (VAR_15 >= VAR_11->spec->midi_capture_ports)
   goto end;


  VAR_18 = FUNC_1(VAR_17[1]);

  if (VAR_18 <= 0) {

   for (VAR_18 = 1; VAR_18 < 4; VAR_18++) {
    if (VAR_17[VAR_18] == 0xf7)
     break;
   }
   if (VAR_18 == 4)
    VAR_18 = 3;
  }

  VAR_16 = FUNC_0(VAR_11->tx_midi_substreams[VAR_15]);
  if (VAR_16 != ((void*)0))
   FUNC_3(VAR_16, VAR_17 + 1, VAR_18);
 }
end:
 FUNC_2(VAR_1, VAR_2, VAR_0);
}

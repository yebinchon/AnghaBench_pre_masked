
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_rawmidi_substream {int dummy; } ;
struct snd_ff {int * tx_midi_substreams; } ;
typedef int __le32 ;


 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ff *VAR_0, unsigned int VAR_1,
      __le32 *VAR_2, size_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3 / 4; VAR_4++) {
  u32 VAR_5 = FUNC_1(VAR_2[VAR_4]);
  u8 VAR_6;
  unsigned int VAR_7;
  struct snd_rawmidi_substream *VAR_8;







  VAR_7 = (VAR_5 >> 8) & 0xff;
  if (VAR_7 > 0) {
   VAR_8 = FUNC_0(VAR_0->tx_midi_substreams[0]);
   if (VAR_8 != ((void*)0)) {
    VAR_6 = VAR_5 & 0xff;
    FUNC_2(VAR_8, &VAR_6, 1);
   }
  }


  VAR_7 = (VAR_5 >> 24) & 0xff;
  if (VAR_7 > 0) {
   VAR_8 = FUNC_0(VAR_0->tx_midi_substreams[1]);
   if (VAR_8 != ((void*)0)) {
    VAR_6 = (VAR_5 >> 16) & 0xff;
    FUNC_2(VAR_8, &VAR_6, 1);
   }
  }
 }
}

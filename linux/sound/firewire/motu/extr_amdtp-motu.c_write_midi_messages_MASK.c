
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int dummy; } ;
struct amdtp_stream {int data_block_quadlets; struct amdtp_motu* protocol; } ;
struct amdtp_motu {scalar_t__ midi_db_count; int midi_byte_offset; size_t midi_flag_offset; scalar_t__ midi_db_interval; int midi; } ;
typedef int __be32 ;


 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static void FUNC_2(struct amdtp_stream *VAR_0, __be32 *VAR_1,
    unsigned int VAR_2)
{
 struct amdtp_motu *VAR_3 = VAR_0->protocol;
 struct snd_rawmidi_substream *VAR_4 = FUNC_0(VAR_3->midi);
 u8 *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = (u8 *)VAR_1;

  if (VAR_4 && VAR_3->midi_db_count == 0 &&
      FUNC_1(VAR_4, VAR_5 + VAR_3->midi_byte_offset, 1) == 1) {
   VAR_5[VAR_3->midi_flag_offset] = 0x01;
  } else {
   VAR_5[VAR_3->midi_byte_offset] = 0x00;
   VAR_5[VAR_3->midi_flag_offset] = 0x00;
  }

  VAR_1 += VAR_0->data_block_quadlets;

  if (--VAR_3->midi_db_count < 0)
   VAR_3->midi_db_count = VAR_3->midi_db_interval;
 }
}

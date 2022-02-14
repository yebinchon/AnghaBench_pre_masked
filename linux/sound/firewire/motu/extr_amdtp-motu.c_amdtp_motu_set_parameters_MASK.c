
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_motu_packet_format {unsigned int* fixed_part_pcm_chunks; unsigned int* differed_part_pcm_chunks; unsigned int msg_chunks; int midi_byte_offset; int midi_flag_offset; int pcm_byte_offset; } ;
struct amdtp_stream {int syt_interval; size_t sfc; struct amdtp_motu* protocol; } ;
struct amdtp_motu {unsigned int pcm_chunks; unsigned int midi_ports; unsigned int midi_db_interval; unsigned int next_cycles; unsigned int quotient_ticks_per_event; unsigned int remainder_ticks_per_event; unsigned int next_ticks; scalar_t__ next_accumulated; scalar_t__ next_seconds; scalar_t__ midi_db_count; int midi_byte_offset; int midi_flag_offset; int pcm_byte_offset; } ;


 int FUNC_0 (unsigned int*) ;






 int FUNC_1 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (struct amdtp_stream*) ;
 int FUNC_3 (struct amdtp_stream*,unsigned int,unsigned int) ;
 unsigned int* VAR_3 ;

int FUNC_4(struct amdtp_stream *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6,
         struct snd_motu_packet_format *VAR_7)
{
 static const struct {
  unsigned int quotient_ticks_per_event;
  unsigned int remainder_ticks_per_event;
 } VAR_8[] = {
  [131] = { 557, 123 },
  [130] = { 512, 0 },
  [129] = { 278, 282 },
  [128] = { 256, 0 },
  [133] = { 139, 141 },
  [132] = { 128, 0 },
 };
 struct amdtp_motu *VAR_9 = VAR_4->protocol;
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15, VAR_16;

 if (FUNC_2(VAR_4))
  return -VAR_0;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_3); ++VAR_15) {
  if (VAR_3[VAR_15] == VAR_5) {
   VAR_14 = VAR_15 >> 1;
   break;
  }
 }
 if (VAR_15 == FUNC_0(VAR_3))
  return -VAR_1;

 VAR_10 = VAR_7->fixed_part_pcm_chunks[VAR_14] +
       VAR_7->differed_part_pcm_chunks[VAR_14];
 VAR_11 = VAR_7->msg_chunks + VAR_10;






 VAR_12 = 1 + FUNC_1(VAR_11 * 3, 4);

 VAR_16 = FUNC_3(VAR_4, VAR_5, VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_9->pcm_chunks = VAR_10;
 VAR_9->pcm_byte_offset = VAR_7->pcm_byte_offset;

 VAR_9->midi_ports = VAR_6;
 VAR_9->midi_flag_offset = VAR_7->midi_flag_offset;
 VAR_9->midi_byte_offset = VAR_7->midi_byte_offset;

 VAR_9->midi_db_count = 0;
 VAR_9->midi_db_interval = VAR_5 / VAR_2;


 VAR_13 = 0x2e00;


 VAR_13 += 8000 * 3072 * VAR_4->syt_interval / VAR_5;

 VAR_9->next_seconds = 0;
 VAR_9->next_cycles = VAR_13 / 3072;
 VAR_9->quotient_ticks_per_event = VAR_8[VAR_4->sfc].quotient_ticks_per_event;
 VAR_9->remainder_ticks_per_event = VAR_8[VAR_4->sfc].remainder_ticks_per_event;
 VAR_9->next_ticks = VAR_13 % 3072;
 VAR_9->next_accumulated = 0;

 return 0;
}

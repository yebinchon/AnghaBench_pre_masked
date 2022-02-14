
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_motu_packet_format {int msg_chunks; void** fixed_part_pcm_chunks; } ;
typedef enum snd_motu_spec_flags { ____Placeholder_snd_motu_spec_flags } snd_motu_spec_flags ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_motu_packet_format *VAR_7,
     enum amdtp_stream_direction VAR_8,
     enum snd_motu_spec_flags VAR_9,
     unsigned char VAR_10)
{
 unsigned char VAR_11[3] = {0, 0, 0};

 VAR_7->msg_chunks = 2;

 VAR_11[0] = VAR_10;
 VAR_11[1] = VAR_10;
 if (VAR_9 & VAR_3)
  VAR_11[2] = VAR_10;

 if (VAR_8 == VAR_0) {
  if (VAR_9 & VAR_4) {
   VAR_11[0] += 2;
   VAR_11[1] += 2;
   if (VAR_9 & VAR_3)
    VAR_11[2] += 2;
  }

  if (VAR_9 & VAR_5) {
   VAR_11[0] += 2;
   VAR_11[1] += 2;
   if (VAR_9 & VAR_3)
    VAR_11[2] += 2;
  }

  if (VAR_9 & VAR_6) {
   VAR_11[0] += 2;
   VAR_11[1] += 2;
  }
 } else {
  if (VAR_9 & VAR_2) {
   VAR_11[0] += 2;
   VAR_11[1] += 2;
  }



  VAR_11[0] += 2;
  VAR_11[1] += 2;
 }

 if (VAR_9 & VAR_1) {
  VAR_11[0] += 2;
  VAR_11[1] += 2;
 }





 VAR_11[0] += 2;
 VAR_11[1] += 2;





 VAR_7->fixed_part_pcm_chunks[0] = FUNC_0(2 + VAR_11[0], 4) - 2;
 VAR_7->fixed_part_pcm_chunks[1] = FUNC_0(2 + VAR_11[1], 4) - 2;
 if (VAR_9 & VAR_3)
  VAR_7->fixed_part_pcm_chunks[2] =
     FUNC_0(2 + VAR_11[2], 4) - 2;
}

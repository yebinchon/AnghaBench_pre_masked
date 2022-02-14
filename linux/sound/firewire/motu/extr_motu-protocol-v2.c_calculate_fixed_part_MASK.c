
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_motu_packet_format {int msg_chunks; unsigned char* fixed_part_pcm_chunks; } ;
typedef enum snd_motu_spec_flags { ____Placeholder_snd_motu_spec_flags } snd_motu_spec_flags ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct snd_motu_packet_format *VAR_6,
     enum amdtp_stream_direction VAR_7,
     enum snd_motu_spec_flags VAR_8,
     unsigned char VAR_9)
{
 unsigned char VAR_10[3] = {0, 0, 0};

 VAR_6->msg_chunks = 2;

 VAR_10[0] = VAR_9;
 VAR_10[1] = VAR_9;
 if (VAR_8 & VAR_3)
  VAR_10[2] = VAR_9;

 if (VAR_7 == VAR_0) {
  if (VAR_8 & VAR_4) {
   VAR_10[0] += 2;
   VAR_10[1] += 2;
  }
  if (VAR_8 & VAR_5) {
   VAR_10[0] += 2;
   VAR_10[1] += 2;
  }
 } else {
  if (VAR_8 & VAR_2) {
   VAR_10[0] += 2;
   VAR_10[1] += 2;
  }



  VAR_10[0] += 2;
  VAR_10[1] += 2;
 }

 if (VAR_8 & VAR_1) {
  VAR_10[0] += 2;
  VAR_10[1] += 2;
 }






 VAR_10[0] += 2;
 VAR_10[1] += 2;

 VAR_6->fixed_part_pcm_chunks[0] = VAR_10[0];
 VAR_6->fixed_part_pcm_chunks[1] = VAR_10[1];
 VAR_6->fixed_part_pcm_chunks[2] = VAR_10[2];
}

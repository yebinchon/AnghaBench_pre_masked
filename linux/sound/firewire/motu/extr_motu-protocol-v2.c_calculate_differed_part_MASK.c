
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_motu_packet_format {unsigned char* differed_part_pcm_chunks; } ;
typedef enum snd_motu_spec_flags { ____Placeholder_snd_motu_spec_flags } snd_motu_spec_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct snd_motu_packet_format *VAR_3,
        enum snd_motu_spec_flags VAR_4,
        u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 unsigned char VAR_8[2] = {0, 0};






 VAR_5 = (VAR_5 & VAR_6) >> VAR_7;
 if (VAR_5 == VAR_2) {
  if (VAR_4 & VAR_0) {
   VAR_8[0] += 8;
   VAR_8[1] += 4;
  }


  if (VAR_4 & VAR_1) {
   VAR_8[1] += 4;
  }
 }


 VAR_3->differed_part_pcm_chunks[0] = VAR_8[0];
 VAR_3->differed_part_pcm_chunks[1] = VAR_8[1];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_motu_packet_format {unsigned char* differed_part_pcm_chunks; } ;
typedef enum snd_motu_spec_flags { ____Placeholder_snd_motu_spec_flags } snd_motu_spec_flags ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (unsigned char,int) ;

__attribute__((used)) static void FUNC_1(struct snd_motu_packet_format *VAR_2,
        enum snd_motu_spec_flags VAR_3, u32 VAR_4,
        u32 VAR_5, u32 VAR_6,
        u32 VAR_7, u32 VAR_8)
{
 unsigned char VAR_9[3] = {0, 0, 0};
 int VAR_10;

 if ((VAR_3 & VAR_0) && (VAR_4 & VAR_5)) {
  if (VAR_4 & VAR_6) {




   VAR_9[0] += 4;
   VAR_9[1] += 4;
  } else {




   VAR_9[0] += 8;
   VAR_9[1] += 4;
  }
 }

 if ((VAR_3 & VAR_1) && (VAR_4 & VAR_7)) {
  if (VAR_4 & VAR_8) {




   VAR_9[0] += 4;
   VAR_9[1] += 4;
  } else {




   VAR_9[0] += 8;
   VAR_9[1] += 4;
  }
 }

 for (VAR_10 = 0; VAR_10 < 3; ++VAR_10) {
  if (VAR_9[VAR_10] > 0)
   VAR_9[VAR_10] = FUNC_0(VAR_9[VAR_10], 4);

  VAR_2->differed_part_pcm_chunks[VAR_10] = VAR_9[VAR_10];
 }
}

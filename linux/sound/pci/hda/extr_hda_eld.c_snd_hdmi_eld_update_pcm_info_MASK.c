
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct parsed_hdmi_eld {int sad_count; struct cea_sad* sad; } ;
struct hda_pcm_stream {int rates; void* channels_max; void* maxbps; int formats; } ;
struct cea_sad {int rates; unsigned int channels; scalar_t__ format; int sample_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*,unsigned int) ;

void FUNC_1(struct parsed_hdmi_eld *VAR_8,
         struct hda_pcm_stream *VAR_9)
{
 u32 VAR_10;
 u64 VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;




 VAR_10 = VAR_5 | VAR_6 |
  VAR_7;
 VAR_11 = VAR_3;
 VAR_12 = 16;
 VAR_13 = 2;
 for (VAR_14 = 0; VAR_14 < VAR_8->sad_count; VAR_14++) {
  struct cea_sad *VAR_15 = &VAR_8->sad[VAR_14];
  VAR_10 |= VAR_15->rates;
  if (VAR_15->channels > VAR_13)
   VAR_13 = VAR_15->channels;
  if (VAR_15->format == VAR_2) {
   if (VAR_15->sample_bits & VAR_0) {
    VAR_11 |= VAR_4;
    if (VAR_12 < 20)
     VAR_12 = 20;
   }
   if (VAR_15->sample_bits & VAR_1) {
    VAR_11 |= VAR_4;
    if (VAR_12 < 24)
     VAR_12 = 24;
   }
  }
 }


 VAR_9->rates &= VAR_10;
 VAR_9->formats &= VAR_11;
 VAR_9->maxbps = FUNC_0(VAR_9->maxbps, VAR_12);
 VAR_9->channels_max = FUNC_0(VAR_9->channels_max, VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct echoaudio {scalar_t__ non_audio_spdif; scalar_t__ professional_spdif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u32 FUNC_0(struct echoaudio *VAR_8, u32 VAR_9, u32 VAR_10)
{
 VAR_9 &= VAR_2;

 switch (VAR_10) {
 case 32000 :
  VAR_9 |= VAR_5 | VAR_6;
  break;
 case 44100 :
  if (VAR_8->professional_spdif)
   VAR_9 |= VAR_5;
  break;
 case 48000 :
  VAR_9 |= VAR_6;
  break;
 }

 if (VAR_8->professional_spdif)
  VAR_9 |= VAR_4;

 if (VAR_8->non_audio_spdif)
  VAR_9 |= VAR_3;

 VAR_9 |= VAR_0 | VAR_7 |
  VAR_1;

 return VAR_9;
}

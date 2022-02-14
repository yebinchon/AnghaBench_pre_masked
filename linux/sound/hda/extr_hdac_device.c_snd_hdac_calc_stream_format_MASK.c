
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int snd_pcm_format_t ;
struct TYPE_2__ {int hz; unsigned int hda_fmt; } ;


 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int ) ;

unsigned int FUNC_1(unsigned int VAR_9,
      unsigned int VAR_10,
      snd_pcm_format_t VAR_11,
      unsigned int VAR_12,
      unsigned short VAR_13)
{
 int VAR_14;
 unsigned int VAR_15 = 0;

 for (VAR_14 = 0; VAR_8[VAR_14].hz; VAR_14++)
  if (VAR_8[VAR_14].hz == VAR_9) {
   VAR_15 = VAR_8[VAR_14].hda_fmt;
   break;
  }
 if (!VAR_8[VAR_14].hz)
  return 0;

 if (VAR_10 == 0 || VAR_10 > 8)
  return 0;
 VAR_15 |= VAR_10 - 1;

 switch (FUNC_0(VAR_11)) {
 case 8:
  VAR_15 |= VAR_5;
  break;
 case 16:
  VAR_15 |= VAR_1;
  break;
 case 20:
 case 24:
 case 32:
  if (VAR_12 >= 32 || VAR_11 == VAR_7)
   VAR_15 |= VAR_4;
  else if (VAR_12 >= 24)
   VAR_15 |= VAR_3;
  else
   VAR_15 |= VAR_2;
  break;
 default:
  return 0;
 }

 if (VAR_13 & VAR_0)
  VAR_15 |= VAR_6;

 return VAR_15;
}

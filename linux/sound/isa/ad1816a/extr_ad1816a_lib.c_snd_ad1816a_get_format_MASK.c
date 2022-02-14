
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {int dummy; } ;
typedef int snd_pcm_format_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;





__attribute__((used)) static unsigned char FUNC_0(struct snd_ad1816a *VAR_6,
         snd_pcm_format_t VAR_7,
         int VAR_8)
{
 unsigned char VAR_9 = VAR_3;

 switch (VAR_7) {
 case 130:
  VAR_9 = VAR_5;
  break;
 case 131:
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_1;
 }
 return (VAR_8 > 1) ? (VAR_9 | VAR_4) : VAR_9;
}

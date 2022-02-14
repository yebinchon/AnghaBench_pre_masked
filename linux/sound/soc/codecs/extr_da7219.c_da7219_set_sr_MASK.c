
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_13,
    unsigned long VAR_14)
{
 u8 VAR_15;

 switch (VAR_14) {
 case 8000:
  VAR_15 = VAR_9;
  break;
 case 11025:
  VAR_15 = VAR_1;
  break;
 case 12000:
  VAR_15 = VAR_2;
  break;
 case 16000:
  VAR_15 = VAR_3;
  break;
 case 22050:
  VAR_15 = VAR_4;
  break;
 case 24000:
  VAR_15 = VAR_5;
  break;
 case 32000:
  VAR_15 = VAR_6;
  break;
 case 44100:
  VAR_15 = VAR_7;
  break;
 case 48000:
  VAR_15 = VAR_8;
  break;
 case 88200:
  VAR_15 = VAR_10;
  break;
 case 96000:
  VAR_15 = VAR_11;
  break;
 default:
  return -VAR_12;
 }

 FUNC_0(VAR_13, VAR_0, VAR_15);

 return 0;
}

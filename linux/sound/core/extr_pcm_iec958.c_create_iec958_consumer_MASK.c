
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (int*,int ,size_t) ;

__attribute__((used)) static int FUNC_1(uint VAR_18, uint VAR_19,
      u8 *VAR_20, size_t VAR_21)
{
 unsigned int VAR_22, VAR_23;

 if (VAR_21 < 4)
  return -VAR_0;

 switch (VAR_18) {
 case 32000:
  VAR_22 = VAR_9;
  break;
 case 44100:
  VAR_22 = VAR_10;
  break;
 case 48000:
  VAR_22 = VAR_11;
  break;
 case 88200:
  VAR_22 = VAR_12;
  break;
 case 96000:
  VAR_22 = VAR_13;
  break;
 case 176400:
  VAR_22 = VAR_7;
  break;
 case 192000:
  VAR_22 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_21 > 4) {
  switch (VAR_19) {
  case 16:
   VAR_23 = VAR_15;
   break;
  case 18:
   VAR_23 = VAR_16;
   break;
  case 20:
   VAR_23 = VAR_15 |
        VAR_14;
   break;
  case 24:
  case 32:
   VAR_23 = VAR_17 |
        VAR_14;
   break;

  default:
   return -VAR_0;
  }
 }

 FUNC_0(VAR_20, 0, VAR_21);

 VAR_20[0] = VAR_2 | VAR_1;
 VAR_20[1] = VAR_3;
 VAR_20[2] = VAR_5 | VAR_4;
 VAR_20[3] = VAR_6 | VAR_22;

 if (VAR_21 > 4)
  VAR_20[4] = VAR_23;

 return VAR_21;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aes_iec958 {int* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(struct snd_aes_iec958 *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_7 = VAR_6->status[0] & 0x03;
 if (VAR_7 & 0x01) {

  if ((VAR_6->status[0] & VAR_2) ==
      VAR_3)
   VAR_7 |= 1U << 3;
  VAR_8 = (VAR_6->status[4] >> 3) & 0x0f;
  if (VAR_8) {
   switch (VAR_8) {
   case 2: VAR_7 |= 5 << 12; break;
   case 3: VAR_7 |= 6 << 12; break;
   case 10: VAR_7 |= 4 << 12; break;
   case 11: VAR_7 |= 7 << 12; break;
   }
  } else {
   switch (VAR_6->status[0] & VAR_4) {
   case 128:
    break;
   case 129:
    VAR_7 |= 3U << 12;
    break;
   default:
    VAR_7 |= 2U << 12;
    break;
   }
  }
 } else {

  VAR_7 |= VAR_6->status[1] & 0x04;
  if ((VAR_6->status[0] & VAR_0) ==
      VAR_1)
   VAR_7 |= 1U << 3;
  VAR_7 |= (unsigned int)(VAR_6->status[1] & 0x3f) << 4;
  VAR_7 |= (unsigned int)(VAR_6->status[3] & VAR_5) << 12;
 }
 return VAR_7;
}

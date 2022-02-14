
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aes_iec958 {unsigned int* status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct snd_aes_iec958 *VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_4->status, 0, sizeof(VAR_4->status));
 VAR_4->status[0] = VAR_5 & 0x03;
 if (VAR_5 & 0x01) {

  if (VAR_5 & (1U << 3))
   VAR_4->status[0] |= VAR_1;
  switch ((VAR_5 >> 12) & 0x7) {
  case 0:
   break;
  case 2:
   VAR_4->status[0] |= VAR_2;
   break;
  default:
   VAR_4->status[0] |= VAR_3;
   break;
  }
 } else {

  VAR_4->status[0] |= VAR_5 & (1U << 2);
  if (VAR_5 & (1U << 3))
   VAR_4->status[0] |= VAR_0;
  VAR_4->status[1] |= (VAR_5 >> 4) & 0x3f;
  VAR_4->status[3] |= (VAR_5 >> 12) & 0x07;
 }
}

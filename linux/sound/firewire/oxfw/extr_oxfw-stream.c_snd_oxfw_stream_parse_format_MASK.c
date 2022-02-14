
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_oxfw_stream_formation {scalar_t__ pcm; unsigned int midi; int rate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int*) ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (struct snd_oxfw_stream_formation*,int ,int) ;
 int * VAR_4 ;

int FUNC_2(u8 *VAR_5,
     struct snd_oxfw_stream_formation *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_1(VAR_6, 0, sizeof(struct snd_oxfw_stream_formation));






 if ((VAR_5[0] != 0x90) || (VAR_5[1] != 0x40))
  return -VAR_2;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  if (VAR_5[2] == VAR_3[VAR_7])
   break;
 }
 if (VAR_7 == FUNC_0(VAR_3))
  return -VAR_2;

 VAR_6->rate = VAR_4[VAR_7];

 for (VAR_8 = 0; VAR_8 < VAR_5[4]; VAR_8++) {
  VAR_9 = VAR_5[5 + VAR_8 * 2];
  VAR_10 = VAR_5[6 + VAR_8 * 2];

  switch (VAR_10) {

  case 0x00:

  case 0x06:
   VAR_6->pcm += VAR_9;
   break;

  case 0x0d:
   VAR_6->midi = VAR_9;
   break;

  case 0x01:
  case 0x02:
  case 0x03:
  case 0x04:
  case 0x05:

  case 0x07:
  case 0x0c:

  case 0x08:
  case 0x09:
  case 0x0a:
  case 0x0b:

  case 0x0e:

  case 0x0f:

  case 0x10:

  case 0x40:

  case 0xff:
  default:
   return -VAR_2;
  }
 }

 if (VAR_6->pcm > VAR_1 ||
     VAR_6->midi > VAR_0)
  return -VAR_2;

 return 0;
}

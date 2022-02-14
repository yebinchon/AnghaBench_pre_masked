
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dec_enc; } ;
struct TYPE_5__ {unsigned char* conv16to8_buf; unsigned char* conv16to8; void* err; TYPE_1__ af; } ;
typedef TYPE_2__ mpg123_handle ;






 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 double FUNC_2 (double) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(mpg123_handle *VAR_2)
{
  int VAR_3;
 int VAR_4 = VAR_2->af.dec_enc;




  const double VAR_5 = 8.0;

  if(!VAR_2->conv16to8_buf){
    VAR_2->conv16to8_buf = (unsigned char *) FUNC_3(8192);
    if(!VAR_2->conv16to8_buf) {
      VAR_2->err = VAR_0;
      if(VAR_1) FUNC_0("Can't allocate 16 to 8 converter table!");
      return -1;
    }
    VAR_2->conv16to8 = VAR_2->conv16to8_buf + 4096;
  }

 switch(VAR_4)
 {
 case 129:
 {
  double VAR_6=127.0 / FUNC_2(256.0);
  int VAR_7;

  for(VAR_3=-4096;VAR_3<4096;VAR_3++)
  {

   if(VAR_3 < 0)
   VAR_7 = 127 - (int) (FUNC_2( 1.0 - 255.0 * (double) VAR_3*VAR_5 / 32768.0 ) * VAR_6);
   else
   VAR_7 = 255 - (int) (FUNC_2( 1.0 + 255.0 * (double) VAR_3*VAR_5 / 32768.0 ) * VAR_6);
   if(VAR_7 < 0 || VAR_7 > 255)
   {
    if(VAR_1) FUNC_1("Converror %d %d",VAR_3,VAR_7);
    return -1;
   }
   if(VAR_7 == 0)
   VAR_7 = 2;
   VAR_2->conv16to8[VAR_3] = (unsigned char) VAR_7;
  }
 }
 break;
 case 130:
  for(VAR_3=-4096;VAR_3<4096;VAR_3++)
  VAR_2->conv16to8[VAR_3] = VAR_3>>5;
 break;
 case 128:
  for(VAR_3=-4096;VAR_3<4096;VAR_3++)
  VAR_2->conv16to8[VAR_3] = (VAR_3>>5)+128;
 break;
 case 131:
 {
  for(VAR_3=0; VAR_3<64; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = ((unsigned int)VAR_3)>>1;
  for(VAR_3=64; VAR_3<128; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = ((((unsigned int)VAR_3)>>2) & 0xf) | (2<<4);
  for(VAR_3=128; VAR_3<256; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = ((((unsigned int)VAR_3)>>3) & 0xf) | (3<<4);
  for(VAR_3=256; VAR_3<512; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = ((((unsigned int)VAR_3)>>4) & 0xf) | (4<<4);
  for(VAR_3=512; VAR_3<1024; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = ((((unsigned int)VAR_3)>>5) & 0xf) | (5<<4);
  for(VAR_3=1024; VAR_3<2048; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = ((((unsigned int)VAR_3)>>6) & 0xf) | (6<<4);
  for(VAR_3=2048; VAR_3<4096; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = ((((unsigned int)VAR_3)>>7) & 0xf) | (7<<4);

  for(VAR_3=-4095; VAR_3<0; ++VAR_3)
  VAR_2->conv16to8[VAR_3] = VAR_2->conv16to8[-VAR_3] | 0x80;

  VAR_2->conv16to8[-4096] = VAR_2->conv16to8[-4095];

  for(VAR_3=-4096;VAR_3<4096;VAR_3++)
  {


   VAR_2->conv16to8[VAR_3] ^= 0x55;
  }
 }
 break;
 default:
  VAR_2->err = VAR_0;
  if(VAR_1) FUNC_0("Unknown 8 bit encoding choice.");
  return -1;
 break;
 }

 return 0;
}

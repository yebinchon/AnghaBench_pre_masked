
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int) ;

uint32_t FUNC_3 ( const void * VAR_0, size_t VAR_1)
{
  const uint8_t * VAR_2 = (const uint8_t*)VAR_0;
  const int VAR_3 = VAR_1 / 4;

  uint32_t VAR_4 = 0;

  uint32_t VAR_5 = 0xcc9e2d51;
  uint32_t VAR_6 = 0x1b873593;




  const uint32_t * VAR_7 = (const uint32_t *)(VAR_2 + VAR_3*4);

  for(int VAR_8 = -VAR_3; VAR_8; VAR_8++)
  {
    uint32_t VAR_9 = FUNC_2(VAR_7,VAR_8);

    VAR_9 *= VAR_5;
    VAR_9 = FUNC_0(VAR_9,15);
    VAR_9 *= VAR_6;

    VAR_4 ^= VAR_9;
    VAR_4 = FUNC_0(VAR_4,13);
    VAR_4 = VAR_4*5+0xe6546b64;
  }




  const uint8_t * VAR_10 = (const uint8_t*)(VAR_2 + VAR_3*4);

  uint32_t VAR_11 = 0;

  switch(VAR_1 & 3)
  {
  case 3: VAR_11 ^= VAR_10[2] << 16;
  case 2: VAR_11 ^= VAR_10[1] << 8;
  case 1: VAR_11 ^= VAR_10[0];
          VAR_11 *= VAR_5; VAR_11 = FUNC_0(VAR_11,15); VAR_11 *= VAR_6; VAR_4 ^= VAR_11;
  };




  VAR_4 ^= VAR_1;

  VAR_4 = FUNC_1(VAR_4);


  return VAR_4;
}

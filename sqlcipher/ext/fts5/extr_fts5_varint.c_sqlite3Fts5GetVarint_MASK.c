
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

u8 FUNC_1(const unsigned char *VAR_2, u64 *VAR_3){
  u32 VAR_4,VAR_5,VAR_6;

  VAR_4 = *VAR_2;

  if (!(VAR_4&0x80))
  {
    *VAR_3 = VAR_4;
    return 1;
  }

  VAR_2++;
  VAR_5 = *VAR_2;

  if (!(VAR_5&0x80))
  {
    VAR_4 &= 0x7f;
    VAR_4 = VAR_4<<7;
    VAR_4 |= VAR_5;
    *VAR_3 = VAR_4;
    return 2;
  }


  FUNC_0( VAR_0 == ((0x7f<<14) | (0x7f)) );
  FUNC_0( VAR_1 == ((0xfU<<28) | (0x7f<<14) | (0x7f)) );

  VAR_2++;
  VAR_4 = VAR_4<<14;
  VAR_4 |= *VAR_2;

  if (!(VAR_4&0x80))
  {
    VAR_4 &= VAR_0;
    VAR_5 &= 0x7f;
    VAR_5 = VAR_5<<7;
    VAR_4 |= VAR_5;
    *VAR_3 = VAR_4;
    return 3;
  }


  VAR_4 &= VAR_0;
  VAR_2++;
  VAR_5 = VAR_5<<14;
  VAR_5 |= *VAR_2;

  if (!(VAR_5&0x80))
  {
    VAR_5 &= VAR_0;


    VAR_4 = VAR_4<<7;
    VAR_4 |= VAR_5;
    *VAR_3 = VAR_4;
    return 4;
  }






  VAR_5 &= VAR_0;
  VAR_6 = VAR_4;


  VAR_2++;
  VAR_4 = VAR_4<<14;
  VAR_4 |= *VAR_2;

  if (!(VAR_4&0x80))
  {



    VAR_5 = VAR_5<<7;
    VAR_4 |= VAR_5;
    VAR_6 = VAR_6>>18;
    *VAR_3 = ((u64)VAR_6)<<32 | VAR_4;
    return 5;
  }


  VAR_6 = VAR_6<<7;
  VAR_6 |= VAR_5;


  VAR_2++;
  VAR_5 = VAR_5<<14;
  VAR_5 |= *VAR_2;

  if (!(VAR_5&0x80))
  {


    VAR_4 &= VAR_0;
    VAR_4 = VAR_4<<7;
    VAR_4 |= VAR_5;
    VAR_6 = VAR_6>>18;
    *VAR_3 = ((u64)VAR_6)<<32 | VAR_4;
    return 6;
  }

  VAR_2++;
  VAR_4 = VAR_4<<14;
  VAR_4 |= *VAR_2;

  if (!(VAR_4&0x80))
  {
    VAR_4 &= VAR_1;
    VAR_5 &= VAR_0;
    VAR_5 = VAR_5<<7;
    VAR_4 |= VAR_5;
    VAR_6 = VAR_6>>11;
    *VAR_3 = ((u64)VAR_6)<<32 | VAR_4;
    return 7;
  }


  VAR_4 &= VAR_0;
  VAR_2++;
  VAR_5 = VAR_5<<14;
  VAR_5 |= *VAR_2;

  if (!(VAR_5&0x80))
  {
    VAR_5 &= VAR_1;


    VAR_4 = VAR_4<<7;
    VAR_4 |= VAR_5;
    VAR_6 = VAR_6>>4;
    *VAR_3 = ((u64)VAR_6)<<32 | VAR_4;
    return 8;
  }

  VAR_2++;
  VAR_4 = VAR_4<<15;
  VAR_4 |= *VAR_2;




  VAR_5 &= VAR_0;
  VAR_5 = VAR_5<<8;
  VAR_4 |= VAR_5;

  VAR_6 = VAR_6<<4;
  VAR_5 = VAR_2[-4];
  VAR_5 &= 0x7f;
  VAR_5 = VAR_5>>3;
  VAR_6 |= VAR_5;

  *VAR_3 = ((u64)VAR_6)<<32 | VAR_4;

  return 9;
}

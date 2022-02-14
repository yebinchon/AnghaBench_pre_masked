
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
 int FUNC_1 (unsigned char const*,int*) ;

u8 FUNC_2(const unsigned char *VAR_2, u32 *VAR_3){
  u32 VAR_4,VAR_5;



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
    *VAR_3 = VAR_4 | VAR_5;
    return 2;
  }


  VAR_2++;
  VAR_4 = VAR_4<<14;
  VAR_4 |= *VAR_2;

  if (!(VAR_4&0x80))
  {

    VAR_4 &= (0x7f<<14)|(0x7f);
    VAR_5 &= 0x7f;
    VAR_5 = VAR_5<<7;
    *VAR_3 = VAR_4 | VAR_5;
    return 3;
  }
  {
    u64 VAR_6;
    u8 VAR_7;

    VAR_2 -= 2;
    VAR_7 = FUNC_1(VAR_2, &VAR_6);
    FUNC_0( VAR_7>3 && VAR_7<=9 );
    if( (VAR_6 & VAR_1)!=VAR_6 ){
      *VAR_3 = 0xffffffff;
    }else{
      *VAR_3 = (u32)VAR_6;
    }
    return VAR_7;
  }
}

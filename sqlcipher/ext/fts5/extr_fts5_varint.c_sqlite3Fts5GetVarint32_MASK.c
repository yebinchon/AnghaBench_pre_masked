
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char const*,scalar_t__*) ;

int FUNC_2(const unsigned char *VAR_0, u32 *VAR_1){
  u32 VAR_2,VAR_3;


  VAR_2 = *VAR_0;

  if (!(VAR_2&0x80))
  {

    *VAR_1 = VAR_2;
    return 1;
  }


  VAR_0++;
  VAR_3 = *VAR_0;

  if (!(VAR_3&0x80))
  {

    VAR_2 &= 0x7f;
    VAR_2 = VAR_2<<7;
    *VAR_1 = VAR_2 | VAR_3;
    return 2;
  }


  VAR_0++;
  VAR_2 = VAR_2<<14;
  VAR_2 |= *VAR_0;

  if (!(VAR_2&0x80))
  {

    VAR_2 &= (0x7f<<14)|(0x7f);
    VAR_3 &= 0x7f;
    VAR_3 = VAR_3<<7;
    *VAR_1 = VAR_2 | VAR_3;
    return 3;
  }
  {
    u64 VAR_4;
    u8 VAR_5;
    VAR_0 -= 2;
    VAR_5 = FUNC_1(VAR_0, &VAR_4);
    *VAR_1 = ((u32)VAR_4) & 0x7FFFFFFF;
    FUNC_0( VAR_5>3 && VAR_5<=9 );
    return VAR_5;
  }
}

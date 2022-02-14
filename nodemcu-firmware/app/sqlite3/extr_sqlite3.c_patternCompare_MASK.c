
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct compareInfo {int matchOne; int matchAll; char noCase; scalar_t__ matchSet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const**) ;

__attribute__((used)) static int FUNC_6(
  const u8 *VAR_3,
  const u8 *VAR_4,
  const struct compareInfo *VAR_5,
  u32 VAR_6
){
  u32 VAR_7, VAR_8;
  u32 VAR_9 = VAR_5->matchOne;
  u32 VAR_10 = VAR_5->matchAll;
  u8 VAR_11 = VAR_5->noCase;
  const u8 *VAR_12 = 0;

  while( (VAR_7 = FUNC_1(VAR_3))!=0 ){
    if( VAR_7==VAR_10 ){



      while( (VAR_7=FUNC_1(VAR_3)) == VAR_10 || VAR_7 == VAR_9 ){
        if( VAR_7==VAR_9 && FUNC_5(&VAR_4)==0 ){
          return VAR_2;
        }
      }
      if( VAR_7==0 ){
        return VAR_0;
      }else if( VAR_7==VAR_6 ){
        if( VAR_5->matchSet==0 ){
          VAR_7 = FUNC_5(&VAR_3);
          if( VAR_7==0 ) return VAR_2;
        }else{


          FUNC_2( VAR_6<0x80 );
          while( *VAR_4 ){
            int VAR_13 = FUNC_6(&VAR_3[-1],VAR_4,VAR_5,VAR_6);
            if( VAR_13!=VAR_1 ) return VAR_13;
            FUNC_0(VAR_4);
          }
          return VAR_2;
        }
      }
      if( VAR_7<=0x80 ){
        u32 VAR_14;
        int VAR_15;
        if( VAR_11 ){
          VAR_14 = FUNC_4(VAR_7);
          VAR_7 = FUNC_3(VAR_7);
        }else{
          VAR_14 = VAR_7;
        }
        while( (VAR_8 = *(VAR_4++))!=0 ){
          if( VAR_8!=VAR_7 && VAR_8!=VAR_14 ) continue;
          VAR_15 = FUNC_6(VAR_3,VAR_4,VAR_5,VAR_6);
          if( VAR_15!=VAR_1 ) return VAR_15;
        }
      }else{
        int VAR_16;
        while( (VAR_8 = FUNC_1(VAR_4))!=0 ){
          if( VAR_8!=VAR_7 ) continue;
          VAR_16 = FUNC_6(VAR_3,VAR_4,VAR_5,VAR_6);
          if( VAR_16!=VAR_1 ) return VAR_16;
        }
      }
      return VAR_2;
    }
    if( VAR_7==VAR_6 ){
      if( VAR_5->matchSet==0 ){
        VAR_7 = FUNC_5(&VAR_3);
        if( VAR_7==0 ) return VAR_1;
        VAR_12 = VAR_3;
      }else{
        u32 VAR_17 = 0;
        int VAR_18 = 0;
        int VAR_19 = 0;
        VAR_7 = FUNC_5(&VAR_4);
        if( VAR_7==0 ) return VAR_1;
        VAR_8 = FUNC_5(&VAR_3);
        if( VAR_8=='^' ){
          VAR_19 = 1;
          VAR_8 = FUNC_5(&VAR_3);
        }
        if( VAR_8==']' ){
          if( VAR_7==']' ) VAR_18 = 1;
          VAR_8 = FUNC_5(&VAR_3);
        }
        while( VAR_8 && VAR_8!=']' ){
          if( VAR_8=='-' && VAR_3[0]!=']' && VAR_3[0]!=0 && VAR_17>0 ){
            VAR_8 = FUNC_5(&VAR_3);
            if( VAR_7>=VAR_17 && VAR_7<=VAR_8 ) VAR_18 = 1;
            VAR_17 = 0;
          }else{
            if( VAR_7==VAR_8 ){
              VAR_18 = 1;
            }
            VAR_17 = VAR_8;
          }
          VAR_8 = FUNC_5(&VAR_3);
        }
        if( VAR_8==0 || (VAR_18 ^ VAR_19)==0 ){
          return VAR_1;
        }
        continue;
      }
    }
    VAR_8 = FUNC_1(VAR_4);
    if( VAR_7==VAR_8 ) continue;
    if( VAR_11 && FUNC_3(VAR_7)==FUNC_3(VAR_8) && VAR_7<0x80 && VAR_8<0x80 ){
      continue;
    }
    if( VAR_7==VAR_9 && VAR_3!=VAR_12 && VAR_8!=0 ) continue;
    return VAR_1;
  }
  return *VAR_4==0 ? VAR_0 : VAR_1;
}

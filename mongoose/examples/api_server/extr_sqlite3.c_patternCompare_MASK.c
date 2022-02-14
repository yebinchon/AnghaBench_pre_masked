
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct compareInfo {int matchOne; int matchAll; int matchSet; int noCase; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const**) ;

__attribute__((used)) static int FUNC_4(
  const u8 *VAR_0,
  const u8 *VAR_1,
  const struct compareInfo *VAR_2,
  u32 VAR_3
){
  u32 VAR_4, VAR_5;
  int VAR_6;
  int VAR_7;
  u8 VAR_8 = VAR_2->matchOne;
  u8 VAR_9 = VAR_2->matchAll;
  u8 VAR_10 = VAR_2->matchSet;
  u8 VAR_11 = VAR_2->noCase;
  int VAR_12 = 0;

  while( (VAR_4 = FUNC_3(&VAR_0))!=0 ){
    if( VAR_4==VAR_9 && !VAR_12 ){
      while( (VAR_4=FUNC_3(&VAR_0)) == VAR_9
               || VAR_4 == VAR_8 ){
        if( VAR_4==VAR_8 && FUNC_3(&VAR_1)==0 ){
          return 0;
        }
      }
      if( VAR_4==0 ){
        return 1;
      }else if( VAR_4==VAR_3 ){
        VAR_4 = FUNC_3(&VAR_0);
        if( VAR_4==0 ){
          return 0;
        }
      }else if( VAR_4==VAR_10 ){
        FUNC_2( VAR_3==0 );
        FUNC_2( VAR_10<0x80 );
        while( *VAR_1 && FUNC_4(&VAR_0[-1],VAR_1,VAR_2,VAR_3)==0 ){
          FUNC_1(VAR_1);
        }
        return *VAR_1!=0;
      }
      while( (VAR_5 = FUNC_3(&VAR_1))!=0 ){
        if( VAR_11 ){
          FUNC_0(VAR_5);
          FUNC_0(VAR_4);
          while( VAR_5 != 0 && VAR_5 != VAR_4 ){
            VAR_5 = FUNC_3(&VAR_1);
            FUNC_0(VAR_5);
          }
        }else{
          while( VAR_5 != 0 && VAR_5 != VAR_4 ){
            VAR_5 = FUNC_3(&VAR_1);
          }
        }
        if( VAR_5==0 ) return 0;
        if( FUNC_4(VAR_0,VAR_1,VAR_2,VAR_3) ) return 1;
      }
      return 0;
    }else if( VAR_4==VAR_8 && !VAR_12 ){
      if( FUNC_3(&VAR_1)==0 ){
        return 0;
      }
    }else if( VAR_4==VAR_10 ){
      u32 VAR_13 = 0;
      FUNC_2( VAR_3==0 );
      VAR_7 = 0;
      VAR_6 = 0;
      VAR_4 = FUNC_3(&VAR_1);
      if( VAR_4==0 ) return 0;
      VAR_5 = FUNC_3(&VAR_0);
      if( VAR_5=='^' ){
        VAR_6 = 1;
        VAR_5 = FUNC_3(&VAR_0);
      }
      if( VAR_5==']' ){
        if( VAR_4==']' ) VAR_7 = 1;
        VAR_5 = FUNC_3(&VAR_0);
      }
      while( VAR_5 && VAR_5!=']' ){
        if( VAR_5=='-' && VAR_0[0]!=']' && VAR_0[0]!=0 && VAR_13>0 ){
          VAR_5 = FUNC_3(&VAR_0);
          if( VAR_4>=VAR_13 && VAR_4<=VAR_5 ) VAR_7 = 1;
          VAR_13 = 0;
        }else{
          if( VAR_4==VAR_5 ){
            VAR_7 = 1;
          }
          VAR_13 = VAR_5;
        }
        VAR_5 = FUNC_3(&VAR_0);
      }
      if( VAR_5==0 || (VAR_7 ^ VAR_6)==0 ){
        return 0;
      }
    }else if( VAR_3==VAR_4 && !VAR_12 ){
      VAR_12 = 1;
    }else{
      VAR_5 = FUNC_3(&VAR_1);
      if( VAR_11 ){
        FUNC_0(VAR_4);
        FUNC_0(VAR_5);
      }
      if( VAR_4!=VAR_5 ){
        return 0;
      }
      VAR_12 = 0;
    }
  }
  return *VAR_1==0;
}

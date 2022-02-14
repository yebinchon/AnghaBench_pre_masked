
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int) ;

int FUNC_4(const char *VAR_5, i64 *VAR_6, int VAR_7, u8 VAR_8){
  int VAR_9;
  u64 VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12;
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15;
  const char *VAR_16;
  const char *VAR_17 = VAR_5 + VAR_7;
  FUNC_0( VAR_8==VAR_4 || VAR_8==VAR_3 || VAR_8==VAR_2 );
  if( VAR_8==VAR_4 ){
    VAR_9 = 1;
  }else{
    VAR_9 = 2;
    FUNC_0( VAR_3==2 && VAR_2==3 );
    for(VAR_12=3-VAR_8; VAR_12<VAR_7 && VAR_5[VAR_12]==0; VAR_12+=2){}
    VAR_14 = VAR_12<VAR_7;
    VAR_17 = &VAR_5[VAR_12^1];
    VAR_5 += (VAR_8&1);
  }
  while( VAR_5<VAR_17 && FUNC_2(*VAR_5) ) VAR_5+=VAR_9;
  if( VAR_5<VAR_17 ){
    if( *VAR_5=='-' ){
      VAR_11 = 1;
      VAR_5+=VAR_9;
    }else if( *VAR_5=='+' ){
      VAR_5+=VAR_9;
    }
  }
  VAR_16 = VAR_5;
  while( VAR_5<VAR_17 && VAR_5[0]=='0' ){ VAR_5+=VAR_9; }
  for(VAR_12=0; &VAR_5[VAR_12]<VAR_17 && (VAR_13=VAR_5[VAR_12])>='0' && VAR_13<='9'; VAR_12+=VAR_9){
    VAR_10 = VAR_10*10 + VAR_13 - '0';
  }
  FUNC_3( VAR_12==18*VAR_9 );
  FUNC_3( VAR_12==19*VAR_9 );
  FUNC_3( VAR_12==20*VAR_9 );
  if( VAR_10>VAR_0 ){




    *VAR_6 = VAR_11 ? VAR_1 : VAR_0;
  }else if( VAR_11 ){
    *VAR_6 = -(i64)VAR_10;
  }else{
    *VAR_6 = (i64)VAR_10;
  }
  VAR_15 = 0;
  if( (VAR_12==0 && VAR_16==VAR_5)
   || VAR_14
  ){
    VAR_15 = 1;
  }else if( &VAR_5[VAR_12]<VAR_17 ){
    int VAR_18 = VAR_12;
    do{
      if( !FUNC_2(VAR_5[VAR_18]) ){
        VAR_15 = 1;
        break;
      }
      VAR_18 += VAR_9;
    }while( &VAR_5[VAR_18]<VAR_17 );
  }
  if( VAR_12<19*VAR_9 ){

    FUNC_0( VAR_10<=VAR_0 );
    return VAR_15;
  }else{

    VAR_13 = VAR_12>19*VAR_9 ? 1 : FUNC_1(VAR_5, VAR_9);
    if( VAR_13<0 ){

      FUNC_0( VAR_10<=VAR_0 );
      return VAR_15;
    }else{
      *VAR_6 = VAR_11 ? VAR_1 : VAR_0;
      if( VAR_13>0 ){

        return 2;
      }else{


        FUNC_0( VAR_10-1==VAR_0 );
        return VAR_11 ? VAR_15 : 3;
      }
    }
  }
}

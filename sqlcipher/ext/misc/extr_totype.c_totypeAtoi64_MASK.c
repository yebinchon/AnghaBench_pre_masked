
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, sqlite3_int64 *VAR_3, int VAR_4){
  sqlite3_uint64 VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  const char *VAR_10;
  const char *VAR_11 = VAR_2 + VAR_4;

  while( VAR_2<VAR_11 && FUNC_2(*VAR_2) ) VAR_2++;
  if( VAR_2<VAR_11 ){
    if( *VAR_2=='-' ){
      VAR_6 = 1;
      VAR_2++;
    }else if( *VAR_2=='+' ){
      VAR_2++;
    }
  }
  VAR_10 = VAR_2;
  while( VAR_2<VAR_11 && VAR_2[0]=='0' ){ VAR_2++; }
  for(VAR_7=0; &VAR_2[VAR_7]<VAR_11 && (VAR_8=VAR_2[VAR_7])>='0' && VAR_8<='9'; VAR_7++){
    VAR_5 = VAR_5*10 + VAR_8 - '0';
  }
  if( VAR_5>VAR_0 ){
    *VAR_3 = VAR_1;
  }else if( VAR_6 ){
    *VAR_3 = -(sqlite3_int64)VAR_5;
  }else{
    *VAR_3 = (sqlite3_int64)VAR_5;
  }
  if( (VAR_8!=0 && &VAR_2[VAR_7]<VAR_11) || (VAR_7==0 && VAR_10==VAR_2) || VAR_7>19 || VAR_9 ){


    return 1;
  }else if( VAR_7<19 ){

    FUNC_0( VAR_5<=VAR_0 );
    return 0;
  }else{

    VAR_8 = FUNC_1(VAR_2);
    if( VAR_8<0 ){

      FUNC_0( VAR_5<=VAR_0 );
      return 0;
    }else if( VAR_8>0 ){

      return 1;
    }else{


      FUNC_0( VAR_5-1==VAR_0 );
      FUNC_0( (*VAR_3)==VAR_1 );
      return VAR_6 ? 0 : 2;
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int const) ;
 int * VAR_18 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const*,int) ;

int FUNC_3(const WCHAR *VAR_19, int *VAR_20, int *VAR_21){
  int VAR_22;

  *VAR_21 = 0;
  switch( *VAR_19 ){
    case ' ': case '\t': case '\n': case '\f':
      for(VAR_22=1; FUNC_1(VAR_19[VAR_22]); VAR_22++){}
      *VAR_20 = VAR_14;
      return VAR_22;
    case '-':
      if( VAR_19[1]==0 ) return -1;
      *VAR_20 = VAR_11;
      return 1;
    case '(':
      *VAR_20 = VAR_9;
      return 1;
    case ')':
      *VAR_20 = VAR_13;
      return 1;
    case '*':
      *VAR_20 = VAR_15;
      return 1;
    case '=':
      *VAR_20 = VAR_2;
      return 1;
    case '<':
      if( VAR_19[1]=='=' ){
        *VAR_20 = VAR_8;
        return 2;
      }else if( VAR_19[1]=='>' ){
        *VAR_20 = VAR_12;
        return 2;
      }else{
        *VAR_20 = VAR_10;
        return 1;
      }
    case '>':
      if( VAR_19[1]=='=' ){
        *VAR_20 = VAR_3;
        return 2;
      }else{
        *VAR_20 = VAR_4;
        return 1;
      }
    case '!':
      if( VAR_19[1]!='=' ){
        *VAR_20 = VAR_6;
        return 2;
      }else{
        *VAR_20 = VAR_12;
        return 2;
      }
    case '?':
      *VAR_20 = VAR_17;
      return 1;
    case ',':
      *VAR_20 = VAR_0;
      return 1;
    case '`': case '\'': {
      int VAR_23 = VAR_19[0];
      for(VAR_22=1; VAR_19[VAR_22]; VAR_22++){
        if( VAR_19[VAR_22]==VAR_23 )
          break;
      }
      if( VAR_19[VAR_22] ) VAR_22++;
      if( VAR_23 == '`' )
        *VAR_20 = VAR_5;
      else
        *VAR_20 = VAR_16;
      return VAR_22;
    }
    case '.':
      if( !FUNC_0(VAR_19[1]) ){
        *VAR_20 = VAR_1;
        return 1;
      }

    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
      *VAR_20 = VAR_7;
      for(VAR_22=1; FUNC_0(VAR_19[VAR_22]); VAR_22++){}
      return VAR_22;
    case '[':
      for(VAR_22=1; VAR_19[VAR_22] && VAR_19[VAR_22-1]!=']'; VAR_22++){}
      *VAR_20 = VAR_5;
      return VAR_22;
    default:
      if( !VAR_18[*VAR_19] ){
        break;
      }
      for(VAR_22=1; VAR_18[VAR_19[VAR_22]]; VAR_22++){}
      *VAR_20 = FUNC_2(VAR_19, VAR_22);
      if( *VAR_20 == VAR_5 && VAR_19[VAR_22] == '`' ) *VAR_21 = 1;
      return VAR_22;
  }
  *VAR_20 = VAR_6;
  return 1;
}

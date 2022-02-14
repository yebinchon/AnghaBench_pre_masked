
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_2(const char *VAR_8){
  u8 VAR_9 = 0;
  u8 VAR_10;





  static const u8 VAR_11[8][8] = {


                      { 1, 0, 2, 3, 4, 2, 2, 2, },
                      { 1, 1, 2, 3, 4, 2, 2, 2, },
                      { 1, 2, 2, 2, 2, 2, 2, 2, },
                      { 1, 3, 3, 2, 4, 2, 2, 2, },
                      { 1, 4, 2, 2, 2, 4, 5, 2, },
                      { 6, 5, 5, 5, 5, 5, 5, 5, },
                      { 6, 6, 5, 5, 5, 5, 5, 7, },
                      { 1, 7, 5, 5, 5, 5, 5, 5, },
  };
  while( *VAR_8 ){
    switch( *VAR_8 ){
      case ';': {
        VAR_10 = VAR_4;
        break;
      }
      case ' ':
      case '\r':
      case '\t':
      case '\n':
      case '\f': {
        VAR_10 = VAR_7;
        break;
      }
      case '/': {
        if( VAR_8[1]!='*' ){
          VAR_10 = VAR_3;
          break;
        }
        VAR_8 += 2;
        while( VAR_8[0] && (VAR_8[0]!='*' || VAR_8[1]!='/') ){ VAR_8++; }
        if( VAR_8[0]==0 ) return 0;
        VAR_8++;
        VAR_10 = VAR_7;
        break;
      }
      case '-': {
        if( VAR_8[1]!='-' ){
          VAR_10 = VAR_3;
          break;
        }
        while( *VAR_8 && *VAR_8!='\n' ){ VAR_8++; }
        if( *VAR_8==0 ) return VAR_9==1;
        VAR_10 = VAR_7;
        break;
      }
      case '[': {
        VAR_8++;
        while( *VAR_8 && *VAR_8!=']' ){ VAR_8++; }
        if( *VAR_8==0 ) return 0;
        VAR_10 = VAR_3;
        break;
      }
      case '`':
      case '"':
      case '\'': {
        int VAR_12 = *VAR_8;
        VAR_8++;
        while( *VAR_8 && *VAR_8!=VAR_12 ){ VAR_8++; }
        if( *VAR_8==0 ) return 0;
        VAR_10 = VAR_3;
        break;
      }
      default: {



        if( FUNC_0((u8)*VAR_8) ){

          int VAR_13;
          for(VAR_13=1; FUNC_0(VAR_8[VAR_13]); VAR_13++){}



          switch( *VAR_8 ){
            case 'c': case 'C': {
              if( VAR_13==6 && FUNC_1(VAR_8, "create", 6)==0 ){
                VAR_10 = VAR_0;
              }else{
                VAR_10 = VAR_3;
              }
              break;
            }
            case 't': case 'T': {
              if( VAR_13==7 && FUNC_1(VAR_8, "trigger", 7)==0 ){
                VAR_10 = VAR_6;
              }else if( VAR_13==4 && FUNC_1(VAR_8, "temp", 4)==0 ){
                VAR_10 = VAR_5;
              }else if( VAR_13==9 && FUNC_1(VAR_8, "temporary", 9)==0 ){
                VAR_10 = VAR_5;
              }else{
                VAR_10 = VAR_3;
              }
              break;
            }
            case 'e': case 'E': {
              if( VAR_13==3 && FUNC_1(VAR_8, "end", 3)==0 ){
                VAR_10 = VAR_1;
              }else

              if( VAR_13==7 && FUNC_1(VAR_8, "explain", 7)==0 ){
                VAR_10 = VAR_2;
              }else

              {
                VAR_10 = VAR_3;
              }
              break;
            }
            default: {
              VAR_10 = VAR_3;
              break;
            }
          }

          VAR_8 += VAR_13-1;
        }else{

          VAR_10 = VAR_3;
        }
        break;
      }
    }
    VAR_9 = VAR_11[VAR_9][VAR_10];
    VAR_8++;
  }
  return VAR_9==1;
}

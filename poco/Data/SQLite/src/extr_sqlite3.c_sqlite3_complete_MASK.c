
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char const) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_2(const char *VAR_9){
  u8 VAR_10 = 0;
  u8 VAR_11;





  static const u8 VAR_12[8][8] = {


                      { 1, 0, 2, 3, 4, 2, 2, 2, },
                      { 1, 1, 2, 3, 4, 2, 2, 2, },
                      { 1, 2, 2, 2, 2, 2, 2, 2, },
                      { 1, 3, 3, 2, 4, 2, 2, 2, },
                      { 1, 4, 2, 2, 2, 4, 5, 2, },
                      { 6, 5, 5, 5, 5, 5, 5, 5, },
                      { 6, 6, 5, 5, 5, 5, 5, 7, },
                      { 1, 7, 5, 5, 5, 5, 5, 5, },
  };
  while( *VAR_9 ){
    switch( *VAR_9 ){
      case ';': {
        VAR_11 = VAR_5;
        break;
      }
      case ' ':
      case '\r':
      case '\t':
      case '\n':
      case '\f': {
        VAR_11 = VAR_8;
        break;
      }
      case '/': {
        if( VAR_9[1]!='*' ){
          VAR_11 = VAR_4;
          break;
        }
        VAR_9 += 2;
        while( VAR_9[0] && (VAR_9[0]!='*' || VAR_9[1]!='/') ){ VAR_9++; }
        if( VAR_9[0]==0 ) return 0;
        VAR_9++;
        VAR_11 = VAR_8;
        break;
      }
      case '-': {
        if( VAR_9[1]!='-' ){
          VAR_11 = VAR_4;
          break;
        }
        while( *VAR_9 && *VAR_9!='\n' ){ VAR_9++; }
        if( *VAR_9==0 ) return VAR_10==1;
        VAR_11 = VAR_8;
        break;
      }
      case '[': {
        VAR_9++;
        while( *VAR_9 && *VAR_9!=']' ){ VAR_9++; }
        if( *VAR_9==0 ) return 0;
        VAR_11 = VAR_4;
        break;
      }
      case '`':
      case '"':
      case '\'': {
        int VAR_13 = *VAR_9;
        VAR_9++;
        while( *VAR_9 && *VAR_9!=VAR_13 ){ VAR_9++; }
        if( *VAR_9==0 ) return 0;
        VAR_11 = VAR_4;
        break;
      }
      default: {



        if( FUNC_0((u8)*VAR_9) ){

          int VAR_14;
          for(VAR_14=1; FUNC_0(VAR_9[VAR_14]); VAR_14++){}



          switch( *VAR_9 ){
            case 'c': case 'C': {
              if( VAR_14==6 && FUNC_1(VAR_9, "create", 6)==0 ){
                VAR_11 = VAR_1;
              }else{
                VAR_11 = VAR_4;
              }
              break;
            }
            case 't': case 'T': {
              if( VAR_14==7 && FUNC_1(VAR_9, "trigger", 7)==0 ){
                VAR_11 = VAR_7;
              }else if( VAR_14==4 && FUNC_1(VAR_9, "temp", 4)==0 ){
                VAR_11 = VAR_6;
              }else if( VAR_14==9 && FUNC_1(VAR_9, "temporary", 9)==0 ){
                VAR_11 = VAR_6;
              }else{
                VAR_11 = VAR_4;
              }
              break;
            }
            case 'e': case 'E': {
              if( VAR_14==3 && FUNC_1(VAR_9, "end", 3)==0 ){
                VAR_11 = VAR_2;
              }else

              if( VAR_14==7 && FUNC_1(VAR_9, "explain", 7)==0 ){
                VAR_11 = VAR_3;
              }else

              {
                VAR_11 = VAR_4;
              }
              break;
            }
            default: {
              VAR_11 = VAR_4;
              break;
            }
          }

          VAR_9 += VAR_14-1;
        }else{

          VAR_11 = VAR_4;
        }
        break;
      }
    }
    VAR_10 = VAR_12[VAR_10][VAR_11];
    VAR_9++;
  }
  return VAR_10==1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 scalar_t__ FUNC_0 (char const) ;





 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (unsigned char*,int*) ;
 char FUNC_4 (char const) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__) ;
 char* FUNC_7 (char*,int) ;
 int FUNC_8 (char const*,char*,int) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char*,char*) ;

char *FUNC_12(const char *VAR_0){
  char *VAR_1;
  sqlite3_int64 VAR_2;
  sqlite3_int64 VAR_3;
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;

  VAR_3 = FUNC_9(VAR_0);
  VAR_2 = VAR_3;
  VAR_1 = FUNC_6( VAR_2+2 );
  if( VAR_1==0 ) return 0;
  for(VAR_4=VAR_5=0; VAR_0[VAR_4]; VAR_4 += VAR_7){
    VAR_7 = FUNC_3((unsigned char*)VAR_0+VAR_4, &VAR_6);
    switch( VAR_6 ){
      case 128: {
        break;
      }
      case 132: {
        FUNC_5(VAR_1);
        return 0;
      }
      case 131: {
        VAR_1[VAR_5++] = '?';
        break;
      }
      case 129:
      case 130: {
        if( VAR_7==4 && FUNC_8(VAR_0+VAR_4,"NULL",4)==0 ){
          if( (VAR_5>=3 && FUNC_10(VAR_1+VAR_5-2,"is",2)==0 && !FUNC_0(VAR_1[VAR_5-3]))
           || (VAR_5>=4 && FUNC_10(VAR_1+VAR_5-3,"not",3)==0 && !FUNC_0(VAR_1[VAR_5-4]))
          ){

          }else{

            VAR_1[VAR_5++] = '?';
            break;
          }
        }
        if( VAR_5>0 && FUNC_0(VAR_1[VAR_5-1]) && FUNC_0(VAR_0[VAR_4]) ) VAR_1[VAR_5++] = ' ';
        for(VAR_8=0; VAR_8<VAR_7; VAR_8++){
          VAR_1[VAR_5++] = FUNC_4(VAR_0[VAR_4+VAR_8]);
        }
        break;
      }
    }
  }
  while( VAR_5>0 && VAR_1[VAR_5-1]==' ' ){ VAR_5--; }
  if( VAR_5>0 && VAR_1[VAR_5-1]!=';' ){ VAR_1[VAR_5++] = ';'; }
  VAR_1[VAR_5] = 0;



  for(VAR_4=0; VAR_4<VAR_5; VAR_4=VAR_7){
    char *VAR_9 = FUNC_11(VAR_1+VAR_4, "in(");
    int VAR_10;
    if( VAR_9==0 ) break;
    VAR_7 = (int)(VAR_9-VAR_1)+3;
    if( VAR_7 && FUNC_0(VAR_9[-1]) ) continue;
    if( FUNC_10(VAR_9, "in(select",9)==0 && !FUNC_0(VAR_9[9]) ) continue;
    if( FUNC_10(VAR_9, "in(with",7)==0 && !FUNC_0(VAR_9[7]) ) continue;
    for(VAR_10=1, VAR_8=0; VAR_1[VAR_7+VAR_8]; VAR_8++){
      if( VAR_1[VAR_7+VAR_8]=='(' ) VAR_10++;
      if( VAR_1[VAR_7+VAR_8]==')' ){
        VAR_10--;
        if( VAR_10==0 ) break;
      }
    }

    if( VAR_8<5 ){
      VAR_1 = FUNC_7(VAR_1, VAR_5+(5-VAR_8)+1);
      if( VAR_1==0 ) return 0;
      FUNC_2(VAR_1+VAR_7+5, VAR_1+VAR_7+VAR_8, VAR_5-(VAR_7+VAR_8));
    }else if( VAR_8>5 ){
      FUNC_2(VAR_1+VAR_7+5, VAR_1+VAR_7+VAR_8, VAR_5-(VAR_7+VAR_8));
    }
    VAR_5 = VAR_5-VAR_8+5;
    VAR_1[VAR_5] = 0;
    FUNC_1(VAR_1+VAR_7, "?,?,?", 5);
  }
  return VAR_1;
}

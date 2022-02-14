
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5, int *VAR_6){
  int VAR_7, VAR_8;
  switch( *VAR_5 ){
    case 0: {
      *VAR_6 = VAR_0;
      return 0;
    }
    case ' ': case '\t': case '\n': case '\f': case '\r': {
      for(VAR_7=1; FUNC_1(VAR_5[VAR_7]); VAR_7++){}
      *VAR_6 = VAR_3;
      return VAR_7;
    }
    case '`':
    case '\'':
    case '"': {
      int VAR_9 = VAR_5[0];
      for(VAR_7=1; (VAR_8=VAR_5[VAR_7])!=0; VAR_7++){
        if( VAR_8==VAR_9 ){
          if( VAR_5[VAR_7+1]==VAR_9 ){
            VAR_7++;
          }else{
            break;
          }
        }
      }
      *VAR_6 = VAR_4;
      return VAR_7 + (VAR_8!=0);
    }
    case '[': {
      for(VAR_7=1, VAR_8=VAR_5[0]; VAR_8!=']' && (VAR_8=VAR_5[VAR_7])!=0; VAR_7++){}
      *VAR_6 = VAR_1;
      return VAR_7;
    }
    default: {
      if( !FUNC_0(*VAR_5) ){
        break;
      }
      for(VAR_7=1; FUNC_0(VAR_5[VAR_7]); VAR_7++){}
      *VAR_6 = VAR_1;
      return VAR_7;
    }
  }
  *VAR_6 = VAR_2;
  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0){
  sqlite3_int64 VAR_1;
  char *VAR_2;

  VAR_1 = FUNC_3(VAR_0);
  VAR_2 = FUNC_2(VAR_1+1);
  if( VAR_2 ){
    char VAR_3 = VAR_0[0];

    if( VAR_3!='[' && VAR_3!= '\'' && VAR_3!='"' && VAR_3!='`' ){
      FUNC_1(VAR_2, VAR_0, (size_t)(VAR_1+1));
    }else{
      int VAR_4 = 0;
      int VAR_5;

      if( VAR_3=='[' ) VAR_3 = ']';
      for(VAR_5=1; VAR_5<VAR_1; VAR_5++){
        if( VAR_0[VAR_5]==VAR_3 ) VAR_5++;
        VAR_2[VAR_4++] = VAR_0[VAR_5];
      }
    }
    FUNC_0( (int)FUNC_3(VAR_2)<=VAR_1 );
  }
  return VAR_2;
}

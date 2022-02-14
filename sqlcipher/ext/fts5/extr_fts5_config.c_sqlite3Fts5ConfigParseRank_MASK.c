
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (int*,int) ;
 int FUNC_6 (char*) ;

int FUNC_7(
  const char *VAR_2,
  char **VAR_3,
  char **VAR_4
){
  const char *VAR_5 = VAR_2;
  const char *VAR_6;
  char *VAR_7 = 0;
  char *VAR_8 = 0;
  int VAR_9 = VAR_1;

  *VAR_3 = 0;
  *VAR_4 = 0;

  if( VAR_5==0 ){
    VAR_9 = VAR_0;
  }else{
    VAR_5 = FUNC_3(VAR_5);
    VAR_6 = VAR_5;
    VAR_5 = FUNC_2(VAR_5);

    if( VAR_5 ){
      VAR_7 = FUNC_5(&VAR_9, 1 + VAR_5 - VAR_6);
      if( VAR_7 ) FUNC_4(VAR_7, VAR_6, VAR_5-VAR_6);
    }else{
      VAR_9 = VAR_0;
    }

    if( VAR_9==VAR_1 ){
      VAR_5 = FUNC_3(VAR_5);
      if( *VAR_5!='(' ) VAR_9 = VAR_0;
      VAR_5++;
    }
    if( VAR_9==VAR_1 ){
      const char *VAR_10;
      VAR_5 = FUNC_3(VAR_5);
      VAR_10 = VAR_5;
      if( *VAR_5!=')' ){
        VAR_5 = FUNC_1(VAR_5);
        if( VAR_5==0 ){
          VAR_9 = VAR_0;
        }else{
          VAR_8 = FUNC_5(&VAR_9, 1 + VAR_5 - VAR_10);
          if( VAR_8 ) FUNC_4(VAR_8, VAR_10, VAR_5-VAR_10);
        }
      }
    }
  }

  if( VAR_9!=VAR_1 ){
    FUNC_6(VAR_7);
    FUNC_0( VAR_8==0 );
  }else{
    *VAR_3 = VAR_7;
    *VAR_4 = VAR_8;
  }
  return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (size_t) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*,char) ;

char *FUNC_9(char *VAR_0, char *VAR_1, int VAR_2)
{
  const char *VAR_3;
  char *VAR_4;
  char *VAR_5;
  char *VAR_6,*VAR_7;
  char VAR_8;




  VAR_7 = FUNC_8(VAR_0,'/');

  if( VAR_7 ){
    VAR_8 = *VAR_7;
    *VAR_7 = 0;
    VAR_6 = (char *)FUNC_6( FUNC_3(VAR_0) + FUNC_3(VAR_1) + 2 );
    if( VAR_6 ) FUNC_4(VAR_6,"%s/%s",VAR_0,VAR_1);
    *VAR_7 = VAR_8;
  }else{
    VAR_3 = FUNC_2("PATH");
    if( VAR_3==0 ) VAR_3 = ".:/bin:/usr/bin";
    VAR_5 = (char *) FUNC_6( FUNC_3(VAR_3) + 1 );
    VAR_6 = (char *)FUNC_6( FUNC_3(VAR_3)+FUNC_3(VAR_1)+2 );
    if( (VAR_5 != 0) && (VAR_6!=0) ){
      VAR_4 = VAR_5;
      FUNC_5(VAR_5, VAR_3);
      while( *VAR_5 ){
        VAR_7 = FUNC_7(VAR_5,':');
        if( VAR_7==0 ) VAR_7 = &VAR_5[FUNC_3(VAR_5)];
        VAR_8 = *VAR_7;
        *VAR_7 = 0;
        FUNC_4(VAR_6,"%s/%s",VAR_5,VAR_1);
        *VAR_7 = VAR_8;
        if( VAR_8==0 ) VAR_5[0] = 0;
        else VAR_5 = &VAR_7[1];
        if( FUNC_0(VAR_6,VAR_2)==0 ) break;
      }
      FUNC_1(VAR_4);
    }
  }
  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (char const*,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (scalar_t__,char const*,int*) ;
 int FUNC_6 (scalar_t__,char const*,int*) ;
 int FUNC_7 (scalar_t__,char const*,int*) ;
 int FUNC_8 (scalar_t__,char const*,int*) ;
 int FUNC_9 (scalar_t__,char const*,int*) ;
 int FUNC_10 (scalar_t__,char const*,int*) ;
 int FUNC_11 (char const*,int*) ;
 int FUNC_12 (scalar_t__,char const*,int*) ;

int FUNC_13(int VAR_0, char **VAR_1){
  int VAR_2;
  int VAR_3;
  int VAR_4 = 0;
  const char *VAR_5 = 0;

  if( VAR_0>1 ){
    FUNC_3("Usage: test ?PATTERN?\n");
    return 1;
  }
  if( VAR_0==1 ){
    VAR_5 = VAR_1[0];
  }

  for(VAR_2=0; FUNC_2(VAR_2); VAR_2++){
    VAR_3 = 0;

    FUNC_5(FUNC_2(VAR_2), VAR_5, &VAR_3);
    FUNC_6(FUNC_2(VAR_2), VAR_5, &VAR_3);
    FUNC_7(FUNC_2(VAR_2), VAR_5, &VAR_3);
    FUNC_8(FUNC_2(VAR_2), VAR_5, &VAR_3);
    FUNC_12(FUNC_2(VAR_2), VAR_5, &VAR_3);
    FUNC_9(FUNC_2(VAR_2), VAR_5, &VAR_3);
    FUNC_10(FUNC_2(VAR_2), VAR_5, &VAR_3);

    if( VAR_3 ) VAR_4++;
  }

  VAR_3 = 0;
  FUNC_11(VAR_5, &VAR_3);
  if( VAR_3 ) VAR_4++;

  VAR_3 = 0;
  FUNC_4(VAR_5, &VAR_3);
  if( VAR_3 ) VAR_4++;

  VAR_3 = 0;
  FUNC_0(VAR_5, &VAR_3);
  if( VAR_3 ) VAR_4++;

  VAR_3 = 0;
  FUNC_1(VAR_5, &VAR_3);
  if( VAR_3 ) VAR_4++;

  return (VAR_4!=0);
}

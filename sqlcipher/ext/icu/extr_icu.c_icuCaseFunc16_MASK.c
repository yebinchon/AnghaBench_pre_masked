
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef scalar_t__ UErrorCode ;
typedef char UChar ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char const*,int,char const*,scalar_t__*) ;
 int FUNC_12 (char*,int,char const*,int,char const*,scalar_t__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_13(sqlite3_context *VAR_4, int VAR_5, sqlite3_value **VAR_6){
  const UChar *VAR_7;
  UChar *VAR_8 = 0;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  UErrorCode VAR_13;
  const char *VAR_14 = 0;

  FUNC_1(VAR_5==1 || VAR_5==2);
  VAR_12 = (FUNC_7(VAR_4)!=0);
  if( VAR_5==2 ){
    VAR_14 = (const char *)FUNC_9(VAR_6[1]);
  }

  VAR_7 = FUNC_10(VAR_6[0]);
  if( !VAR_7 ){
    return;
  }
  VAR_10 = VAR_9 = FUNC_8(VAR_6[0]);
  if( VAR_10==0 ){
    FUNC_6(VAR_4, "", 0, VAR_0);
    return;
  }

  for(VAR_11=0; VAR_11<2; VAR_11++){
    UChar *VAR_15 = FUNC_4(VAR_8, VAR_10);
    if( VAR_15==0 ){
      FUNC_3(VAR_8);
      FUNC_5(VAR_4);
      return;
    }
    VAR_8 = VAR_15;
    VAR_13 = VAR_2;
    if( VAR_12 ){
      VAR_10 = 2*FUNC_12(VAR_8,VAR_10/2,VAR_7,VAR_9/2,VAR_14,&VAR_13);
    }else{
      VAR_10 = 2*FUNC_11(VAR_8,VAR_10/2,VAR_7,VAR_9/2,VAR_14,&VAR_13);
    }

    if( FUNC_0(VAR_13) ){
      FUNC_6(VAR_4, VAR_8, VAR_10, VAR_3);
    }else if( VAR_13==VAR_1 ){
      FUNC_1( VAR_11==0 );
      continue;
    }else{
      FUNC_2(VAR_4, VAR_12 ? "u_strToUpper" : "u_strToLower", VAR_13);
    }
    return;
  }
  FUNC_1( 0 );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,double*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int,double) ;
 int FUNC_5 (int *,double) ;
 int FUNC_6 (int *) ;
 double FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(sqlite3_context *VAR_2, int VAR_3, sqlite3_value **VAR_4){
  int VAR_5 = 0;
  double VAR_6;
  char *VAR_7;
  FUNC_0( VAR_3==1 || VAR_3==2 );
  if( VAR_3==2 ){
    if( VAR_0==FUNC_9(VAR_4[1]) ) return;
    VAR_5 = FUNC_8(VAR_4[1]);
    if( VAR_5>30 ) VAR_5 = 30;
    if( VAR_5<0 ) VAR_5 = 0;
  }
  if( FUNC_9(VAR_4[0])==VAR_0 ) return;
  VAR_6 = FUNC_7(VAR_4[0]);




  if( VAR_6<-4503599627370496.0 || VAR_6>+4503599627370496.0 ){

  }else if( VAR_5==0 ){
    VAR_6 = (double)((sqlite_int64)(VAR_6+(VAR_6<0?-0.5:+0.5)));
  }else{
    VAR_7 = FUNC_4("%.*f",VAR_5,VAR_6);
    if( VAR_7==0 ){
      FUNC_6(VAR_2);
      return;
    }
    FUNC_1(VAR_7, &VAR_6, FUNC_2(VAR_7), VAR_1);
    FUNC_3(VAR_7);
  }
  FUNC_5(VAR_2, VAR_6);
}

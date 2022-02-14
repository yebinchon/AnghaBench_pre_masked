
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
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

__attribute__((used)) static void FUNC_10(sqlite3_context *VAR_3, int VAR_4, sqlite3_value **VAR_5){
  int VAR_6 = 0;
  double VAR_7;
  char *VAR_8;
  FUNC_0( VAR_4==1 || VAR_4==2 );
  if( VAR_4==2 ){
    if( VAR_1==FUNC_9(VAR_5[1]) ) return;
    VAR_6 = FUNC_8(VAR_5[1]);
    if( VAR_6>30 ) VAR_6 = 30;
    if( VAR_6<0 ) VAR_6 = 0;
  }
  if( FUNC_9(VAR_5[0])==VAR_1 ) return;
  VAR_7 = FUNC_7(VAR_5[0]);




  if( VAR_6==0 && VAR_7>=0 && VAR_7<VAR_0-1 ){
    VAR_7 = (double)((sqlite_int64)(VAR_7+0.5));
  }else if( VAR_6==0 && VAR_7<0 && (-VAR_7)<VAR_0-1 ){
    VAR_7 = -(double)((sqlite_int64)((-VAR_7)+0.5));
  }else{
    VAR_8 = FUNC_4("%.*f",VAR_6,VAR_7);
    if( VAR_8==0 ){
      FUNC_6(VAR_3);
      return;
    }
    FUNC_1(VAR_8, &VAR_7, FUNC_2(VAR_8), VAR_2);
    FUNC_3(VAR_8);
  }
  FUNC_5(VAR_3, VAR_7);
}

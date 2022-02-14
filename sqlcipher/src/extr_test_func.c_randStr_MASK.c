
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zSrc ;
typedef int zBuf ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int r ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,...) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  static const unsigned char VAR_4[] =
     "abcdefghijklmnopqrstuvwxyz"
     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
     "0123456789"
     ".-!,:*^+=_|?/<> ";
  int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  unsigned char VAR_10[1000];




  FUNC_0(VAR_2==2);

  VAR_5 = FUNC_3(VAR_3[0]);
  if( VAR_5<0 ) VAR_5 = 0;
  if( VAR_5>=sizeof(VAR_10) ) VAR_5 = sizeof(VAR_10)-1;
  VAR_6 = FUNC_3(VAR_3[1]);
  if( VAR_6<VAR_5 ) VAR_6 = VAR_5;
  if( VAR_6>=sizeof(VAR_10) ) VAR_6 = sizeof(VAR_10)-1;
  VAR_7 = VAR_5;
  if( VAR_6>VAR_5 ){
    FUNC_1(sizeof(VAR_8), &VAR_8);
    VAR_8 &= 0x7fffffff;
    VAR_7 += VAR_8%(VAR_6 + 1 - VAR_5);
  }
  FUNC_0( VAR_7<sizeof(VAR_10) );
  FUNC_1(VAR_7, VAR_10);
  for(VAR_9=0; VAR_9<VAR_7; VAR_9++){
    VAR_10[VAR_9] = VAR_4[VAR_10[VAR_9]%(sizeof(VAR_4)-1)];
  }
  VAR_10[VAR_7] = 0;
  FUNC_2(VAR_1, (char*)VAR_10, VAR_7, VAR_0);
}

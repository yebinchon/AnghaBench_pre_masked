
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  int VAR_5;
  for(VAR_5=0; VAR_5<VAR_3; VAR_5++){
    if( VAR_0!=FUNC_3(VAR_4[VAR_5]) ){
      int VAR_6 = FUNC_1(VAR_4[VAR_5]);
      FUNC_0(VAR_2, (char*)FUNC_2(VAR_4[VAR_5]),
          VAR_6, VAR_1);
      break;
    }
  }
}

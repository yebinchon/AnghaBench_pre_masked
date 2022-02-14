
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {scalar_t__* aLimit; } ;
typedef TYPE_1__ sqlite3 ;
typedef scalar_t__ i64 ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  i64 VAR_4;
  sqlite3 *VAR_5 = FUNC_2(VAR_1);
  FUNC_1( VAR_2==1 );
  FUNC_0(VAR_2);
  VAR_4 = FUNC_5(VAR_3[0]);
  FUNC_6( VAR_4==VAR_5->aLimit[VAR_0] );
  FUNC_6( VAR_4==VAR_5->aLimit[VAR_0]+1 );
  if( VAR_4>VAR_5->aLimit[VAR_0] ){
    FUNC_3(VAR_1);
  }else{
    FUNC_4(VAR_1, (int)VAR_4);
  }
}

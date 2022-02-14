
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_mutex ;
typedef int sqlite3_int64 ;
struct TYPE_2__ {int * nowValue; int * mxValue; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

int FUNC_5(
  int VAR_5,
  sqlite3_int64 *VAR_6,
  sqlite3_int64 *VAR_7,
  int VAR_8
){
  sqlite3_mutex *VAR_9;
  VAR_4;
  if( VAR_5<0 || VAR_5>=FUNC_0(VAR_3.nowValue) ){
    return VAR_0;
  }



  VAR_9 = VAR_2[VAR_5] ? FUNC_2() : FUNC_1();
  FUNC_3(VAR_9);
  *VAR_6 = VAR_3.nowValue[VAR_5];
  *VAR_7 = VAR_3.mxValue[VAR_5];
  if( VAR_8 ){
    VAR_3.mxValue[VAR_5] = VAR_3.nowValue[VAR_5];
  }
  FUNC_4(VAR_9);
  (void)VAR_9;
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_2__ {scalar_t__* nowValue; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

sqlite3_int64 FUNC_5(int VAR_3){
  VAR_2;
  FUNC_1( VAR_3>=0 && VAR_3<FUNC_0(VAR_1.nowValue) );
  FUNC_1( VAR_3>=0 && VAR_3<FUNC_0(VAR_0) );
  FUNC_1( FUNC_4(VAR_0[VAR_3] ? FUNC_3()
                                           : FUNC_2()) );
  return VAR_1.nowValue[VAR_3];
}

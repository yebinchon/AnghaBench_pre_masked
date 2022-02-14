
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite3StatValueType ;
struct TYPE_2__ {scalar_t__* mxValue; scalar_t__* nowValue; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

void FUNC_5(int VAR_6, int VAR_7){
  sqlite3StatValueType VAR_8;
  VAR_5;
  FUNC_1( VAR_7>=0 );
  VAR_8 = (sqlite3StatValueType)VAR_7;
  FUNC_1( VAR_6>=0 && VAR_6<FUNC_0(VAR_4.nowValue) );
  FUNC_1( VAR_6>=0 && VAR_6<FUNC_0(VAR_3) );
  FUNC_1( FUNC_4(VAR_3[VAR_6] ? FUNC_3()
                                           : FUNC_2()) );
  FUNC_1( VAR_6==VAR_0
          || VAR_6==VAR_1
          || VAR_6==VAR_2 );
  if( VAR_8>VAR_4.mxValue[VAR_6] ){
    VAR_4.mxValue[VAR_6] = VAR_8;
  }
}

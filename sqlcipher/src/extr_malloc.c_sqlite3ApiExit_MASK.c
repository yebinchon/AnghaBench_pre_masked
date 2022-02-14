
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errMask; scalar_t__ mallocFailed; int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3(sqlite3* VAR_1, int VAR_2){




  FUNC_1( VAR_1!=0 );
  FUNC_1( FUNC_2(VAR_1->mutex) );
  if( VAR_1->mallocFailed || VAR_2==VAR_0 ){
    return FUNC_0(VAR_1);
  }
  return VAR_2 & VAR_1->errMask;
}

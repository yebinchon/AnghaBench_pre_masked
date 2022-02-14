
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nChange; int nTotalChange; int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(sqlite3 *VAR_0, int VAR_1){
  FUNC_0( FUNC_1(VAR_0->mutex) );
  VAR_0->nChange = VAR_1;
  VAR_0->nTotalChange += VAR_1;
}

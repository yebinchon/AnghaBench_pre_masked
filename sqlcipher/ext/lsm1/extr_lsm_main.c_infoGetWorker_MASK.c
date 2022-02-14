
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pWorker; } ;
typedef TYPE_1__ lsm_db ;
typedef int Snapshot ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(lsm_db *VAR_1, Snapshot **VAR_2, int *VAR_3){
  int VAR_4 = VAR_0;

  FUNC_0( *VAR_3==0 );
  if( !VAR_1->pWorker ){
    VAR_4 = FUNC_1(VAR_1);
    if( VAR_4!=VAR_0 ) return VAR_4;
    *VAR_3 = 1;
  }
  if( VAR_2 ) *VAR_2 = VAR_1->pWorker;
  return VAR_4;
}

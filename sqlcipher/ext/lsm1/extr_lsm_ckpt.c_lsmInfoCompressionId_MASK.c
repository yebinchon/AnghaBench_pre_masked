
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ pClient; scalar_t__ pWorker; int * aSnapshot; } ;
typedef TYPE_1__ lsm_db ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(lsm_db *VAR_2, u32 *VAR_3){
  int VAR_4;

  FUNC_0( VAR_2->pClient==0 && VAR_2->pWorker==0 );
  VAR_4 = FUNC_1(VAR_2, 0);
  if( VAR_4==VAR_1 ){
    *VAR_3 = VAR_2->aSnapshot[VAR_0];
  }

  return VAR_4;
}

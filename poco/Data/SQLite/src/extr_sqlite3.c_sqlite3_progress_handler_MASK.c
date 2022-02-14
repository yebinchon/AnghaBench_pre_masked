
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xProgress ) (void*) ;unsigned int nProgressOps; int mutex; void* pProgressArg; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(
  sqlite3 *VAR_1,
  int VAR_2,
  int (*VAR_3)(void*),
  void *VAR_4
){






  FUNC_1(VAR_1->mutex);
  if( VAR_2>0 ){
    VAR_1->xProgress = VAR_3;
    VAR_1->nProgressOps = (unsigned)VAR_2;
    VAR_1->pProgressArg = VAR_4;
  }else{
    VAR_1->xProgress = 0;
    VAR_1->nProgressOps = 0;
    VAR_1->pProgressArg = 0;
  }
  FUNC_2(VAR_1->mutex);
}

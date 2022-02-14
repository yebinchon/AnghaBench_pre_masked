
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iVersion; scalar_t__ xShmMap; } ;
typedef TYPE_2__ sqlite3_io_methods ;
struct TYPE_7__ {scalar_t__ exclusiveMode; scalar_t__ noLock; TYPE_1__* fd; } ;
struct TYPE_5__ {TYPE_2__* pMethods; } ;
typedef TYPE_3__ Pager ;



int FUNC_0(Pager *VAR_0){
  const sqlite3_io_methods *VAR_1 = VAR_0->fd->pMethods;
  if( VAR_0->noLock ) return 0;
  return VAR_0->exclusiveMode || (VAR_1->iVersion>=2 && VAR_1->xShmMap);
}

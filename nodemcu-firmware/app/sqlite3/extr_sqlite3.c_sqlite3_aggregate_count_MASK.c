
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pMem; TYPE_1__* pFunc; } ;
typedef TYPE_3__ sqlite3_context ;
struct TYPE_6__ {int n; } ;
struct TYPE_5__ {scalar_t__ xFinalize; } ;


 int FUNC_0 (int) ;

int FUNC_1(sqlite3_context *VAR_0){
  FUNC_0( VAR_0 && VAR_0->pMem && VAR_0->pFunc && VAR_0->pFunc->xFinalize );
  return VAR_0->pMem->n;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pParse; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_5__ {int rc; int nErr; } ;
typedef TYPE_2__ Parse ;



int FUNC_0(sqlite3 *VAR_0, int VAR_1){
  Parse *VAR_2;
  if( VAR_0==0 || (VAR_2 = VAR_0->pParse)==0 ) return VAR_1;
  VAR_2->rc = VAR_1;
  VAR_2->nErr++;
  return VAR_1;
}

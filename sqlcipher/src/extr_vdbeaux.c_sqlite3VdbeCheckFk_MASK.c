
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nDeferredCons; scalar_t__ nDeferredImmCons; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {scalar_t__ nFkConstraint; int errorAction; int rc; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;

int FUNC_1(Vdbe *VAR_4, int VAR_5){
  sqlite3 *VAR_6 = VAR_4->db;
  if( (VAR_5 && (VAR_6->nDeferredCons+VAR_6->nDeferredImmCons)>0)
   || (!VAR_5 && VAR_4->nFkConstraint>0)
  ){
    VAR_4->rc = VAR_1;
    VAR_4->errorAction = VAR_0;
    FUNC_0(VAR_4, "FOREIGN KEY constraint failed");
    return VAR_2;
  }
  return VAR_3;
}

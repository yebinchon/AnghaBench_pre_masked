
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* pMethods; } ;
typedef TYPE_3__ sqlite3_file ;
struct TYPE_11__ {int nReal; TYPE_2__* aReal; } ;
typedef TYPE_4__ multiplexGroup ;
struct TYPE_12__ {TYPE_4__* pGroup; } ;
typedef TYPE_5__ multiplexConn ;
struct TYPE_9__ {TYPE_3__* p; } ;
struct TYPE_8__ {int (* xSync ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_1, int VAR_2){
  multiplexConn *VAR_3 = (multiplexConn*)VAR_1;
  multiplexGroup *VAR_4 = VAR_3->pGroup;
  int VAR_5 = VAR_0;
  int VAR_6;
  for(VAR_6=0; VAR_6<VAR_4->nReal; VAR_6++){
    sqlite3_file *VAR_7 = VAR_4->aReal[VAR_6].p;
    if( VAR_7 ){
      int VAR_8 = VAR_7->pMethods->xSync(VAR_7, VAR_2);
      if( VAR_8!=VAR_0 ) VAR_5 = VAR_8;
    }
  }
  return VAR_5;
}

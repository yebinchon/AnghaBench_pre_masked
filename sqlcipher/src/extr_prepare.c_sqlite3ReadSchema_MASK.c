
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int busy; } ;
struct TYPE_7__ {int mDbFlags; scalar_t__ noSharedCache; TYPE_1__ init; int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_8__ {int rc; int nErr; int zErrMsg; TYPE_2__* db; } ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(Parse *VAR_2){
  int VAR_3 = VAR_1;
  sqlite3 *VAR_4 = VAR_2->db;
  FUNC_0( FUNC_2(VAR_4->mutex) );
  if( !VAR_4->init.busy ){
    VAR_3 = FUNC_1(VAR_4, &VAR_2->zErrMsg);
    if( VAR_3!=VAR_1 ){
      VAR_2->rc = VAR_3;
      VAR_2->nErr++;
    }else if( VAR_4->noSharedCache ){
      VAR_4->mDbFlags |= VAR_0;
    }
  }
  return VAR_3;
}

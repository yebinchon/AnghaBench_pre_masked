
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ zTbl; scalar_t__ zDataTbl; scalar_t__ zIdx; scalar_t__ bCleanup; } ;
struct TYPE_10__ {int rc; int nStep; TYPE_3__ objiter; int zErrmsg; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_11__ {scalar_t__ zTbl; scalar_t__ zIdx; scalar_t__ zDataTbl; int nRow; } ;
typedef TYPE_2__ RbuState ;
typedef TYPE_3__ RbuObjIter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(sqlite3rbu *VAR_2, RbuState *VAR_3){
  FUNC_0( VAR_2->rc==VAR_1 );
  if( VAR_3->zTbl ){
    RbuObjIter *VAR_4 = &VAR_2->objiter;
    int VAR_5 = VAR_1;

    while( VAR_5==VAR_1 && VAR_4->zTbl && (VAR_4->bCleanup
       || FUNC_3(VAR_4->zIdx, VAR_3->zIdx)
       || (VAR_3->zDataTbl==0 && FUNC_3(VAR_4->zTbl, VAR_3->zTbl))
       || (VAR_3->zDataTbl && FUNC_3(VAR_4->zDataTbl, VAR_3->zDataTbl))
    )){
      VAR_5 = FUNC_1(VAR_2, VAR_4);
    }

    if( VAR_5==VAR_1 && !VAR_4->zTbl ){
      VAR_5 = VAR_0;
      VAR_2->zErrmsg = FUNC_4("rbu_state mismatch error");
    }

    if( VAR_5==VAR_1 ){
      VAR_2->nStep = VAR_3->nRow;
      VAR_5 = FUNC_2(VAR_2, &VAR_2->objiter, VAR_2->nStep);
    }

    VAR_2->rc = VAR_5;
  }
}

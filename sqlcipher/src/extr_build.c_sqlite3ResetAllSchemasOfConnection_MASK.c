
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nDb; scalar_t__ nSchemaLock; int mDbFlags; TYPE_2__* aDb; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {scalar_t__ pSchema; } ;
typedef TYPE_2__ Db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(sqlite3 *VAR_3){
  int VAR_4;
  FUNC_1(VAR_3);
  for(VAR_4=0; VAR_4<VAR_3->nDb; VAR_4++){
    Db *VAR_5 = &VAR_3->aDb[VAR_4];
    if( VAR_5->pSchema ){
      if( VAR_3->nSchemaLock==0 ){
        FUNC_4(VAR_5->pSchema);
      }else{
        FUNC_0(VAR_3, VAR_4, VAR_2);
      }
    }
  }
  VAR_3->mDbFlags &= ~(VAR_0|VAR_1);
  FUNC_5(VAR_3);
  FUNC_2(VAR_3);
  if( VAR_3->nSchemaLock==0 ){
    FUNC_3(VAR_3);
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nDb; scalar_t__ nSchemaLock; TYPE_1__* aDb; int mDbFlags; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_7__ {int pSchema; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;

void FUNC_5(sqlite3 *VAR_2, int VAR_3){
  int VAR_4;
  FUNC_2( VAR_3<VAR_2->nDb );

  if( VAR_3>=0 ){
    FUNC_2( FUNC_4(VAR_2, VAR_3, 0) );
    FUNC_1(VAR_2, VAR_3, VAR_1);
    FUNC_1(VAR_2, 1, VAR_1);
    VAR_2->mDbFlags &= ~VAR_0;
  }

  if( VAR_2->nSchemaLock==0 ){
    for(VAR_4=0; VAR_4<VAR_2->nDb; VAR_4++){
      if( FUNC_0(VAR_2, VAR_4, VAR_1) ){
        FUNC_3(VAR_2->aDb[VAR_4].pSchema);
      }
    }
  }
}

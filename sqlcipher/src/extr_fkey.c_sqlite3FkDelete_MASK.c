
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ pnBytesFreed; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_17__ {TYPE_7__* pSchema; TYPE_5__* pFKey; } ;
typedef TYPE_4__ Table ;
struct TYPE_19__ {int fkeyHash; } ;
struct TYPE_18__ {char* zTo; int isDeferred; struct TYPE_18__* pNextFrom; int * apTrigger; TYPE_2__* pPrevTo; TYPE_1__* pNextTo; } ;
struct TYPE_15__ {TYPE_1__* pNextTo; } ;
struct TYPE_14__ {char* zTo; TYPE_2__* pPrevTo; } ;
typedef TYPE_5__ FKey ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_4 (int *,char const*,void*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,TYPE_7__*) ;

void FUNC_6(sqlite3 *VAR_0, Table *VAR_1){
  FKey *VAR_2;
  FKey *VAR_3;

  FUNC_1( VAR_0==0 || FUNC_0(VAR_1)
         || FUNC_5(VAR_0, 0, VAR_1->pSchema) );
  for(VAR_2=VAR_1->pFKey; VAR_2; VAR_2=VAR_3){


    if( !VAR_0 || VAR_0->pnBytesFreed==0 ){
      if( VAR_2->pPrevTo ){
        VAR_2->pPrevTo->pNextTo = VAR_2->pNextTo;
      }else{
        void *VAR_4 = (void *)VAR_2->pNextTo;
        const char *VAR_5 = (VAR_4 ? VAR_2->pNextTo->zTo : VAR_2->zTo);
        FUNC_4(&VAR_1->pSchema->fkeyHash, VAR_5, VAR_4);
      }
      if( VAR_2->pNextTo ){
        VAR_2->pNextTo->pPrevTo = VAR_2->pPrevTo;
      }
    }




    FUNC_1( VAR_2->isDeferred==0 || VAR_2->isDeferred==1 );



    FUNC_2(VAR_0, VAR_2->apTrigger[0]);
    FUNC_2(VAR_0, VAR_2->apTrigger[1]);


    VAR_3 = VAR_2->pNextFrom;
    FUNC_3(VAR_0, VAR_2);
  }
}

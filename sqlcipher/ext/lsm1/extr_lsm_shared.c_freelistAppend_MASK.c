
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int lsm_env ;
struct TYPE_10__ {TYPE_1__* pWorker; TYPE_4__* pFreelist; scalar_t__ bUseFreelist; int * pEnv; } ;
typedef TYPE_2__ lsm_db ;
typedef int i64 ;
struct TYPE_12__ {int nAlloc; int nEntry; TYPE_3__* aEntry; } ;
struct TYPE_11__ {scalar_t__ iBlk; int iId; } ;
struct TYPE_9__ {TYPE_4__ freelist; } ;
typedef TYPE_3__ FreelistEntry ;
typedef TYPE_4__ Freelist ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

int FUNC_3(lsm_db *VAR_2, u32 VAR_3, i64 VAR_4){
  lsm_env *VAR_5 = VAR_2->pEnv;
  Freelist *VAR_6;
  int VAR_7;

  FUNC_0( VAR_4==-1 || VAR_4>=0 );
  VAR_6 = VAR_2->bUseFreelist ? VAR_2->pFreelist : &VAR_2->pWorker->freelist;


  FUNC_0( VAR_6->nAlloc>=VAR_6->nEntry );
  if( VAR_6->nAlloc==VAR_6->nEntry ){
    int VAR_8;
    int VAR_9;
    FreelistEntry *VAR_10;

    VAR_8 = (VAR_6->nAlloc==0 ? 4 : VAR_6->nAlloc*2);
    VAR_9 = sizeof(FreelistEntry) * VAR_8;
    VAR_10 = (FreelistEntry *)FUNC_1(VAR_5, VAR_6->aEntry, VAR_9);
    if( !VAR_10 ) return VAR_0;
    VAR_6->nAlloc = VAR_8;
    VAR_6->aEntry = VAR_10;
  }

  for(VAR_7=0; VAR_7<VAR_6->nEntry; VAR_7++){
    FUNC_0( VAR_7==0 || VAR_6->aEntry[VAR_7].iBlk > VAR_6->aEntry[VAR_7-1].iBlk );
    if( VAR_6->aEntry[VAR_7].iBlk>=VAR_3 ) break;
  }

  if( VAR_7<VAR_6->nEntry && VAR_6->aEntry[VAR_7].iBlk==VAR_3 ){

    VAR_6->aEntry[VAR_7].iId = VAR_4;
  }else{

    int VAR_11 = sizeof(FreelistEntry)*(VAR_6->nEntry-VAR_7);
    FUNC_2(&VAR_6->aEntry[VAR_7+1], &VAR_6->aEntry[VAR_7], VAR_11);
    VAR_6->aEntry[VAR_7].iBlk = VAR_3;
    VAR_6->aEntry[VAR_7].iId = VAR_4;
    VAR_6->nEntry++;
  }

  return VAR_1;
}

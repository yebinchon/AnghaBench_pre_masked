
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int mDbFlags; TYPE_2__* aDb; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_16__ {struct TYPE_16__* pNext; TYPE_3__* pTable; } ;
struct TYPE_14__ {TYPE_5__* pIndex; } ;
struct TYPE_13__ {TYPE_1__* pSchema; } ;
struct TYPE_12__ {int idxHash; } ;
typedef TYPE_5__ Index ;
typedef int Hash ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 TYPE_5__* FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (TYPE_4__*,int,int ) ;

void FUNC_5(sqlite3 *VAR_1, int VAR_2, const char *VAR_3){
  Index *VAR_4;
  Hash *VAR_5;

  FUNC_1( FUNC_4(VAR_1, VAR_2, 0) );
  VAR_5 = &VAR_1->aDb[VAR_2].pSchema->idxHash;
  VAR_4 = FUNC_3(VAR_5, VAR_3, 0);
  if( FUNC_0(VAR_4) ){
    if( VAR_4->pTable->pIndex==VAR_4 ){
      VAR_4->pTable->pIndex = VAR_4->pNext;
    }else{
      Index *VAR_6;


      VAR_6 = VAR_4->pTable->pIndex;
      while( FUNC_0(VAR_6) && VAR_6->pNext!=VAR_4 ){ VAR_6 = VAR_6->pNext; }
      if( FUNC_0(VAR_6 && VAR_6->pNext==VAR_4) ){
        VAR_6->pNext = VAR_4->pNext;
      }
    }
    FUNC_2(VAR_1, VAR_4);
  }
  VAR_1->mDbFlags |= VAR_0;
}

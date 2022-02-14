
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int mDbFlags; TYPE_2__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_17__ {scalar_t__ pSchema; scalar_t__ pTabSchema; struct TYPE_17__* pNext; } ;
typedef TYPE_4__ Trigger ;
struct TYPE_18__ {TYPE_4__* pTrigger; } ;
typedef TYPE_5__ Table ;
struct TYPE_15__ {TYPE_1__* pSchema; } ;
struct TYPE_14__ {int trigHash; } ;
typedef int Hash ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;
 TYPE_5__* FUNC_5 (TYPE_4__*) ;

void FUNC_6(sqlite3 *VAR_1, int VAR_2, const char *VAR_3){
  Trigger *VAR_4;
  Hash *VAR_5;

  FUNC_1( FUNC_4(VAR_1, VAR_2, 0) );
  VAR_5 = &(VAR_1->aDb[VAR_2].pSchema->trigHash);
  VAR_4 = FUNC_3(VAR_5, VAR_3, 0);
  if( FUNC_0(VAR_4) ){
    if( VAR_4->pSchema==VAR_4->pTabSchema ){
      Table *VAR_6 = FUNC_5(VAR_4);
      Trigger **VAR_7;
      for(VAR_7=&VAR_6->pTrigger; *VAR_7!=VAR_4; VAR_7=&((*VAR_7)->pNext));
      *VAR_7 = (*VAR_7)->pNext;
    }
    FUNC_2(VAR_1, VAR_4);
    VAR_1->mDbFlags |= VAR_0;
  }
}

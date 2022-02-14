
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_13__ {TYPE_3__* pIndex; } ;
typedef TYPE_1__ Table ;
struct TYPE_15__ {int nColumn; int nKeyCol; scalar_t__ uniqNotNull; int zName; struct TYPE_15__* pNext; } ;
struct TYPE_14__ {int * pVdbe; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int,int ,int,int*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *,int ,int,int,int ) ;

void FUNC_7(
  Parse *VAR_1,
  Table *VAR_2,
  int VAR_3,
  int VAR_4,
  int *VAR_5,
  int VAR_6
){
  int VAR_7;
  int VAR_8 = -1;
  int VAR_9;
  Index *VAR_10;
  Index *VAR_11 = 0;
  Vdbe *VAR_12;
  Index *VAR_13;

  VAR_12 = VAR_1->pVdbe;
  VAR_13 = FUNC_0(VAR_2) ? 0 : FUNC_4(VAR_2);
  for(VAR_7=0, VAR_10=VAR_2->pIndex; VAR_10; VAR_7++, VAR_10=VAR_10->pNext){
    FUNC_2( VAR_4+VAR_7!=VAR_3 || VAR_13==VAR_10 );
    if( VAR_5!=0 && VAR_5[VAR_7]==0 ) continue;
    if( VAR_10==VAR_13 ) continue;
    if( VAR_4+VAR_7==VAR_6 ) continue;
    FUNC_1((VAR_12, "GenRowIdxDel for %s", VAR_10->zName));
    VAR_8 = FUNC_3(VAR_1, VAR_10, VAR_3, 0, 1,
        &VAR_9, VAR_11, VAR_8);
    FUNC_6(VAR_12, VAR_0, VAR_4+VAR_7, VAR_8,
        VAR_10->uniqNotNull ? VAR_10->nKeyCol : VAR_10->nColumn);
    FUNC_5(VAR_1, VAR_9);
    VAR_11 = VAR_10;
  }
}

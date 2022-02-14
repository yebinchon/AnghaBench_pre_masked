
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int pEnv; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_13__ {int nData; int pData; } ;
struct TYPE_16__ {TYPE_2__ key; int eType; TYPE_1__* aPtr; } ;
struct TYPE_15__ {scalar_t__ iRoot; } ;
struct TYPE_12__ {TYPE_4__* pSeg; } ;
typedef TYPE_4__ Segment ;
typedef TYPE_5__ MultiCursor ;
typedef scalar_t__ LsmPgno ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,scalar_t__*,int) ;
 scalar_t__* FUNC_3 (int ,int,int*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,scalar_t__,int ,int ,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_6(
  lsm_db *VAR_1,
  MultiCursor *VAR_2,
  int VAR_3
){
  int VAR_4 = VAR_0;
  if( FUNC_4(VAR_2->eType)==0 ){
    Segment *VAR_5 = VAR_2->aPtr[VAR_3].pSeg;
    LsmPgno *VAR_6;
    int VAR_7;






    FUNC_0( VAR_5->iRoot>0 );
    VAR_6 = FUNC_3(VAR_1->pEnv, sizeof(LsmPgno)*32, &VAR_4);
    if( VAR_4==VAR_0 ){
      VAR_4 = FUNC_5(VAR_2, VAR_5,
          FUNC_4(VAR_2->eType), VAR_2->key.pData, VAR_2->key.nData, VAR_6, 0
      );
    }

    if( VAR_4==VAR_0 ){
      for(VAR_7=0; VAR_6[VAR_7]; VAR_7++);
      FUNC_2(VAR_1, VAR_5, VAR_6, VAR_7);
    }

    FUNC_1(VAR_1->pEnv, VAR_6);
  }
  return VAR_4;
}

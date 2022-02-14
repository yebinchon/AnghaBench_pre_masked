
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pFS; int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_10__ {int iPg; TYPE_2__* pSeg; int pFS; } ;
struct TYPE_9__ {int iRoot; } ;
typedef TYPE_2__ Segment ;
typedef TYPE_3__ BtreeCursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int,int*) ;

__attribute__((used)) static int FUNC_2(
  lsm_db *VAR_1,
  Segment *VAR_2,
  BtreeCursor **VAR_3
){
  int VAR_4 = VAR_0;
  BtreeCursor *VAR_5;

  FUNC_0( VAR_2->iRoot );
  VAR_5 = FUNC_1(VAR_1->pEnv, sizeof(BtreeCursor), &VAR_4);
  if( VAR_5 ){
    VAR_5->pFS = VAR_1->pFS;
    VAR_5->pSeg = VAR_2;
    VAR_5->iPg = -1;
  }

  *VAR_3 = VAR_5;
  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int btsFlags; scalar_t__ inTransaction; int pPager; } ;
struct TYPE_8__ {scalar_t__ inTrans; TYPE_1__* db; TYPE_3__* pBt; } ;
struct TYPE_7__ {int nSavepoint; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(Btree *VAR_2, int VAR_3){
  int VAR_4;
  BtShared *VAR_5 = VAR_2->pBt;
  FUNC_1(VAR_2);
  FUNC_0( VAR_2->inTrans==VAR_1 );
  FUNC_0( (VAR_5->btsFlags & VAR_0)==0 );
  FUNC_0( VAR_3>0 );
  FUNC_0( VAR_3>VAR_2->db->nSavepoint );
  FUNC_0( VAR_5->inTransaction==VAR_1 );





  VAR_4 = FUNC_3(VAR_5->pPager, VAR_3);
  FUNC_2(VAR_2);
  return VAR_4;
}

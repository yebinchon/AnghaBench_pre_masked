
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pPager; } ;
struct TYPE_8__ {TYPE_1__* db; TYPE_3__* pBt; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(Btree *VAR_0, int VAR_1){
  BtShared *VAR_2 = VAR_0->pBt;
  int VAR_3;
  FUNC_0( FUNC_4(VAR_0->db->mutex) );
  FUNC_1(VAR_0);
  VAR_3 = FUNC_3(VAR_2->pPager, VAR_1);
  FUNC_2(VAR_0);
  return VAR_3;
}

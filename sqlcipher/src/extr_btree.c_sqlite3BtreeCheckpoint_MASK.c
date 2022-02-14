
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ inTransaction; int pPager; } ;
struct TYPE_6__ {int db; TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int,int*,int*) ;

int FUNC_3(Btree *VAR_3, int VAR_4, int *VAR_5, int *VAR_6){
  int VAR_7 = VAR_1;
  if( VAR_3 ){
    BtShared *VAR_8 = VAR_3->pBt;
    FUNC_0(VAR_3);
    if( VAR_8->inTransaction!=VAR_2 ){
      VAR_7 = VAR_0;
    }else{
      VAR_7 = FUNC_2(VAR_8->pPager, VAR_3->db, VAR_4, VAR_5, VAR_6);
    }
    FUNC_1(VAR_3);
  }
  return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_9__ {int pPager; } ;
struct TYPE_8__ {TYPE_1__* db; TYPE_3__* pBt; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(Btree *VAR_1, sqlite3_int64 VAR_2){
  BtShared *VAR_3 = VAR_1->pBt;
  FUNC_0( FUNC_4(VAR_1->db->mutex) );
  FUNC_1(VAR_1);
  FUNC_3(VAR_3->pPager, VAR_2);
  FUNC_2(VAR_1);
  return VAR_0;
}

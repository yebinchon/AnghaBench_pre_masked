
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int locked; TYPE_2__* db; TYPE_1__* pBt; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_5__ {TYPE_2__* db; int mutex; } ;
typedef TYPE_3__ Btree ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Btree *VAR_0){
  FUNC_0( VAR_0->locked==0 );
  FUNC_0( FUNC_3(VAR_0->pBt->mutex) );
  FUNC_0( FUNC_2(VAR_0->db->mutex) );

  FUNC_1(VAR_0->pBt->mutex);
  VAR_0->pBt->db = VAR_0->db;
  VAR_0->locked = 1;
}

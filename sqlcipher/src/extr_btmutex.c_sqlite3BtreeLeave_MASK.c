
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wantToLock; scalar_t__ sharable; TYPE_1__* db; } ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_2__ Btree ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(Btree *VAR_0){
  FUNC_0( FUNC_1(VAR_0->db->mutex) );
  if( VAR_0->sharable ){
    FUNC_0( VAR_0->wantToLock>0 );
    VAR_0->wantToLock--;
    if( VAR_0->wantToLock==0 ){
      FUNC_2(VAR_0);
    }
  }
}

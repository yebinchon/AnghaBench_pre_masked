
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nBackup; TYPE_1__* db; } ;
struct TYPE_6__ {int mutex; } ;
typedef TYPE_2__ Btree ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;

int FUNC_2(Btree *VAR_0){
  FUNC_0( VAR_0 );
  FUNC_0( FUNC_1(VAR_0->db->mutex) );
  return VAR_0->nBackup!=0;
}

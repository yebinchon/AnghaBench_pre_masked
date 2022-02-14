
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ inTrans; TYPE_1__* db; } ;
struct TYPE_4__ {int mutex; } ;
typedef TYPE_2__ Btree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(Btree *VAR_1){
  FUNC_0( VAR_1==0 || FUNC_1(VAR_1->db->mutex) );
  return (VAR_1 && (VAR_1->inTrans==VAR_0));
}

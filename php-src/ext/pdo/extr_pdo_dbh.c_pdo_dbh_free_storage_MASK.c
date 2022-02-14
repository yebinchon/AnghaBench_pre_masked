
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_8__ {TYPE_1__* methods; scalar_t__ is_persistent; scalar_t__ in_txn; } ;
typedef TYPE_2__ pdo_dbh_t ;
struct TYPE_7__ {int (* persistent_shutdown ) (TYPE_2__*) ;int (* rollback ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_0)
{
 pdo_dbh_t *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->in_txn && VAR_1->methods && VAR_1->methods->rollback) {
  VAR_1->methods->rollback(VAR_1);
  VAR_1->in_txn = 0;
 }

 if (VAR_1->is_persistent && VAR_1->methods && VAR_1->methods->persistent_shutdown) {
  VAR_1->methods->persistent_shutdown(VAR_1);
 }
 FUNC_4(VAR_0);
 FUNC_0(VAR_1, 0);
}

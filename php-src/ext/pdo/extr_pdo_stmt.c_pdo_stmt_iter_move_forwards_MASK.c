
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zend_ulong ;
typedef int zend_object_iterator ;
struct TYPE_2__ {int data; } ;
struct php_pdo_iterator {scalar_t__ key; int fetch_ahead; TYPE_1__ iter; } ;
typedef int pdo_stmt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zend_object_iterator *VAR_3)
{
 struct php_pdo_iterator *VAR_4 = (struct php_pdo_iterator*)VAR_3;
 pdo_stmt_t *VAR_5 = FUNC_3(&VAR_4->iter.data);

 if (!FUNC_2(VAR_4->fetch_ahead)) {
  FUNC_5(&VAR_4->fetch_ahead);
 }

 if (!FUNC_4(VAR_5, VAR_2, &VAR_4->fetch_ahead, VAR_1,
   VAR_0, 0, 0)) {

  FUNC_0();
  VAR_4->key = (zend_ulong)-1;
  FUNC_1(&VAR_4->fetch_ahead);

  return;
 }

 VAR_4->key++;
}

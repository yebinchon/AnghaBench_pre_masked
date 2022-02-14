
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
struct TYPE_4__ {int data; int * funcs; } ;
typedef TYPE_1__ zend_object_iterator ;
typedef int zend_class_entry ;
struct php_pdo_iterator {TYPE_1__ iter; int fetch_ahead; scalar_t__ key; } ;
typedef int pdo_stmt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int *,int ,int ,int ,int ) ;
 struct php_pdo_iterator* FUNC_7 (int,int) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,char*) ;

zend_object_iterator *FUNC_10(zend_class_entry *VAR_3, zval *VAR_4, int VAR_5)
{
 pdo_stmt_t *VAR_6 = FUNC_5(VAR_4);
 struct php_pdo_iterator *VAR_7;

 if (VAR_5) {
  FUNC_9(((void*)0), "An iterator cannot be used with foreach by reference");
  return ((void*)0);
 }

 VAR_7 = FUNC_7(1, sizeof(struct php_pdo_iterator));
 FUNC_8(&VAR_7->iter);
 VAR_7->iter.funcs = &VAR_2;
 FUNC_3(VAR_4);
 FUNC_1(&VAR_7->iter.data, FUNC_4(VAR_4));

 if (!FUNC_6(VAR_6, 1, &VAR_7->fetch_ahead, VAR_1,
   VAR_0, 0, 0)) {
  FUNC_0();
  VAR_7->key = (zend_ulong)-1;
  FUNC_2(&VAR_7->fetch_ahead);
 }

 return &VAR_7->iter;
}

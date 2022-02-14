
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_2__ {int data; } ;
struct php_pdo_iterator {int fetch_ahead; TYPE_1__ iter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(zend_object_iterator *VAR_0)
{
 struct php_pdo_iterator *VAR_1 = (struct php_pdo_iterator*)VAR_0;

 FUNC_1(&VAR_1->iter.data);

 if (!FUNC_0(VAR_1->fetch_ahead)) {
  FUNC_1(&VAR_1->fetch_ahead);
 }
}

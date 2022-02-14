
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {int current; TYPE_1__ intern; } ;
typedef TYPE_2__ spl_filesystem_iterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_0)
{
 spl_filesystem_iterator *VAR_1 = (spl_filesystem_iterator *)VAR_0;

 if (!FUNC_1(VAR_1->intern.data)) {
  zval *VAR_2 = &VAR_1->intern.data;
  FUNC_2(VAR_2);
 } else {
  if (!FUNC_1(VAR_1->current)) {
   FUNC_2(&VAR_1->current);
   FUNC_0(&VAR_1->current);
  }
 }
}

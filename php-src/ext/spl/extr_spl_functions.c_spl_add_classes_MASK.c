
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {struct TYPE_5__* parent; } ;
typedef TYPE_1__ zend_class_entry ;


 int FUNC_0 (int *,TYPE_1__*,int,int) ;
 int FUNC_1 (int *,TYPE_1__*,int,int) ;

int FUNC_2(zend_class_entry *VAR_0, zval *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (!VAR_0) {
  return 0;
 }
 FUNC_0(VAR_1, VAR_0, VAR_3, VAR_4);
 if (VAR_2) {
  FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4);
  while (VAR_0->parent) {
   VAR_0 = VAR_0->parent;
   FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  }
 }
 return 0;
}

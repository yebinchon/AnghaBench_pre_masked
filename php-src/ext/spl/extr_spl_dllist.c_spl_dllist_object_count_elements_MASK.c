
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
typedef int zend_long ;
struct TYPE_4__ {int ce; } ;
struct TYPE_5__ {int llist; scalar_t__ fptr_count; TYPE_1__ std; } ;
typedef TYPE_2__ spl_dllist_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,scalar_t__*,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(zend_object *VAR_2, zend_long *VAR_3)
{
 spl_dllist_object *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->fptr_count) {
  zval VAR_5;
  FUNC_3(VAR_2, VAR_4->std.ce, &VAR_4->fptr_count, "count", &VAR_5);
  if (!FUNC_0(VAR_5)) {
   *VAR_3 = FUNC_4(&VAR_5);
   FUNC_5(&VAR_5);
   return VAR_1;
  }
  *VAR_3 = 0;
  return VAR_0;
 }

 *VAR_3 = FUNC_2(VAR_4->llist);
 return VAR_1;
}

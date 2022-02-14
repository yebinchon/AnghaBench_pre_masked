
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {int ce; } ;
struct TYPE_5__ {int fptr_cmp; TYPE_1__ std; } ;
typedef TYPE_2__ spl_heap_object ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *,char*,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(zval *VAR_3, spl_heap_object *VAR_4, zval *VAR_5, zval *VAR_6, zend_long *VAR_7) {
 zval VAR_8;

 FUNC_2(FUNC_1(VAR_3), VAR_4->std.ce, &VAR_4->fptr_cmp, "compare", &VAR_8, VAR_5, VAR_6);

 if (FUNC_0(VAR_2)) {
  return VAR_0;
 }

 *VAR_7 = FUNC_3(&VAR_8);
 FUNC_4(&VAR_8);

 return VAR_1;
}

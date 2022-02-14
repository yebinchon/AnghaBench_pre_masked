
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
typedef int zend_long ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {int ce; } ;
struct TYPE_7__ {TYPE_1__ array; scalar_t__ fptr_count; TYPE_2__ std; } ;
typedef TYPE_3__ spl_fixedarray_object ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__*,char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(zend_object *VAR_1, zend_long *VAR_2)
{
 spl_fixedarray_object *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3->fptr_count) {
  zval VAR_4;
  FUNC_2(VAR_1, VAR_3->std.ce, &VAR_3->fptr_count, "count", &VAR_4);
  if (!FUNC_0(VAR_4)) {
   *VAR_2 = FUNC_3(&VAR_4);
   FUNC_4(&VAR_4);
  } else {
   *VAR_2 = 0;
  }
 } else {
  *VAR_2 = VAR_3->array.size;
 }
 return VAR_0;
}

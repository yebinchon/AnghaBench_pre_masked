
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_5__ {int ce; } ;
struct TYPE_6__ {scalar_t__ fptr_offset_set; TYPE_1__ std; } ;
typedef TYPE_2__ spl_fixedarray_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int *,int ,scalar_t__*,char*,int *,int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zend_object *VAR_0, zval *VAR_1, zval *VAR_2)
{
 spl_fixedarray_object *VAR_3;
 zval VAR_4;

 VAR_3 = FUNC_2(VAR_0);

 if (VAR_3->fptr_offset_set) {
  if (!VAR_1) {
   FUNC_1(&VAR_4);
   VAR_1 = &VAR_4;
  } else {
   FUNC_0(VAR_1);
  }
  FUNC_0(VAR_2);
  FUNC_4(VAR_0, VAR_3->std.ce, &VAR_3->fptr_offset_set, "offsetSet", ((void*)0), VAR_1, VAR_2);
  FUNC_5(VAR_2);
  FUNC_5(VAR_1);
  return;
 }

 FUNC_3(VAR_3, VAR_1, VAR_2);
}

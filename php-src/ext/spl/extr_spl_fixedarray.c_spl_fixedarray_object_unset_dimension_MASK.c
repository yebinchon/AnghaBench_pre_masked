
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_5__ {int ce; } ;
struct TYPE_6__ {scalar_t__ fptr_offset_del; TYPE_1__ std; } ;
typedef TYPE_2__ spl_fixedarray_object ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,int ,scalar_t__*,char*,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_0, zval *VAR_1)
{
 spl_fixedarray_object *VAR_2;

 VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->fptr_offset_del) {
  FUNC_0(VAR_1);
  FUNC_3(VAR_0, VAR_2->std.ce, &VAR_2->fptr_offset_del, "offsetUnset", ((void*)0), VAR_1);
  FUNC_4(VAR_1);
  return;
 }

 FUNC_2(VAR_2, VAR_1);

}

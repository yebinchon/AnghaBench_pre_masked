
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
typedef int zend_long ;
struct TYPE_5__ {int ce; } ;
struct TYPE_6__ {scalar_t__ fptr_count; TYPE_1__ std; } ;
typedef TYPE_2__ spl_array_object ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,scalar_t__*,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(zend_object *VAR_3, zend_long *VAR_4)
{
 spl_array_object *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->fptr_count) {
  zval VAR_6;
  FUNC_3(VAR_3, VAR_5->std.ce, &VAR_5->fptr_count, "count", &VAR_6);
  if (FUNC_0(VAR_6) != VAR_1) {
   *VAR_4 = FUNC_4(&VAR_6);
   FUNC_5(&VAR_6);
   return VAR_2;
  }
  *VAR_4 = 0;
  return VAR_0;
 }
 *VAR_4 = FUNC_2(VAR_5);
 return VAR_2;
}

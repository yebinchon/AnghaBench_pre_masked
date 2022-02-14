
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {scalar_t__ ce; } ;
typedef TYPE_1__ zend_object ;
typedef int compare_func_t ;
struct TYPE_4__ {int storage; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(zval *VAR_2, zval *VAR_3)
{
 zend_object *VAR_4;
 zend_object *VAR_5;

 FUNC_0(VAR_2, VAR_3);

 VAR_4 = (zend_object *)FUNC_1(VAR_2);
 VAR_5 = (zend_object *)FUNC_1(VAR_3);

 if (VAR_4->ce != VAR_0 || VAR_5->ce != VAR_0) {
  return 1;
 }

 return FUNC_3(&(FUNC_2(VAR_2))->storage, &(FUNC_2(VAR_3))->storage, (compare_func_t)VAR_1, 0);
}

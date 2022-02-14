
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef int zend_function ;
struct TYPE_2__ {int function_table; } ;


 TYPE_1__* VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static zend_function *FUNC_3(
 zend_object **VAR_1,
 zend_string *VAR_2, const zval *VAR_3)
{
 zend_function *VAR_4;
 zend_string *VAR_5;

 VAR_5 = FUNC_2(VAR_2);

 if ((VAR_4 = FUNC_0(&VAR_0->function_table, VAR_5)) == ((void*)0)) {
  FUNC_1(VAR_5, 0);
  return ((void*)0);
 }

 FUNC_1(VAR_5, 0);

 return VAR_4;
}

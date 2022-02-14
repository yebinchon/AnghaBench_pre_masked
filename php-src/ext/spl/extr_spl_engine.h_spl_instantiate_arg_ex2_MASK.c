
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {int function_name; } ;
struct TYPE_9__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
struct TYPE_10__ {TYPE_2__* constructor; } ;
typedef TYPE_3__ zend_class_entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,TYPE_3__*,TYPE_2__**,int ,int ,int *,int,int *,int *) ;

__attribute__((used)) static inline int FUNC_5(zend_class_entry *VAR_0, zval *VAR_1, zval *VAR_2, zval *VAR_3)
{
 zend_function *VAR_4 = VAR_0->constructor;
 FUNC_3(VAR_0, VAR_1);

 FUNC_4(FUNC_2(VAR_1), VAR_0, &VAR_4, FUNC_1(VAR_4->common.function_name), FUNC_0(VAR_4->common.function_name), ((void*)0), 2, VAR_2, VAR_3);
 return 0;
}

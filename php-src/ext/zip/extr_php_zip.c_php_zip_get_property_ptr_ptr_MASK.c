
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zip_prop_handler ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_3__ {int * prop_handler; } ;
typedef TYPE_1__ ze_zip_object ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int,void**) ;

__attribute__((used)) static zval *FUNC_3(zend_object *VAR_0, zend_string *VAR_1, int VAR_2, void **VAR_3)
{
 ze_zip_object *VAR_4;
 zval *VAR_5 = ((void*)0);
 zip_prop_handler *VAR_6 = ((void*)0);

 VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->prop_handler != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_4->prop_handler, VAR_1);
 }

 if (VAR_6 == ((void*)0)) {
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 }

 return VAR_5;
}

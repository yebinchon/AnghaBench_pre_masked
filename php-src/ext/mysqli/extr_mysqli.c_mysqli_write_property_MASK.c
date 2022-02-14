
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_6__ {int (* write_func ) (TYPE_2__*,int *) ;} ;
typedef TYPE_1__ mysqli_prop_handler ;
struct TYPE_7__ {int * prop_handler; } ;
typedef TYPE_2__ mysqli_object ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int *,void**) ;

zval *FUNC_4(zend_object *VAR_0, zend_string *VAR_1, zval *VAR_2, void **VAR_3)
{
 mysqli_object *VAR_4;
 mysqli_prop_handler *VAR_5 = ((void*)0);

 VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->prop_handler != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_4->prop_handler, VAR_1);
 }

 if (VAR_5) {
  VAR_5->write_func(VAR_4, VAR_2);
 } else {
  VAR_2 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 }

 return VAR_2;
}

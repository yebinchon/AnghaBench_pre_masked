
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zip_prop_handler ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_4__ {int * prop_handler; } ;
typedef TYPE_1__ ze_zip_object ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,void**) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(zend_object *VAR_1, zend_string *VAR_2, int VAR_3, void **VAR_4)
{
 ze_zip_object *VAR_5;
 zip_prop_handler *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_1);

 if (VAR_5->prop_handler != ((void*)0)) {
  VAR_6 = FUNC_3(VAR_5->prop_handler, VAR_2);
 }

 if (VAR_6 != ((void*)0)) {
  zval VAR_8, *VAR_9;

  if (VAR_3 == 2) {
   VAR_7 = 1;
  } else if ((VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_8)) != ((void*)0)) {
   if (VAR_3 == 1) {
    VAR_7 = FUNC_4(&VAR_8);
   } else if (VAR_3 == 0) {
    VAR_7 = (FUNC_0(VAR_8) != VAR_0);
   }
  }

  FUNC_6(&VAR_8);
 } else {
  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
 }

 return VAR_7;
}

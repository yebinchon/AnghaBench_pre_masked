
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef int xmlreader_prop_handler ;
struct TYPE_3__ {int * prop_handler; } ;
typedef TYPE_1__ xmlreader_object ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int *,void**) ;

zval *FUNC_4(zend_object *VAR_1, zend_string *VAR_2, zval *VAR_3, void **VAR_4)
{
 xmlreader_object *VAR_5;
 xmlreader_prop_handler *VAR_6 = ((void*)0);

 VAR_5 = FUNC_1(VAR_1);

 if (VAR_5->prop_handler != ((void*)0)) {
  VAR_6 = FUNC_2(VAR_5->prop_handler, VAR_2);
 }
 if (VAR_6 != ((void*)0)) {
  FUNC_0(((void*)0), VAR_0, "Cannot write to read-only property");
 } else {
  VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 }

 return VAR_3;
}

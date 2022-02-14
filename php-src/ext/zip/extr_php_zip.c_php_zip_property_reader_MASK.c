
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {char* (* read_const_char_func ) (int *,int*) ;int (* read_int_func ) (int *) ;char* (* read_const_char_from_obj_func ) (TYPE_2__*) ;int type; } ;
typedef TYPE_1__ zip_prop_handler ;
typedef int zend_long ;
struct TYPE_7__ {int * za; } ;
typedef TYPE_2__ ze_zip_object ;


 int VAR_0 ;



 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (int *,int*) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static zval *FUNC_10(ze_zip_object *VAR_1, zip_prop_handler *VAR_2, zval *VAR_3)
{
 const char *VAR_4 = ((void*)0);
 zend_long VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_1 && VAR_1->za != ((void*)0)) {
  if (VAR_2->read_const_char_func) {
   VAR_4 = VAR_2->read_const_char_func(VAR_1->za, &VAR_6);
  } else {
   if (VAR_2->read_int_func) {
    VAR_5 = VAR_2->read_int_func(VAR_1->za);
    if (VAR_5 == -1) {
     FUNC_5(((void*)0), VAR_0, "Internal zip error returned");
     return ((void*)0);
    }
   } else {
    if (VAR_2->read_const_char_from_obj_func) {
     VAR_4 = VAR_2->read_const_char_from_obj_func(VAR_1);
     VAR_6 = FUNC_6(VAR_4);
    }
   }
  }
 }

 switch (VAR_2->type) {
  case 128:
   if (VAR_4) {
    FUNC_4(VAR_3, (char *) VAR_4, VAR_6);
   } else {
    FUNC_1(VAR_3);
   }
   break;

  case 130:
   FUNC_0(VAR_3, VAR_5);
   break;
  case 129:
   FUNC_2(VAR_3, VAR_5);
   break;
  default:
   FUNC_3(VAR_3);
 }

 return VAR_3;
}

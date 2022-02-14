
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_prop_purpose ;
typedef int zend_object ;
typedef int zend_bool ;
struct TYPE_4__ {int ar_flags; } ;
typedef TYPE_1__ spl_array_object ;
typedef int HashTable ;


 int FUNC_0 (int *) ;
 int VAR_0 ;



 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;

__attribute__((used)) static HashTable *FUNC_5(zend_object *VAR_1, zend_prop_purpose VAR_2)
{
 spl_array_object *VAR_3 = FUNC_1(VAR_1);
 HashTable *VAR_4;
 zend_bool VAR_5;

 if (VAR_3->ar_flags & VAR_0) {
  return FUNC_4(VAR_1, VAR_2);
 }






 switch (VAR_2) {
  case 130:
   VAR_5 = 1;
   break;
  case 128:
  case 129:
   VAR_5 = 0;
   break;
  default:
   return FUNC_4(VAR_1, VAR_2);
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_5) {
  VAR_4 = FUNC_3(VAR_4);
 } else {
  FUNC_0(VAR_4);
 }
 return VAR_4;
}

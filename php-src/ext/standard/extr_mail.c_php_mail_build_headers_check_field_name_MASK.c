
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int* val; } ;
typedef TYPE_1__ zend_string ;
typedef int zend_bool ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static zend_bool FUNC_0(zend_string *VAR_2)
{
 size_t VAR_3 = 0;


 while (VAR_3 < VAR_2->len) {
  if (*(VAR_2->val+VAR_3) < 33 || *(VAR_2->val+VAR_3) > 126 || *(VAR_2->val+VAR_3) == ':') {
   return VAR_0;
  }
  VAR_3++;
 }
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {size_t len; char* val; } ;
typedef TYPE_1__ zend_string ;
typedef int zend_bool ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static zend_bool FUNC_1(zval *VAR_2)
{
 size_t VAR_3 = 0;
 zend_string *VAR_4 = FUNC_0(VAR_2);



 while (VAR_3 < VAR_4->len) {
  if (*(VAR_4->val+VAR_3) == '\r') {
   if (VAR_4->len - VAR_3 >= 3
    && *(VAR_4->val+VAR_3+1) == '\n'
    && (*(VAR_4->val+VAR_3+2) == ' ' || *(VAR_4->val+VAR_3+2) == '\t')) {
    VAR_3 += 3;
    continue;
   }
   return VAR_0;
  }
  if (*(VAR_4->val+VAR_3) == '\0') {
   return VAR_0;
  }
  VAR_3++;
 }
 return VAR_1;
}

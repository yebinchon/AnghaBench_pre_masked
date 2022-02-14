
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {int (* valid ) (int const*) ;} ;
typedef TYPE_1__ php_password_algo ;


 int * FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;

const php_password_algo* FUNC_4(const zend_string* VAR_0, const php_password_algo *VAR_1) {
 const php_password_algo *VAR_2;
 zend_string *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3) {
  return VAR_1;
 }

 VAR_2 = FUNC_1(VAR_3);
 FUNC_3(VAR_3);
 return (!VAR_2 || (VAR_2->valid && !VAR_2->valid(VAR_0))) ? VAR_1 : VAR_2;
}

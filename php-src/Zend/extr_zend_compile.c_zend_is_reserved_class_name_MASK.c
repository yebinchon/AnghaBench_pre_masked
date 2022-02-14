
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int zend_bool ;
struct reserved_class_name {size_t len; scalar_t__ name; } ;


 size_t FUNC_0 (int const*) ;
 char* FUNC_1 (int const*) ;
 struct reserved_class_name* VAR_0 ;
 scalar_t__ FUNC_2 (char const*,size_t,scalar_t__,size_t) ;
 int FUNC_3 (int const*,char const**,size_t*) ;

__attribute__((used)) static zend_bool FUNC_4(const zend_string *VAR_1)
{
 const struct reserved_class_name *VAR_2 = VAR_0;

 const char *VAR_3 = FUNC_1(VAR_1);
 size_t VAR_4 = FUNC_0(VAR_1);
 FUNC_3(VAR_1, &VAR_3, &VAR_4);

 for (; VAR_2->name; ++VAR_2) {
  if (VAR_4 == VAR_2->len
   && FUNC_2(VAR_3, VAR_4, VAR_2->name, VAR_2->len) == 0
  ) {
   return 1;
  }
 }

 return 0;
}

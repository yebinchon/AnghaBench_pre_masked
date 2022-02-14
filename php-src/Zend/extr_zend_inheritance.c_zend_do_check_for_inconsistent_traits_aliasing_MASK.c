
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ method_name; } ;
struct TYPE_7__ {TYPE_1__ trait_method; scalar_t__ alias; } ;
typedef TYPE_2__ zend_trait_alias ;
typedef int zend_string ;
struct TYPE_8__ {int function_table; TYPE_2__** trait_aliases; } ;
typedef TYPE_3__ zend_class_entry ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(zend_class_entry *VAR_1, zend_class_entry **VAR_2)
{
 int VAR_3 = 0;
 zend_trait_alias* VAR_4;
 zend_string* VAR_5;

 if (VAR_1->trait_aliases) {
  while (VAR_1->trait_aliases[VAR_3]) {
   VAR_4 = VAR_1->trait_aliases[VAR_3];


   if (!VAR_2[VAR_3]) {
    if (VAR_4->alias) {

     FUNC_1(VAR_0,
          "An alias (%s) was defined for method %s(), but this method does not exist",
          FUNC_0(VAR_4->alias),
          FUNC_0(VAR_4->trait_method.method_name));
    } else {
     VAR_5 = FUNC_4(
      VAR_4->trait_method.method_name);
     if (FUNC_2(&VAR_1->function_table,
           VAR_5)) {
      FUNC_3(VAR_5, 0);
      FUNC_1(VAR_0,
           "The modifiers for the trait alias %s() need to be changed in the same statement in which the alias is defined. Error",
           FUNC_0(VAR_4->trait_method.method_name));
     } else {
      FUNC_3(VAR_5, 0);
      FUNC_1(VAR_0,
           "The modifiers of the trait method %s() are changed, but this method does not exist. Error",
           FUNC_0(VAR_4->trait_method.method_name));

     }
    }
   }
   VAR_3++;
  }
 }
}

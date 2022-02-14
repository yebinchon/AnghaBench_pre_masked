
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ce_flags; size_t num_traits; int name; } ;
typedef TYPE_1__ zend_class_entry ;
typedef size_t uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,...) ;

__attribute__((used)) static uint32_t FUNC_3(zend_class_entry *VAR_2, zend_class_entry *VAR_3, zend_class_entry **VAR_4)
{
 uint32_t VAR_5;

 if (FUNC_0((VAR_3->ce_flags & VAR_1) != VAR_1)) {
  FUNC_2(VAR_0, "Class %s is not a trait, Only traits may be used in 'as' and 'insteadof' statements", FUNC_1(VAR_3->name));
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->num_traits; VAR_5++) {
  if (VAR_4[VAR_5] == VAR_3) {
   return VAR_5;
  }
 }
 FUNC_2(VAR_0, "Required Trait %s wasn't added to %s", FUNC_1(VAR_3->name), FUNC_1(VAR_2->name));
 return 0;
}

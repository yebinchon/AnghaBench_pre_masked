
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {int class_table; } ;
typedef TYPE_1__ zend_script ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ zend_class_entry ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int *) ;

__attribute__((used)) static inline zend_class_entry *FUNC_2(const zend_script *VAR_2, zend_string *VAR_3) {
 zend_class_entry *VAR_4 = VAR_2 ? FUNC_1(&VAR_2->class_table, VAR_3) : ((void*)0);
 if (VAR_4) {
  return VAR_4;
 }

 VAR_4 = FUNC_1(FUNC_0(VAR_1), VAR_3);
 if (VAR_4 && VAR_4->type == VAR_0) {
  return VAR_4;
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_12__ {int type; int constants_table; int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_13__ {int value; } ;
typedef TYPE_2__ zend_class_constant ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(zend_string *VAR_3, zend_class_constant *VAR_4, zend_class_entry *VAR_5, zend_class_entry *VAR_6)
{
 if (FUNC_1(&VAR_5->constants_table, VAR_4, VAR_3, VAR_6)) {
  zend_class_constant *VAR_7;
  if (FUNC_0(VAR_4->value) == VAR_0) {
   VAR_5->ce_flags &= ~VAR_1;
  }
  if (VAR_5->type & VAR_2) {
   VAR_7 = FUNC_3(sizeof(zend_class_constant), 1);
   FUNC_2(VAR_7, VAR_4, sizeof(zend_class_constant));
   VAR_4 = VAR_7;
  }
  FUNC_4(&VAR_5->constants_table, VAR_3, VAR_4);
 }
}

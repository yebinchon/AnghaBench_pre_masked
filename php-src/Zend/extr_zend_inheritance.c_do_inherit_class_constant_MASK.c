
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_11__ {int type; int constants_table; int ce_flags; TYPE_1__* parent; int * name; } ;
typedef TYPE_2__ zend_class_entry ;
struct TYPE_12__ {int value; } ;
typedef TYPE_3__ zend_class_constant ;
struct TYPE_10__ {int * name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*,int ,int ,int ,int ,char*) ;
 int * FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(zend_string *VAR_7, zend_class_constant *VAR_8, zend_class_entry *VAR_9)
{
 zval *VAR_10 = FUNC_9(&VAR_9->constants_table, VAR_7, 1);
 zend_class_constant *VAR_11;

 if (VAR_10 != ((void*)0)) {
  VAR_11 = (zend_class_constant*)FUNC_3(VAR_10);
  if (FUNC_0((FUNC_2(VAR_11->value) & VAR_3) > (FUNC_2(VAR_8->value) & VAR_3))) {
   FUNC_8(VAR_0, "Access level to %s::%s must be %s (as in class %s)%s",
    FUNC_1(VAR_9->name), FUNC_1(VAR_7), FUNC_10(FUNC_2(VAR_8->value)), FUNC_1(VAR_9->parent->name), (FUNC_2(VAR_8->value) & VAR_5) ? "" : " or weaker");
  }
 } else if (!(FUNC_2(VAR_8->value) & VAR_4)) {
  if (FUNC_4(VAR_8->value) == VAR_1) {
   VAR_9->ce_flags &= ~VAR_2;
  }
  if (VAR_9->type & VAR_6) {
   VAR_11 = FUNC_7(sizeof(zend_class_constant), 1);
   FUNC_6(VAR_11, VAR_8, sizeof(zend_class_constant));
   VAR_8 = VAR_11;
  }
  FUNC_5(&VAR_9->constants_table, VAR_7, VAR_8);
 }
}

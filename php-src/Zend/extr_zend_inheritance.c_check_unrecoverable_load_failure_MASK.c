
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_3__ {int ce_flags; int * name; } ;
typedef TYPE_1__ zend_class_entry ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(zend_class_entry *VAR_3) {




 if (VAR_3->ce_flags & VAR_1) {
  zend_string *VAR_4;
  zval VAR_5;
  FUNC_1(FUNC_0(VAR_2) && "Exception must have been thrown");
  FUNC_3(&VAR_5, FUNC_0(VAR_2));
  FUNC_4(VAR_5);
  FUNC_5();
  VAR_4 = FUNC_7(&VAR_5);
  FUNC_6(VAR_0,
   "During inheritance of %s with variance dependencies: Uncaught %s", FUNC_2(VAR_3->name), FUNC_2(VAR_4));
 }
}

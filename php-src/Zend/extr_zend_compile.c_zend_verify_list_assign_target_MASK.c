
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zend_bool ;
struct TYPE_4__ {scalar_t__ kind; scalar_t__ attr; } ;
typedef TYPE_1__ zend_ast ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(zend_ast *VAR_3, zend_bool VAR_4) {
 if (VAR_3->kind == VAR_2) {
  if (VAR_3->attr == VAR_1) {
   FUNC_1(VAR_0, "Cannot assign to array(), use [] instead");
  }
  if (VAR_4 != VAR_3->attr) {
   FUNC_1(VAR_0, "Cannot mix [] and list()");
  }
 } else if (!FUNC_0(VAR_3)) {
  FUNC_1(VAR_0, "Assignments can only happen to writable values");
 }
}

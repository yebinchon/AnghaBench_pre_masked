
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_uchar ;
typedef int zend_bool ;
struct TYPE_3__ {int children; } ;
typedef TYPE_1__ zend_ast_list ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static zend_bool FUNC_2(zend_ast_list *VAR_4, zend_uchar VAR_5) {
 if (FUNC_0(VAR_3) & VAR_2) {
  return 0;
 }



 if (VAR_5 == VAR_0) {
  return VAR_4->children >= 5;
 } else {
  FUNC_1(VAR_5 == VAR_1);
  return VAR_4->children >= 2;
 }
}

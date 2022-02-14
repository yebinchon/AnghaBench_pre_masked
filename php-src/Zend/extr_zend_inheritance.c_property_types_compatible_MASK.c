
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int ce; } ;
typedef TYPE_1__ zend_property_info ;
typedef scalar_t__ inheritance_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;

inheritance_status FUNC_5(
  const zend_property_info *VAR_3, const zend_property_info *VAR_4) {
 if (FUNC_3(VAR_3->type) == FUNC_3(VAR_4->type)
   && FUNC_2(VAR_3->type) == FUNC_2(VAR_4->type)) {
  return VAR_1;
 }

 if (FUNC_1(VAR_3->type) != FUNC_1(VAR_4->type)) {
  return VAR_0;
 }


 inheritance_status VAR_5 = FUNC_4(
  VAR_4->ce, VAR_4->type, VAR_3->ce, VAR_3->type);
 inheritance_status VAR_6 = FUNC_4(
  VAR_3->ce, VAR_3->type, VAR_4->ce, VAR_4->type);
 if (VAR_5 == VAR_1 && VAR_6 == VAR_1) {
  return VAR_1;
 }
 if (VAR_5 == VAR_0 || VAR_6 == VAR_0) {
  return VAR_0;
 }
 FUNC_0(VAR_5 == VAR_2 && VAR_6 == VAR_2);
 return VAR_2;
}

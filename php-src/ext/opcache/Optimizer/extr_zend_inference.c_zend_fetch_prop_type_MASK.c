
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_script ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ zend_property_info ;
typedef int zend_class_entry ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int const*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static uint32_t FUNC_11(const zend_script *VAR_10, zend_property_info *VAR_11, zend_class_entry **VAR_12)
{
 if (VAR_12) {
  *VAR_12 = ((void*)0);
 }
 if (VAR_11 && FUNC_4(VAR_11->type)) {
  uint32_t VAR_13 = FUNC_8(FUNC_6(VAR_11->type));

  if (VAR_13 & (VAR_9|VAR_1|VAR_5|VAR_8)) {
   VAR_13 |= VAR_6 | VAR_7;
  }
  if (FUNC_2(VAR_11->type)) {
   VAR_13 |= VAR_5;
   if (VAR_12) {
    if (FUNC_1(VAR_11->type)) {
     *VAR_12 = FUNC_0(VAR_11->type);
    } else if (FUNC_3(VAR_11->type)) {
     zend_string *VAR_14 = FUNC_10(FUNC_5(VAR_11->type));
     *VAR_12 = FUNC_7(VAR_10, VAR_14);
     FUNC_9(VAR_14);
    }
   }
  }
  return VAR_13;
 }
 return VAR_0 | VAR_2 | VAR_3 | VAR_4 | VAR_6 | VAR_7;
}

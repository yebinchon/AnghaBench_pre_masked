
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_script ;
typedef int zend_class_entry ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ zend_arg_info ;
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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int const*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ) ;

uint32_t FUNC_9(const zend_script *VAR_10, zend_arg_info *VAR_11, zend_class_entry **VAR_12)
{
 uint32_t VAR_13;
 if (!FUNC_2(VAR_11->type)) {
  return VAR_0|VAR_2|VAR_3|VAR_4|VAR_6|VAR_7;
 }

 VAR_13 = FUNC_6(FUNC_4(VAR_11->type));
 *VAR_12 = ((void*)0);
 if (FUNC_0(VAR_11->type)) {
  VAR_13 |= VAR_5;

  if (FUNC_1(VAR_11->type)) {
   zend_string *VAR_14 = FUNC_8(FUNC_3(VAR_11->type));
   *VAR_12 = FUNC_5(VAR_10, VAR_14);
   FUNC_7(VAR_14, 0);
  }
 }
 if (VAR_13 & (VAR_9|VAR_1|VAR_5|VAR_8)) {
  VAR_13 |= VAR_6 | VAR_7;
 }
 return VAR_13;
}

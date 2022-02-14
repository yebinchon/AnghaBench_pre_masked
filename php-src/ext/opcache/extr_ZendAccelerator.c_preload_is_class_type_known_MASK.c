
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int zend_bool ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static zend_bool FUNC_6(zend_class_entry *VAR_1, zend_string *VAR_2) {
 if (FUNC_3(VAR_2, "self") ||
  FUNC_3(VAR_2, "parent") ||
  FUNC_2(VAR_2, VAR_1->name)) {
  return 1;
 }

 zend_string *VAR_3 = FUNC_5(VAR_2);
 zend_bool VAR_4 = FUNC_1(FUNC_0(VAR_0), VAR_3);
 FUNC_4(VAR_3);
 return VAR_4;
}

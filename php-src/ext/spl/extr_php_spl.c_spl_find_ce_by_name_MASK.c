
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int zend_class_entry ;
typedef scalar_t__ zend_bool ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,char*,int ,char*) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static zend_class_entry * FUNC_7(zend_string *VAR_2, zend_bool VAR_3)
{
 zend_class_entry *VAR_4;

 if (!VAR_3) {
  zend_string *VAR_5 = FUNC_6(VAR_2);

  VAR_4 = FUNC_3(FUNC_0(VAR_1), VAR_5);
  FUNC_5(VAR_5);
 } else {
   VAR_4 = FUNC_4(VAR_2);
  }
  if (VAR_4 == ((void*)0)) {
  FUNC_2(((void*)0), VAR_0, "Class %s does not exist%s", FUNC_1(VAR_2), VAR_3 ? " and could not be loaded" : "");
  return ((void*)0);
 }

 return VAR_4;
}

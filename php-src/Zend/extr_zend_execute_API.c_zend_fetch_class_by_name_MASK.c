
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int zend_class_entry ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ) ;
 int * FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int,int *,char*,int ) ;
 int * FUNC_8 (int *) ;

zend_class_entry *FUNC_9(zend_string *VAR_8, zend_string *VAR_9, int VAR_10)
{
 zend_class_entry *VAR_11;

 if (VAR_10 & VAR_4) {
  return FUNC_6(VAR_8, VAR_9, VAR_10);
 } else if ((VAR_11 = FUNC_6(VAR_8, VAR_9, VAR_10)) == ((void*)0)) {
  if (VAR_10 & VAR_5) {
   return ((void*)0);
  }
  if (FUNC_0(VAR_7)) {
   if (!(VAR_10 & VAR_1)) {
    zend_string *VAR_12;
    zval VAR_13;
    FUNC_2(&VAR_13, FUNC_0(VAR_7));
    FUNC_3(VAR_13);
    FUNC_4();
    VAR_12 = FUNC_8(&VAR_13);
    FUNC_5(VAR_0,
     "During class fetch: Uncaught %s", FUNC_1(VAR_12));
   }
   return ((void*)0);
  }
  if ((VAR_10 & VAR_3) == VAR_2) {
   FUNC_7(VAR_10, ((void*)0), "Interface '%s' not found", FUNC_1(VAR_8));
  } else if ((VAR_10 & VAR_3) == VAR_6) {
   FUNC_7(VAR_10, ((void*)0), "Trait '%s' not found", FUNC_1(VAR_8));
  } else {
   FUNC_7(VAR_10, ((void*)0), "Class '%s' not found", FUNC_1(VAR_8));
  }
  return ((void*)0);
 }
 return VAR_11;
}

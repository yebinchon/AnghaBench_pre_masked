
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {struct TYPE_6__* parent; } ;
typedef TYPE_1__ zend_class_entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 () ;
 TYPE_1__* FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int,int *,char*,...) ;

zend_class_entry *FUNC_8(zend_string *VAR_8, int VAR_9)
{
 zend_class_entry *VAR_10, *VAR_11;
 int VAR_12 = VAR_9 & VAR_2;

check_fetch_type:
 switch (VAR_12) {
  case 129:
   VAR_11 = FUNC_5();
   if (FUNC_1(!VAR_11)) {
    FUNC_7(VAR_9, ((void*)0), "Cannot access self:: when no class scope is active");
   }
   return VAR_11;
  case 130:
   VAR_11 = FUNC_5();
   if (FUNC_1(!VAR_11)) {
    FUNC_7(VAR_9, ((void*)0), "Cannot access parent:: when no class scope is active");
    return ((void*)0);
   }
   if (FUNC_1(!VAR_11->parent)) {
    FUNC_7(VAR_9, ((void*)0), "Cannot access parent:: when current class scope has no parent");
   }
   return VAR_11->parent;
  case 128:
   VAR_10 = FUNC_3(FUNC_0(VAR_6));
   if (FUNC_1(!VAR_10)) {
    FUNC_7(VAR_9, ((void*)0), "Cannot access static:: when no class scope is active");
    return ((void*)0);
   }
   return VAR_10;
  case 131: {
    VAR_12 = FUNC_4(VAR_8);
    if (FUNC_1(VAR_12 != VAR_0)) {
     goto check_fetch_type;
    }
   }
   break;
 }

 if (VAR_9 & VAR_3) {
  return FUNC_6(VAR_8, ((void*)0), VAR_9);
 } else if ((VAR_10 = FUNC_6(VAR_8, ((void*)0), VAR_9)) == ((void*)0)) {
  if (!(VAR_9 & VAR_4) && !FUNC_0(VAR_7)) {
   if (VAR_12 == VAR_1) {
    FUNC_7(VAR_9, ((void*)0), "Interface '%s' not found", FUNC_2(VAR_8));
   } else if (VAR_12 == VAR_5) {
    FUNC_7(VAR_9, ((void*)0), "Trait '%s' not found", FUNC_2(VAR_8));
   } else {
    FUNC_7(VAR_9, ((void*)0), "Class '%s' not found", FUNC_2(VAR_8));
   }
  }
  return ((void*)0);
 }
 return VAR_10;
}

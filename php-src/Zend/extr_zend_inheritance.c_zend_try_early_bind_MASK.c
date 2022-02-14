
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_12__ {int ce_flags; int name; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int zend_bool ;
typedef scalar_t__ inheritance_status ;
typedef int Bucket ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int * FUNC_11 (int ,int *,TYPE_1__*) ;
 int * FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (TYPE_1__*) ;

zend_bool FUNC_14(zend_class_entry *VAR_10, zend_class_entry *VAR_11, zend_string *VAR_12, zval *VAR_13)
{
 inheritance_status VAR_14 = FUNC_7(VAR_10, VAR_11);

 if (FUNC_2(VAR_14 != VAR_2)) {
  if (VAR_13) {
   if (FUNC_3(FUNC_12(FUNC_1(VAR_9), (Bucket*)VAR_13, VAR_12) == ((void*)0))) {
    FUNC_9(VAR_0, "Cannot declare %s %s, because the name is already in use", FUNC_10(VAR_10), FUNC_5(VAR_10->name));
    return 0;
   }
  } else {
   if (FUNC_3(FUNC_11(FUNC_0(VAR_9), VAR_12, VAR_10) == ((void*)0))) {
    return 0;
   }
  }
  FUNC_8(VAR_10, VAR_11, VAR_14 == VAR_1);
  FUNC_6(VAR_10);
  if ((VAR_10->ce_flags & (VAR_4|VAR_5|VAR_7|VAR_3)) == VAR_4) {
   FUNC_13(VAR_10);
  }
  FUNC_4(!(VAR_10->ce_flags & VAR_8));
  VAR_10->ce_flags |= VAR_6;
  return 1;
 }
 return 0;
}

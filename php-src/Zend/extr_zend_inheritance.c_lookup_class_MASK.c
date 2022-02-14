
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ zend_class_entry ;
typedef scalar_t__ zend_bool ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int *,int *,int ) ;
 TYPE_1__* FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static zend_class_entry *FUNC_7(
  zend_class_entry *VAR_4, zend_string *VAR_5, zend_bool VAR_6) {
 zend_class_entry *VAR_7;
 if (!FUNC_1(VAR_3)) {
  uint32_t VAR_8 = VAR_0 | VAR_1;
  VAR_7 = FUNC_5(VAR_5, ((void*)0), VAR_8);
  if (VAR_7) {
   return VAR_7;
  }

  if (VAR_6) {

   if (!FUNC_1(VAR_2)) {
    FUNC_0(FUNC_1(VAR_2));
    FUNC_4(FUNC_1(VAR_2), 0, ((void*)0), ((void*)0), 0);
   }
   FUNC_3(FUNC_1(VAR_2), VAR_5);
  }
 } else {
  VAR_7 = FUNC_5(VAR_5, ((void*)0), VAR_1);
  if (VAR_7 && FUNC_2(VAR_7)) {
   return VAR_7;
  }


  if (FUNC_6(VAR_4->name, VAR_5)) {
   return VAR_4;
  }
 }

 return ((void*)0);
}

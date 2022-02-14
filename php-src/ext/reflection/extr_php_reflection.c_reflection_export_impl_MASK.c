
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_bool ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *,int *,int *,int ,int *) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(zval *VAR_4, zval *VAR_5, zend_bool VAR_6) {
 zval VAR_7, VAR_8;
 int VAR_9;


 FUNC_2(&VAR_7, "__tostring", sizeof("__tostring") - 1);
 VAR_9 = FUNC_6(((void*)0), VAR_5, &VAR_7, &VAR_8, 0, ((void*)0));
 FUNC_11(&VAR_7);

 if (VAR_9 == VAR_1) {
  FUNC_5("Invocation of method __toString() failed");
  return;
 }

 if (FUNC_4(VAR_8) == VAR_2) {
  FUNC_7(((void*)0), VAR_0, "%s::__toString() did not return anything", FUNC_0(FUNC_3(VAR_5)->name));
  VAR_3;
 }

 if (VAR_6) {
  FUNC_1(VAR_4, &VAR_8);
 } else {

  FUNC_8(&VAR_8, 0);
  FUNC_9("\n");
  FUNC_10(&VAR_8);
 }
}

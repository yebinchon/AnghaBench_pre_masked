
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(zval *VAR_2) {
 if (FUNC_3(VAR_2)) {
  FUNC_6(VAR_1, " top");
 } else if (FUNC_0(VAR_2)) {
  FUNC_6(VAR_1, " bot");
 } else if (FUNC_5(VAR_2) == VAR_0 || FUNC_1(VAR_2)) {
  FUNC_6(VAR_1, " %s[", FUNC_1(VAR_2) ? "partial " : "");
  FUNC_8(FUNC_4(VAR_2));
  FUNC_6(VAR_1, "]");
 } else if (FUNC_2(VAR_2)) {
  FUNC_6(VAR_1, " {");
  FUNC_8(FUNC_4(VAR_2));
  FUNC_6(VAR_1, "}");
 } else {
  FUNC_7(VAR_2);
 }
}

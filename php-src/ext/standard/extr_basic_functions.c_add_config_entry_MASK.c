
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_ulong ;
typedef int zend_string ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_14(zend_ulong VAR_3, zend_string *VAR_4, zval *VAR_5, zval *VAR_6)
{
 if (FUNC_6(VAR_5) == VAR_2) {
  zend_string *VAR_7 = FUNC_5(VAR_5);
  if (!FUNC_1(VAR_7)) {
   if (!(FUNC_0(VAR_7) & VAR_0)) {
    FUNC_12(VAR_7);
   } else {
    VAR_7 = FUNC_13(FUNC_3(VAR_7), FUNC_2(VAR_7), 0);
   }
  }

  if (VAR_4) {
   FUNC_7(VAR_6, FUNC_3(VAR_4), FUNC_2(VAR_4), VAR_7);
  } else {
   FUNC_9(VAR_6, VAR_3, VAR_7);
  }
 } else if (FUNC_6(VAR_5) == VAR_1) {
  zval VAR_8;
  FUNC_10(&VAR_8);
  FUNC_8(FUNC_4(VAR_5), &VAR_8);
  FUNC_11(FUNC_4(VAR_6), VAR_4, &VAR_8);
 }
}

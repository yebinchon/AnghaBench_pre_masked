
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int xmlNodePtr ;
typedef int s ;
typedef int encodeTypePtr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 double FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int,char*,double) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static xmlNodePtr FUNC_16(encodeTypePtr VAR_2, zval *VAR_3, int VAR_4, xmlNodePtr VAR_5)
{
 xmlNodePtr VAR_6;

 VAR_6 = FUNC_10(((void*)0), FUNC_0("BOGUS"));
 FUNC_9(VAR_5, VAR_6);
 FUNC_1(VAR_3, VAR_6, VAR_4);

 if (FUNC_5(VAR_3) == VAR_0) {
  char VAR_7[256];

  FUNC_8(VAR_7, sizeof(VAR_7), "%0.0F",FUNC_6(FUNC_4(VAR_3)));
  FUNC_11(VAR_6, FUNC_0(VAR_7));
 } else {
  zend_string *VAR_8 = FUNC_13(FUNC_15(VAR_3));
  FUNC_12(VAR_6, FUNC_0(FUNC_3(VAR_8)), FUNC_2(VAR_8));
  FUNC_14(VAR_8, 0);
 }

 if (VAR_4 == VAR_1) {
  FUNC_7(VAR_6, VAR_2);
 }
 return VAR_6;
}

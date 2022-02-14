
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_long ;
typedef int zend_bool ;
typedef int mpz_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(mpz_t VAR_3, zval *VAR_4, zend_long VAR_5)
{
 switch (FUNC_2(VAR_4)) {
 case 130:
 case 131:
 case 128: {
  FUNC_3(VAR_3, FUNC_6(VAR_4));
  return VAR_2;
 }
 case 129: {
  char *VAR_6 = FUNC_1(VAR_4);
  zend_bool VAR_7 = 0;
  int VAR_8;

  if (FUNC_0(VAR_4) > 2 && VAR_6[0] == '0') {
   if ((VAR_5 == 0 || VAR_5 == 16) && (VAR_6[1] == 'x' || VAR_6[1] == 'X')) {
    VAR_5 = 16;
    VAR_7 = 1;
   } else if ((VAR_5 == 0 || VAR_5 == 2) && (VAR_6[1] == 'b' || VAR_6[1] == 'B')) {
    VAR_5 = 2;
    VAR_7 = 1;
   }
  }

  VAR_8 = FUNC_4(VAR_3, (VAR_7 ? &VAR_6[2] : VAR_6), (int) VAR_5);
  if (-1 == VAR_8) {
   FUNC_5(((void*)0), VAR_0,
    "Unable to convert variable to GMP - string is not an integer");
   return VAR_1;
  }

  return VAR_2;
 }
 default:
  FUNC_5(((void*)0), VAR_0,
   "Unable to convert variable to GMP - wrong type");
  return VAR_1;
 }
}

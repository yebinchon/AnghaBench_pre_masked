
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int VAR_0 ;
 int VAR_1 ;
 size_t const FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (unsigned char*,size_t const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, const size_t VAR_3, const size_t VAR_4, char *VAR_5)
{
 size_t VAR_6 = 0;
 zend_string *VAR_7;
 if ((int) VAR_3 < 0) {
  return VAR_0;
 }
 VAR_7 = FUNC_2((unsigned char*) VAR_2, VAR_3);
 if (FUNC_0(VAR_7) < VAR_4) {

  FUNC_4(VAR_7, 0);
  return VAR_0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (FUNC_1(VAR_7)[VAR_6] == '+') {
   VAR_5[VAR_6] = '.';
  } else if (FUNC_1(VAR_7)[VAR_6] == '=') {
   FUNC_3(VAR_7);
   return VAR_0;
  } else {
   VAR_5[VAR_6] = FUNC_1(VAR_7)[VAR_6];
  }
 }
 FUNC_3(VAR_7);
 return VAR_1;
}

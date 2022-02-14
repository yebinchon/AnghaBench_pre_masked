
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int smart_str ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,int ,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(smart_str *VAR_2, zend_string *VAR_3, zval *VAR_4)
{
 switch(FUNC_2(VAR_4)) {
  case 128:
   if (FUNC_4(VAR_3) != VAR_1) {
    FUNC_3(((void*)0), VAR_0, "Header field name (%s) contains invalid chars", FUNC_0(VAR_3));
    return;
   }
   if (FUNC_5(VAR_4) != VAR_1) {
    FUNC_3(((void*)0), VAR_0, "Header field value (%s => %s) contains invalid chars or format", FUNC_0(VAR_3), FUNC_1(VAR_4));
    return;
   }
   FUNC_7(VAR_2, VAR_3);
   FUNC_8(VAR_2, ": ", 2);
   FUNC_9(VAR_2, FUNC_1(VAR_4));
   FUNC_8(VAR_2, "\r\n", 2);
   break;
  case 129:
   FUNC_6(VAR_2, VAR_3, VAR_4);
   break;
  default:
   FUNC_3(((void*)0), VAR_0, "headers array elements must be string or array (%s)", FUNC_0(VAR_3));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_class_entry ;
typedef scalar_t__ xsltStylesheetPtr ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,void*) ;
 int * FUNC_4 (void*) ;
 int * VAR_0 ;

void FUNC_5(xsltStylesheetPtr VAR_1, zval *VAR_2, zval *VAR_3 )
{
 zval *VAR_4;
 zend_class_entry *VAR_5;

 if (!VAR_1) {
  VAR_4 = VAR_2;
  FUNC_1(VAR_4);
  return;
 }

 if ((VAR_4 = FUNC_4((void *) VAR_1))) {
  FUNC_0(VAR_4, VAR_2);
  return;
 }

 if (!VAR_2) {
  VAR_4 = VAR_3;
 } else {
  VAR_4 = VAR_2;
 }


 VAR_5 = VAR_0;

 if (!VAR_2) {
  FUNC_2(VAR_4, VAR_5);
 }
 FUNC_3(VAR_4, (void *) VAR_1);

 return;
}

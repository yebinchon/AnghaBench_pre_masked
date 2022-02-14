
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_php_scanner_event ;
typedef int HashTable ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_10 ;

void FUNC_8(zend_php_scanner_event VAR_11, int VAR_12, int VAR_13, void *VAR_14)
{
 zval *VAR_15 = (zval *) VAR_14;
 HashTable *VAR_16;
 zval *VAR_17;

 switch (VAR_11) {
  case 128:
   {
    if (VAR_12 == VAR_0) break;

    if (VAR_12 == ';' && FUNC_1(VAR_7) > 1) {
     VAR_12 = VAR_2;
    } else if (VAR_12 == VAR_3 && FUNC_1(VAR_7) == sizeof("<?=") - 1) {
     VAR_12 = VAR_5;
    }
    FUNC_5(VAR_15, VAR_12, FUNC_1(VAR_9), FUNC_1(VAR_7), VAR_13);
   }
   break;
  case 130:
   VAR_16 = FUNC_3(VAR_15);
   VAR_17 = FUNC_6(VAR_16, FUNC_7(VAR_16) - 1);
   if (VAR_17 && FUNC_4(VAR_17) == VAR_1) {
    FUNC_2(FUNC_6(FUNC_3(VAR_17), 0), VAR_12);
   }
   break;
  case 129:
   if (FUNC_1(VAR_6) != FUNC_1(VAR_8)) {
    FUNC_5(VAR_15, VAR_4, FUNC_1(VAR_6),
     FUNC_1(VAR_8) - FUNC_1(VAR_6), FUNC_0(VAR_10));
   }
   break;
 }
}

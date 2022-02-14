
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_ulong ;
typedef int zend_string ;
typedef int uint32_t ;
typedef int spl_array_object ;
typedef int HashTable ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int **,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(spl_array_object *VAR_5, HashTable *VAR_6)
{
 zend_string *VAR_7;
 zend_ulong VAR_8;
 zval *VAR_9;

 if (FUNC_5(VAR_5)) {
  uint32_t *VAR_10 = FUNC_4(VAR_6, VAR_5);

  do {
   if (FUNC_7(VAR_6, &VAR_7, &VAR_8, VAR_10) == VAR_1) {
    VAR_9 = FUNC_6(VAR_6, VAR_10);
    if (VAR_9 && FUNC_3(VAR_9) == VAR_2 &&
        FUNC_3(VAR_9 = FUNC_2(VAR_9)) == VAR_3) {

    } else if (!FUNC_0(VAR_7) || FUNC_1(VAR_7)[0]) {
     return VAR_4;
    }
   } else {
    return VAR_4;
   }
   if (FUNC_8(VAR_6, VAR_10) != VAR_4) {
    return VAR_0;
   }
   FUNC_9(VAR_6, VAR_10);
  } while (1);
 }
 return VAR_0;
}

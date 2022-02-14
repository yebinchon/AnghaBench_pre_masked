
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef scalar_t__ zend_uintptr_t ;
typedef int zend_long ;
typedef scalar_t__ zend_bool ;
typedef TYPE_1__* php_serialize_data_t ;
struct TYPE_3__ {int n; int ht; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__,int *) ;
 int * FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static inline zend_long FUNC_9(php_serialize_data_t VAR_1, zval *VAR_2)
{
 zval *VAR_3;
 zend_ulong VAR_4;
 zend_bool VAR_5 = FUNC_3(VAR_2);

 VAR_1->n += 1;

 if (!VAR_5 && FUNC_6(VAR_2) != VAR_0) {
  return 0;
 }


 if (VAR_5 && FUNC_6(FUNC_5(VAR_2)) == VAR_0) {
  VAR_2 = FUNC_5(VAR_2);
 }



 VAR_4 = (zend_ulong) (zend_uintptr_t) FUNC_2(VAR_2);
 VAR_3 = FUNC_8(&VAR_1->ht, VAR_4);

 if (VAR_3) {

  if (VAR_5) {
   VAR_1->n -= 1;
  }

  return FUNC_4(VAR_3);
 } else {
  zval VAR_6;
  FUNC_0(&VAR_6, VAR_1->n);
  FUNC_7(&VAR_1->ht, VAR_4, &VAR_6);





  FUNC_7(&VAR_1->ht, VAR_4 + 1, VAR_2);
  FUNC_1(VAR_2);

  return 0;
 }
}

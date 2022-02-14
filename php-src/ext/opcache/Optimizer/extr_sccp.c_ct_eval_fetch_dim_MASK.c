
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef size_t zend_long ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 size_t FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int **,int *,int *) ;
 int FUNC_8 (int *,int,int ) ;
 scalar_t__ FUNC_9 (size_t*,int *) ;

__attribute__((used)) static inline int FUNC_10(zval *VAR_4, zval *VAR_5, zval *VAR_6, int VAR_7) {
 if (FUNC_6(VAR_5) == VAR_1 || FUNC_1(VAR_5)) {
  zval *VAR_8;
  if (FUNC_7(&VAR_8, VAR_5, VAR_6) == VAR_3 && VAR_8 && !FUNC_0(VAR_8)) {
   FUNC_2(VAR_4, VAR_8);
   return VAR_3;
  }
 } else if (VAR_7 && FUNC_6(VAR_5) == VAR_2) {
  zend_long VAR_9;
  if (FUNC_9(&VAR_9, VAR_6) == VAR_0) {
   return VAR_0;
  }
  if (VAR_9 >= 0 && VAR_9 < FUNC_4(VAR_5)) {
   FUNC_3(VAR_4, FUNC_8(&FUNC_5(VAR_5)[VAR_9], 1, 0));
   return VAR_3;
  }
 }
 return VAR_0;
}

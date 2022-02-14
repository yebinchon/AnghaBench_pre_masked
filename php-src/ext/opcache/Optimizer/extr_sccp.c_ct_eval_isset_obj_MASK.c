
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int **,int *,int *) ;

__attribute__((used)) static inline int FUNC_5(zval *VAR_3, uint32_t VAR_4, zval *VAR_5, zval *VAR_6) {
 if (FUNC_1(VAR_5)) {
  zval *VAR_7;
  if (FUNC_4(&VAR_7, VAR_5, VAR_6) == VAR_0) {
   return VAR_0;
  }
  if (!VAR_7 || FUNC_0(VAR_7)) {
   return VAR_0;
  }
  return FUNC_3(VAR_3, VAR_4, VAR_7);
 } else {
  FUNC_2(VAR_3, (VAR_4 & VAR_2));
  return VAR_1;
 }
}

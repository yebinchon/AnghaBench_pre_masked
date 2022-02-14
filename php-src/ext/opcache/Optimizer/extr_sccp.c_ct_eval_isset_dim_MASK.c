
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int *) ;
 scalar_t__ FUNC_5 (int **,int *,int *) ;

__attribute__((used)) static inline int FUNC_6(zval *VAR_5, uint32_t VAR_6, zval *VAR_7, zval *VAR_8) {
 if (FUNC_3(VAR_7) == VAR_1 || FUNC_1(VAR_7)) {
  zval *VAR_9;
  if (FUNC_5(&VAR_9, VAR_7, VAR_8) == VAR_0) {
   return VAR_0;
  }
  if (FUNC_1(VAR_7) && (!VAR_9 || FUNC_0(VAR_9))) {
   return VAR_0;
  }
  return FUNC_4(VAR_5, VAR_6, VAR_9);
 } else if (FUNC_3(VAR_7) == VAR_2) {

  return VAR_0;
 } else {
  FUNC_2(VAR_5, (VAR_6 & VAR_4));
  return VAR_3;
 }
}

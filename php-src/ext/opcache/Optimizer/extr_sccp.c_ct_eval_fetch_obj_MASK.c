
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int **,int *,int *) ;

__attribute__((used)) static inline int FUNC_4(zval *VAR_2, zval *VAR_3, zval *VAR_4) {
 if (FUNC_1(VAR_3)) {
  zval *VAR_5;
  if (FUNC_3(&VAR_5, VAR_3, VAR_4) == VAR_1 && VAR_5 && !FUNC_0(VAR_5)) {
   FUNC_2(VAR_2, VAR_5);
   return VAR_1;
  }
 }
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *) ;

__attribute__((used)) static inline int FUNC_5(zval *VAR_6, zval *VAR_7, zval *VAR_8) {
 zval *VAR_9;

 if (FUNC_3(VAR_8) != VAR_1 && !FUNC_1(VAR_8)) {
  return VAR_0;
 }
 if (FUNC_3(VAR_7) != VAR_4 && FUNC_3(VAR_7) != VAR_2 && FUNC_3(VAR_7) != VAR_3) {
  return VAR_0;
 }
 if (FUNC_4(&VAR_9, VAR_8, VAR_7) == VAR_0) {
  return VAR_0;
 }
 if (FUNC_1(VAR_8) && (!VAR_9 || FUNC_0(VAR_9))) {
  return VAR_0;
 }

 FUNC_2(VAR_6, VAR_9 != ((void*)0));
 return VAR_5;
}

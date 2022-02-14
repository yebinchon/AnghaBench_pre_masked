
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static inline int FUNC_5(zval *VAR_5, uint32_t VAR_6, zval *VAR_7) {
 zval VAR_8;
 if (!(VAR_6 & VAR_4)) {
  FUNC_0(VAR_5, VAR_7 && FUNC_3(VAR_7) != VAR_2);
  return VAR_3;
 } else if (!VAR_7) {
  FUNC_1(VAR_5);
  return VAR_3;
 } else if (FUNC_4(&VAR_8, VAR_7) == VAR_3) {
  FUNC_0(VAR_5, FUNC_2(VAR_8) == VAR_1);
  return VAR_3;
 } else {
  return VAR_0;
 }
}

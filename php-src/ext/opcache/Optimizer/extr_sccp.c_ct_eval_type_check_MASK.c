
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(zval *VAR_4, uint32_t VAR_5, zval *VAR_6) {
 uint32_t VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 == VAR_2) {
  VAR_7 = VAR_0;
 } else if (VAR_7 == VAR_3) {
  VAR_7 = VAR_1;
 }
 FUNC_0(VAR_4, (VAR_5 >> VAR_7) & 1);
}

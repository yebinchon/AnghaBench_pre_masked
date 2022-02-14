
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline uint64_t
FUNC_1(uint64_t VAR_0, uint64_t VAR_1) {
 if (VAR_1==1) {
  return VAR_0;
 }
 uint64_t VAR_2 = FUNC_1(VAR_0, VAR_1>>1);
 VAR_2 = FUNC_0(VAR_2,VAR_2);
 if (VAR_1 % 2) {
  VAR_2 = FUNC_0(VAR_2, VAR_0);
 }
 return VAR_2;
}

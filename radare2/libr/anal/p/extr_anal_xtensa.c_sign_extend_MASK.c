
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int st32 ;



__attribute__((used)) static inline void FUNC_0(st32 *VAR_0, ut8 VAR_1) {
 if (*VAR_0 & (1 << VAR_1)) {
  *VAR_0 |= 0xFFFFFFFF << VAR_1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;



__attribute__((used)) static inline void FUNC_0(ut32 *VAR_0, int VAR_1) {
 *VAR_0 = (*VAR_0 << VAR_1) | (*VAR_0 >> (32 - VAR_1));
}

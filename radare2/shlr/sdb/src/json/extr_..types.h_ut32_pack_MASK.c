
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;



__attribute__((used)) static inline void FUNC_0(char VAR_0[4], ut32 VAR_1) {
 VAR_0[0] = VAR_1 & 255;
 VAR_1 >>= 8;
 VAR_0[1] = VAR_1 & 255;
 VAR_1 >>= 8;
 VAR_0[2] = VAR_1 & 255;
 VAR_0[3] = VAR_1 >> 8;
}

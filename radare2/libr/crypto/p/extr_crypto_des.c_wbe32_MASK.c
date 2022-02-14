
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;



__attribute__((used)) static void FUNC_0(ut8 *VAR_0, ut32 VAR_1) {
 VAR_0[0] = (VAR_1 >> 24);
 VAR_0[1] = (VAR_1 >> 16) & 0xFF;
 VAR_0[2] = (VAR_1 >> 8) & 0xFF;
 VAR_0[3] = VAR_1 & 0xFF;
}

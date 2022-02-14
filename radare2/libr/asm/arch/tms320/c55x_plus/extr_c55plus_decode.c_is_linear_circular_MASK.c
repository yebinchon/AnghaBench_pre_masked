
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;



__attribute__((used)) static bool FUNC_0(ut32 VAR_0) {
 ut8 VAR_1, VAR_2, VAR_3;
 VAR_1 = (VAR_0 >> 6) | 16 * (VAR_0 & 3);
 VAR_2 = (VAR_0 >> 2) & 0xF;
 VAR_3 = VAR_2 & 0xF;
 return (VAR_1 == 26 || VAR_1 == 30 || (VAR_3 > 7 && VAR_3 != 15));
}

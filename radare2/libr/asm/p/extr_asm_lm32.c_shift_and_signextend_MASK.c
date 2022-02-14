
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int st32 ;



__attribute__((used)) static st32 FUNC_0(ut8 VAR_0, ut8 VAR_1, ut32 VAR_2) {
 ut32 VAR_3 = VAR_2 << VAR_0;
 if (VAR_3 & (1 << (VAR_0 + VAR_1))) {
  VAR_3 |= ~((1 << (VAR_0 + VAR_1 + 1)) - 1);
 }
 return VAR_3;
}

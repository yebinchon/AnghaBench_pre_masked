
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;



__attribute__((used)) static ut32 FUNC_0(ut32 VAR_0) {
 ut32 VAR_1 = 0;
 VAR_1 |= (VAR_0 & 0x800) << 7;
 VAR_1 |= (VAR_0 & 0x700) >> 4;
 VAR_1 |= (VAR_0 & 0x0ff) << 8;
 return VAR_1;
}

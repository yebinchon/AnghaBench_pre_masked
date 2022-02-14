
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static ut64 FUNC_1(ut8 *VAR_0, ut64 VAR_1) {
 ut64 VAR_2 = VAR_1 & ~0xfff;

 ut64 VAR_3 = FUNC_0 (VAR_0);
 ut64 VAR_4 = ((VAR_3 & 0x60000000) >> 29) | ((VAR_3 & 0xffffe0) >> 3);
 VAR_2 += VAR_4 << 12;

 ut64 VAR_5 = FUNC_0 (VAR_0 + 4);
 VAR_2 += ((VAR_5 & 0x3ffc00) >> 10) << ((VAR_5 & 0xc0000000) >> 30);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int const ut64 ;
typedef int st64 ;



__attribute__((used)) static st64 FUNC_0(const ut64 VAR_0, const ut8 VAR_1) {
 const ut64 VAR_2 = ~(((ut64)1 << (VAR_1 + 1)) - 1);
 return (st64) ((VAR_0 & ~VAR_2)
  | (((VAR_0 & ((ut64)1 << VAR_1)) >> VAR_1) * VAR_2));
}

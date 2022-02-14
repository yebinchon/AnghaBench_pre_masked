
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st64 ;



__attribute__((used)) static inline st64 FUNC_0(st64 VAR_0) {
 VAR_0 = ((VAR_0 << 8) & 0xFF00FF00FF00FF00ULL ) | ((VAR_0 >> 8) & 0x00FF00FF00FF00FFULL );
 VAR_0 = ((VAR_0 << 16) & 0xFFFF0000FFFF0000ULL ) | ((VAR_0 >> 16) & 0x0000FFFF0000FFFFULL );
 return (VAR_0 << 32) | ((VAR_0 >> 32) & 0xFFFFFFFFULL);
}

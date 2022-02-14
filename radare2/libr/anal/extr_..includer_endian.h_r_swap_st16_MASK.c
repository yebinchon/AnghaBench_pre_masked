
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st16 ;



__attribute__((used)) static inline st16 FUNC_0(st16 VAR_0) {
 VAR_0 = ((VAR_0 << 8) & 0xFF00FF00 ) | ((VAR_0 >> 8) & 0xFF00FF );
 return (VAR_0 << 16) | (VAR_0 >> 16);
}

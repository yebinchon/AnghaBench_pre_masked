
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static __inline int FUNC_0(register uint64_t VAR_0)
{
 VAR_0 = (VAR_0 & 0x5555555555555555) + ((VAR_0 >> 1) & 0x5555555555555555);
 VAR_0 = (VAR_0 & 0x3333333333333333) + ((VAR_0 >> 2) & 0x3333333333333333);
 VAR_0 = (VAR_0 & 0x0f0f0f0f0f0f0f0f) + ((VAR_0 >> 4) & 0x0f0f0f0f0f0f0f0f);
 VAR_0 = (VAR_0 & 0x00ff00ff00ff00ff) + ((VAR_0 >> 8) & 0x00ff00ff00ff00ff);
 VAR_0 = (VAR_0 & 0x0000ffff0000ffff) + ((VAR_0 >> 16) & 0x0000ffff0000ffff);
 VAR_0 = (VAR_0 & 0x00000000ffffffff) + ((VAR_0 >> 32) & 0x00000000ffffffff);
 return (int)VAR_0;
}

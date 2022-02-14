
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(const void *VAR_0, size_t VAR_1, unsigned char VAR_2)
{
 unsigned char VAR_3 = (unsigned char)VAR_1;

 (void)VAR_0;

 VAR_3 |= (unsigned char)(uintptr_t)VAR_0;

 return (VAR_3 & (VAR_2 - 1)) == 0;
}

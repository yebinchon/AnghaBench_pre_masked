
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int
FUNC_0(char VAR_0)
{
 signed char VAR_1 = VAR_0;
 int VAR_2;

 VAR_2 = VAR_1 - '.';
 if (VAR_1 >= 'A') {
  VAR_2 = VAR_1 - ('A' - 12);
  if (VAR_1 >= 'a')
   VAR_2 = VAR_1 - ('a' - 38);
 }
 VAR_2 &= 0x3f;

 return(VAR_2);
}

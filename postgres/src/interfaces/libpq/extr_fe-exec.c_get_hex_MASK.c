
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static inline char
FUNC_0(char VAR_1)
{
 int VAR_2 = -1;

 if (VAR_1 > 0 && VAR_1 < 127)
  VAR_2 = VAR_0[(unsigned char) VAR_1];

 return (char) VAR_2;
}

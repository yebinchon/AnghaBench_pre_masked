
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_long ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(unsigned long *VAR_1)
{
 return ((*VAR_1 = *VAR_1 * 1103515245 + 12345) % ((u_long)VAR_0 + 1));
}

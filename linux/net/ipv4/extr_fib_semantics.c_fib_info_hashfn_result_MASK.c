
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1)
{
 unsigned int VAR_2 = (VAR_0 - 1);

 return (VAR_1 ^ (VAR_1 >> 7) ^ (VAR_1 >> 12)) & VAR_2;
}

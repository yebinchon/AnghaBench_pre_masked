
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1 - 1;

 return (VAR_2 ^
  (VAR_2 >> VAR_0) ^
  (VAR_2 >> (VAR_0 * 2))) & VAR_3;
}

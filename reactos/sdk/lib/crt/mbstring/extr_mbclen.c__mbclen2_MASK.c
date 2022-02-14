
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int const) ;
 scalar_t__ FUNC_1 (unsigned int const) ;

size_t FUNC_2(const unsigned int VAR_0)
{
  return (FUNC_0(VAR_0>>8) && FUNC_1(VAR_0&0x00FF)) ? 2 : 1;
}

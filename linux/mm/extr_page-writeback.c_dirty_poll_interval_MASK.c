
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0,
      unsigned long VAR_1)
{
 if (VAR_1 > VAR_0)
  return 1UL << (FUNC_0(VAR_1 - VAR_0) >> 1);

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned long,...) ;

void FUNC_1(unsigned long VAR_1, unsigned int VAR_2)
{
 if (!VAR_2)
  FUNC_0("%lu: ", VAR_1);
 else if (VAR_2 >= VAR_0)
  FUNC_0("0-%lu: ", ~0UL);
 else
  FUNC_0("%lu-%lu: ", VAR_1, VAR_1 | ((1UL << VAR_2) - 1));
}

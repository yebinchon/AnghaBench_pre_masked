
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char,void*) ;

void FUNC_2(const unsigned long *VAR_0, unsigned int VAR_1,
         int VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_0(!VAR_0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1("%*c%pS\n", 1 + VAR_2, ' ', (void *)VAR_0[VAR_3]);
}

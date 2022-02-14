
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 unsigned int* VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static unsigned short FUNC_2(unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2] == VAR_1)
   return VAR_2;
 FUNC_1();
 return FUNC_0(VAR_0) - 1;
}

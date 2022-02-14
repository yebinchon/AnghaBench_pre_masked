
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* FUNC_0 (unsigned int,int,int) ;

unsigned int *FUNC_1(unsigned int VAR_3)
{
 if (VAR_3 > VAR_1 / sizeof(unsigned int))
  return ((void*)0);

 return FUNC_0(VAR_3, sizeof(unsigned int), VAR_0 | VAR_2);

}

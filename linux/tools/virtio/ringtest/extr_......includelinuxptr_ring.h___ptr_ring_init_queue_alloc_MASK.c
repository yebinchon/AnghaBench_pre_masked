
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 void** FUNC_0 (unsigned int,int,int) ;

__attribute__((used)) static inline void **FUNC_1(unsigned int VAR_2, gfp_t VAR_3)
{
 if (VAR_2 > VAR_0 / sizeof(void *))
  return ((void*)0);
 return FUNC_0(VAR_2, sizeof(void *), VAR_3 | VAR_1);
}

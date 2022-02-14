
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int,unsigned int) ;
 unsigned int FUNC_2 (size_t) ;
 void* FUNC_3 (unsigned long,unsigned int,size_t) ;

void *FUNC_4(size_t VAR_1, gfp_t VAR_2)
{
 unsigned int VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4;

 if (FUNC_0(VAR_2 & VAR_0))
  VAR_2 &= ~VAR_0;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 return FUNC_3(VAR_4, VAR_3, VAR_1);
}

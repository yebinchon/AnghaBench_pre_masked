
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * AT91PS_DataFlash ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,unsigned int*) ;
 int VAR_0 ;

int FUNC_2(unsigned long VAR_1)
{
 unsigned int VAR_2 = VAR_1;
 AT91PS_DataFlash VAR_3 = &VAR_0;

 VAR_3 = FUNC_1 (VAR_3, &VAR_2);
 if (VAR_2 == -1)
  return -1;

 return FUNC_0(VAR_3);
}

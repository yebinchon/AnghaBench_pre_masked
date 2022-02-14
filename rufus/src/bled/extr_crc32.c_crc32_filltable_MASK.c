
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

uint32_t* FUNC_3(uint32_t *VAR_1, int VAR_2)
{

 if (!VAR_1)
  VAR_1 = FUNC_2((1 << VAR_0) * sizeof(uint32_t));
 if (VAR_1) {
  if (VAR_2)
   FUNC_0(VAR_1);
  else
   FUNC_1(VAR_1);
 }
 return VAR_1;
}

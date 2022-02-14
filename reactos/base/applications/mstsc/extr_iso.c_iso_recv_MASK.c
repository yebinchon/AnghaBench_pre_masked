
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int * STREAM ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int * FUNC_1 (int*,int*) ;

STREAM
FUNC_2(uint8 * VAR_1)
{
 STREAM VAR_2;
 uint8 VAR_3 = 0;

 VAR_2 = FUNC_1(&VAR_3, VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 if (VAR_1 != ((void*)0))
  if (*VAR_1 != 3)
   return VAR_2;
 if (VAR_3 != VAR_0)
 {
  FUNC_0("expected DT, got 0x%x\n", VAR_3);
  return ((void*)0);
 }
 return VAR_2;
}

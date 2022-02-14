
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int * FUNC_1 (int *,int*,int*) ;

STREAM
FUNC_2(RDPCLIENT * VAR_1, uint8 * VAR_2)
{
 STREAM VAR_3;
 uint8 VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_1, &VAR_4, VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_2 != ((void*)0))
  if (*VAR_2 != 3)
   return VAR_3;
 if (VAR_4 != VAR_0)
 {
  FUNC_0("expected DT, got 0x%x\n", VAR_4);
  return ((void*)0);
 }
 return VAR_3;
}

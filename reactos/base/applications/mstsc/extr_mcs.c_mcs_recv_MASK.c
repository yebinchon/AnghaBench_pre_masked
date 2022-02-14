
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int * STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int*) ;

STREAM
FUNC_5(uint16 * VAR_2, uint8 * VAR_3)
{
 uint8 VAR_4, VAR_5, VAR_6;
 STREAM VAR_7;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 if (VAR_3 != ((void*)0))
  if (*VAR_3 != 3)
   return VAR_7;
 FUNC_2(VAR_7, VAR_4);
 VAR_5 = VAR_4 >> 2;
 if (VAR_5 != VAR_1)
 {
  if (VAR_5 != VAR_0)
  {
   FUNC_0("expected data, got %d\n", VAR_4);
  }
  return ((void*)0);
 }
 FUNC_3(VAR_7, 2);
 FUNC_1(VAR_7, *VAR_2);
 FUNC_3(VAR_7, 1);
 FUNC_2(VAR_7, VAR_6);
 if (VAR_6 & 0x80)
  FUNC_3(VAR_7, 1);
 return VAR_7;
}

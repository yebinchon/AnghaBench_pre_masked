
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int*) ;

STREAM
FUNC_5(RDPCLIENT * VAR_2, uint16 * VAR_3, uint8 * VAR_4)
{
 uint8 VAR_5, VAR_6, VAR_7;
 STREAM VAR_8;

 VAR_8 = FUNC_4(VAR_2, VAR_4);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 if (VAR_4 != ((void*)0))
  if (*VAR_4 != 3)
   return VAR_8;
 FUNC_2(VAR_8, VAR_5);
 VAR_6 = VAR_5 >> 2;
 if (VAR_6 != VAR_1)
 {
  if (VAR_6 != VAR_0)
  {
   FUNC_0("expected data, got %d\n", VAR_5);
  }
  return ((void*)0);
 }
 FUNC_3(VAR_8, 2);
 FUNC_1(VAR_8, *VAR_3);
 FUNC_3(VAR_8, 1);
 FUNC_2(VAR_8, VAR_7);
 if (VAR_7 & 0x80)
  FUNC_3(VAR_8, 1);
 return VAR_8;
}

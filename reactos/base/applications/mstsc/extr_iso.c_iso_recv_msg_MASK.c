
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int * STREAM ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int) ;

__attribute__((used)) static STREAM
FUNC_6(uint8 * VAR_1, uint8 * VAR_2)
{
 STREAM VAR_3;
 uint16 VAR_4;
 uint8 VAR_5;

 VAR_3 = FUNC_5(((void*)0), 4);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_3, VAR_5);
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_5;
 if (VAR_5 == 3)
 {
  FUNC_3(VAR_3, 1);
  FUNC_1(VAR_3, VAR_4);
 }
 else
 {
  FUNC_2(VAR_3, VAR_4);
  if (VAR_4 & 0x80)
  {
   VAR_4 &= ~0x80;
   FUNC_4(VAR_3, VAR_4);
  }
 }
 if (VAR_4 < 4)
 {
  FUNC_0("Bad packet header\n");
  return ((void*)0);
 }
 VAR_3 = FUNC_5(VAR_3, VAR_4 - 4);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_5 != 3)
  return VAR_3;
 FUNC_3(VAR_3, 1);
 FUNC_2(VAR_3, *VAR_1);
 if (*VAR_1 == VAR_0)
 {
  FUNC_3(VAR_3, 1);
  return VAR_3;
 }
 FUNC_3(VAR_3, 5);
 return VAR_3;
}

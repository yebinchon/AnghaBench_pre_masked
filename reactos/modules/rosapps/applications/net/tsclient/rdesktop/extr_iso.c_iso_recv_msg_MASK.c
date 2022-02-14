
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int * STREAM ;
typedef int RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int *,int) ;

__attribute__((used)) static STREAM
FUNC_5(RDPCLIENT * VAR_1, uint8 * VAR_2, uint8 * VAR_3)
{
 STREAM VAR_4;
 uint16 VAR_5;
 uint8 VAR_6;

 VAR_4 = FUNC_4(VAR_1, ((void*)0), 4);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_4, VAR_6);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_6;
 if (VAR_6 == 3)
 {
  FUNC_2(VAR_4, 1);
  FUNC_0(VAR_4, VAR_5);
 }
 else
 {
  FUNC_1(VAR_4, VAR_5);
  if (VAR_5 & 0x80)
  {
   VAR_5 &= ~0x80;
   FUNC_3(VAR_4, VAR_5);
  }
 }
 VAR_4 = FUNC_4(VAR_1, VAR_4, VAR_5 - 4);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 if (VAR_6 != 3)
  return VAR_4;
 FUNC_2(VAR_4, 1);
 FUNC_1(VAR_4, *VAR_2);
 if (*VAR_2 == VAR_0)
 {
  FUNC_2(VAR_4, 1);
  return VAR_4;
 }
 FUNC_2(VAR_4, 5);
 return VAR_4;
}

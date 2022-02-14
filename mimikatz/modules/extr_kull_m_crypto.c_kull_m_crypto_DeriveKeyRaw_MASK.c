
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opad ;
typedef int ipad ;
typedef int * PBYTE ;
typedef int * LPVOID ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ALG_ID ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int,char) ;
 int FUNC_2 (int ,int *,int,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

BOOL FUNC_4(ALG_ID VAR_1, LPVOID VAR_2, DWORD VAR_3, LPVOID VAR_4, DWORD VAR_5)
{
 BOOL VAR_6 = VAR_0;
 BYTE VAR_7[152], VAR_8[64], VAR_9[64];
 DWORD VAR_10;

 if((VAR_6 = (VAR_3 >= VAR_5)))
  FUNC_0(VAR_4, VAR_2, VAR_5);
 else
 {
  FUNC_1(VAR_8, sizeof(VAR_8), '6');
  FUNC_1(VAR_9, sizeof(VAR_9), '\\');
  for(VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  {
   VAR_8[VAR_10] ^= ((PBYTE) VAR_2)[VAR_10];
   VAR_9[VAR_10] ^= ((PBYTE) VAR_2)[VAR_10];
  }
  if(FUNC_2(VAR_1, VAR_8, sizeof(VAR_8), VAR_7, VAR_3))
   if((VAR_6 = FUNC_2(VAR_1, VAR_9, sizeof(VAR_9), VAR_7 + VAR_3, VAR_3)))
    FUNC_0(VAR_4, VAR_7, FUNC_3(VAR_5, 2 * VAR_3));
 }
 return VAR_6;
}

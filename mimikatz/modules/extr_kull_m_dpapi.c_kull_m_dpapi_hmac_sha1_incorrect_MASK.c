
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opad ;
typedef int ipad ;
typedef int * PBYTE ;
typedef int * LPVOID ;
typedef int * LPCVOID ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int,char) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int *,int,int *,int) ;

BOOL FUNC_5(LPCVOID VAR_4, DWORD VAR_5, LPCVOID VAR_6, DWORD VAR_7, LPCVOID VAR_8, DWORD VAR_9, LPCVOID VAR_10, DWORD VAR_11, LPVOID VAR_12)
{
 BOOL VAR_13 = VAR_1;
 BYTE VAR_14[64], VAR_15[64], VAR_16[VAR_3], *VAR_17, *VAR_18;
 DWORD VAR_19;

 FUNC_3(VAR_14, sizeof(VAR_14), '6');
 FUNC_3(VAR_15, sizeof(VAR_15), '\\');
 for(VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
 {
  VAR_14[VAR_19] ^= ((PBYTE) VAR_4)[VAR_19];
  VAR_15[VAR_19] ^= ((PBYTE) VAR_4)[VAR_19];
 }
 if((VAR_17 = (PBYTE) FUNC_0(VAR_2, sizeof(VAR_14) + VAR_7)))
 {
  FUNC_2(VAR_17, VAR_14, sizeof(VAR_14));
  FUNC_2(VAR_17 + sizeof(VAR_14), VAR_6, VAR_7);
  if(FUNC_4(VAR_0, VAR_17, sizeof(VAR_14) + VAR_7, VAR_16, VAR_3))
  {
   if((VAR_18 = (PBYTE) FUNC_0(VAR_2, sizeof(VAR_15) + VAR_3 + VAR_9 + VAR_11)))
   {
    FUNC_2(VAR_18, VAR_15, sizeof(VAR_15));
    FUNC_2(VAR_18 + sizeof(VAR_15), VAR_16, VAR_3);
    if(VAR_8 && VAR_9)
     FUNC_2(VAR_18 + sizeof(VAR_15) + VAR_3, VAR_8, VAR_9);
    if(VAR_10 && VAR_11)
     FUNC_2(VAR_18 + sizeof(VAR_15) + VAR_3 + VAR_9, VAR_10, VAR_11);

    VAR_13 = FUNC_4(VAR_0, VAR_18, sizeof(VAR_15) + VAR_3 + VAR_9 + VAR_11, VAR_12, VAR_3);
    FUNC_1(VAR_18);
   }
  }
  FUNC_1(VAR_17);
 }
 return VAR_13;
}

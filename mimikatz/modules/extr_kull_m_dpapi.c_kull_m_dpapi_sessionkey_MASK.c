
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PBYTE ;
typedef int LPVOID ;
typedef int * LPCVOID ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef scalar_t__ ALG_ID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int,int *,int) ;
 int FUNC_4 (scalar_t__,int *,int,int,int,int ,int) ;
 int FUNC_5 (int *,int,int *,int,int *,int,int *,int,int ) ;

BOOL FUNC_6(LPCVOID VAR_4, DWORD VAR_5, LPCVOID VAR_6, DWORD VAR_7, LPCVOID VAR_8, DWORD VAR_9, LPCVOID VAR_10, DWORD VAR_11, ALG_ID VAR_12, LPVOID VAR_13, DWORD VAR_14)
{
 BOOL VAR_15 = VAR_1;
 LPCVOID VAR_16 = ((void*)0);
 BYTE VAR_17[VAR_3];
 PBYTE VAR_18;
 if(VAR_5 == VAR_3)
  VAR_16 = VAR_4;
 else if(FUNC_3(VAR_0, VAR_4, VAR_5, VAR_17, VAR_3))
  VAR_16 = VAR_17;

 if(VAR_16)
 {
  if((VAR_12 == VAR_0) && (VAR_8 || VAR_10))
   VAR_15 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_13);
  else if((VAR_18 = (PBYTE) FUNC_0(VAR_2, VAR_7 + VAR_9 + VAR_11)))
  {
   FUNC_2(VAR_18, VAR_6, VAR_7);
   if(VAR_8 && VAR_9)
    FUNC_2(VAR_18 + VAR_7, VAR_8, VAR_9);
   if(VAR_10 && VAR_11)
    FUNC_2(VAR_18 + VAR_7 + VAR_9, VAR_10, VAR_11);
   VAR_15 = FUNC_4(VAR_12, VAR_16, VAR_3, VAR_18, VAR_7 + VAR_9 + VAR_11, VAR_13, VAR_14);
   FUNC_1(VAR_18);
  }
 }
 return VAR_15;
}

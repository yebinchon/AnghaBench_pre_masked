
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PKULL_M_REGISTRY_HANDLE ;
typedef scalar_t__* LPBYTE ;
typedef int HKEY ;
typedef size_t DWORD ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,size_t*,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *,char*,size_t*) ;

BOOL FUNC_6(PKULL_M_REGISTRY_HANDLE VAR_6, HKEY VAR_7, LPBYTE VAR_8)
{
 BOOL VAR_9 = VAR_3;
 DWORD VAR_10;
 HKEY VAR_11;
 wchar_t VAR_12[8 + 1];
 DWORD VAR_13;
 BYTE VAR_14[VAR_2];

 for(VAR_10 = 0 ; (VAR_10 < FUNC_0(VAR_4)) && VAR_9; VAR_10++)
 {
  VAR_9 = VAR_0;
  if(FUNC_3(VAR_6, VAR_7, VAR_4[VAR_10], 0, VAR_1, &VAR_11))
  {
   VAR_13 = 8 + 1;
   if(FUNC_4(VAR_6, VAR_11, VAR_12, &VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
    VAR_9 = FUNC_5(VAR_12, L"%x", (DWORD *) &VAR_14[VAR_10*sizeof(DWORD)]) != -1;
   FUNC_2(VAR_6, VAR_11);
  }
  else FUNC_1(L"LSA Key Class read error\n");
 }

 if(VAR_9)
  for(VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
   VAR_8[VAR_10] = VAR_14[VAR_5[VAR_10]];

 return VAR_9;
}

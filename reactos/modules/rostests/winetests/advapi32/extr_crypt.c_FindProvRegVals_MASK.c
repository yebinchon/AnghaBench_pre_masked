
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,int *,int *,int *,int*,int*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_5 (int ,char*,int *,int *,int ,int*) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_6(DWORD VAR_4, DWORD *VAR_5, LPSTR *VAR_6,
       DWORD *VAR_7, DWORD *VAR_8)
{
 HKEY VAR_9;
 HKEY VAR_10;
 DWORD VAR_11 = sizeof(DWORD);

 if (FUNC_3(VAR_1, "Software\\Microsoft\\Cryptography\\Defaults\\Provider", &VAR_9))
  return VAR_0;

 FUNC_4(VAR_9, ((void*)0), ((void*)0), ((void*)0), VAR_8, VAR_7,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 (*VAR_7)++;

 if (!(*VAR_6 = FUNC_0(VAR_2, *VAR_7)))
  return VAR_0;

 FUNC_2(VAR_9, VAR_4, *VAR_6, VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 (*VAR_7)++;

 FUNC_3(VAR_9, *VAR_6, &VAR_10);
 FUNC_5(VAR_10, "Type", ((void*)0), ((void*)0), (LPBYTE)VAR_5, &VAR_11);

 FUNC_1(VAR_10);
 FUNC_1(VAR_9);

 return VAR_3;
}

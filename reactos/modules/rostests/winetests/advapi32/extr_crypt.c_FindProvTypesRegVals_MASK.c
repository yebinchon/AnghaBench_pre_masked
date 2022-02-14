
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PSTR ;
typedef char* LPSTR ;
typedef int * LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *,int *,int*,int*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int ,char*,int *,int *,int *,int*) ;
 int VAR_3 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static BOOL FUNC_8(DWORD *VAR_4, DWORD *VAR_5, LPSTR *VAR_6,
     DWORD *VAR_7, DWORD *VAR_8)
{
 HKEY VAR_9;
 HKEY VAR_10;
 PSTR VAR_11;
 LPSTR VAR_12;
 DWORD VAR_13;
 BOOL VAR_14 = VAR_0;

 if (FUNC_4(VAR_1, "Software\\Microsoft\\Cryptography\\Defaults\\Provider Types", &VAR_9))
  return VAR_0;

 if (FUNC_5(VAR_9, ((void*)0), ((void*)0), ((void*)0), VAR_8, &VAR_13, ((void*)0),
   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
  goto cleanup;
 VAR_13++;

 if (!(VAR_12 = FUNC_0(VAR_2, VAR_13)))
  goto cleanup;

 while (!FUNC_3(VAR_9, *VAR_4, VAR_12, &VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
 {
  VAR_13++;
  VAR_11 = VAR_12 + FUNC_7(VAR_12);

  *VAR_5 = *(--VAR_11) - '0';
  *VAR_5 += (*(--VAR_11) - '0') * 10;
  *VAR_5 += (*(--VAR_11) - '0') * 100;

  if (FUNC_4(VAR_9, VAR_12, &VAR_10))
   break;

  if (!FUNC_6(VAR_10, "TypeName", ((void*)0), ((void*)0), ((void*)0), VAR_7))
  {
   if (!(*VAR_6 = FUNC_0(VAR_2, *VAR_7)))
    break;

   if (!FUNC_6(VAR_10, "TypeName", ((void*)0), ((void*)0), (LPBYTE)*VAR_6, VAR_7))
   {
    VAR_14 = VAR_3;
    break;
   }

   FUNC_1(*VAR_6);
  }

  FUNC_2(VAR_10);

  (*VAR_4)++;
 }
 FUNC_2(VAR_10);
 FUNC_1(VAR_12);

cleanup:
 FUNC_2(VAR_9);

 return VAR_14;
}

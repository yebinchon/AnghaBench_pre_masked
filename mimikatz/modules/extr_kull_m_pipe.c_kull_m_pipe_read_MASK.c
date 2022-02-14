
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPBYTE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int,int*,int *) ;
 int FUNC_5 (int *,int *,int) ;

BOOL FUNC_6(HANDLE VAR_3, LPBYTE *VAR_4, DWORD *VAR_5)
{
 BOOL VAR_6 = VAR_1;
 DWORD VAR_7, VAR_8 = 0;
 BYTE * VAR_9 = ((void*)0); DWORD VAR_10 = 0;

 *VAR_5 = 0;
 *VAR_4 = ((void*)0);
 do
 {
  if(*VAR_4)
  {
   VAR_9 = *VAR_4;
   VAR_10 = VAR_8;
  }

  VAR_8 += 2048;
  if((*VAR_4 = (BYTE *) FUNC_1(VAR_2, VAR_8)))
  {
   if(VAR_9)
   {
    FUNC_5(*VAR_4, VAR_9, VAR_10);
    VAR_9 = (BYTE *) FUNC_2(VAR_9);
   }

   if((VAR_6 = FUNC_4(VAR_3, *VAR_4 + VAR_10, 2048, &VAR_7, ((void*)0))))
   {
    *VAR_5 = VAR_10 + VAR_7;
    break;
   }
  }
 } while(FUNC_0() == VAR_0);

 if(!VAR_6)
 {
  FUNC_3(L"ReadFile");
  *VAR_4 = (BYTE *) FUNC_2(*VAR_4);
  *VAR_5 = 0;
 }
 return VAR_6;
}

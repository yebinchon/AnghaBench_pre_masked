
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PSTR ;
typedef int * LPBYTE ;
typedef int HCRYPTPROV ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*) ;

BOOL FUNC_6(HCRYPTPROV VAR_6)
{
 BOOL VAR_7 = VAR_1;
 DWORD VAR_8, VAR_9 = 0;
 PSTR VAR_10, VAR_11;
 if(FUNC_1(VAR_6, VAR_3, ((void*)0), &VAR_9, 0))
 {
  if((VAR_10 = (PSTR) FUNC_3(VAR_2, VAR_9)))
  {
   if(FUNC_1(VAR_6, VAR_3, (LPBYTE) VAR_10, &VAR_9, 0))
   {
    if(FUNC_1(VAR_6, VAR_4, ((void*)0), &VAR_9, 0))
    {
     if((VAR_11 = (PSTR) FUNC_3(VAR_2, VAR_9)))
     {
      if(FUNC_1(VAR_6, VAR_4, (LPBYTE) VAR_11, &VAR_9, 0))
      {
       VAR_9 = sizeof(DWORD);
       if(FUNC_1(VAR_6, VAR_5, (LPBYTE) &VAR_8, &VAR_9, 0))
       {
        FUNC_2(VAR_6, 0);
        VAR_7 = FUNC_0(&VAR_6, VAR_10, VAR_11, VAR_8, VAR_0);
       }
      }
      FUNC_4(VAR_11);
     }
    }
    FUNC_4(VAR_10);
   }
  }
 }
 if(!VAR_7)
  FUNC_5(L"CryptGetProvParam/CryptAcquireContextA");
 return VAR_7;
}

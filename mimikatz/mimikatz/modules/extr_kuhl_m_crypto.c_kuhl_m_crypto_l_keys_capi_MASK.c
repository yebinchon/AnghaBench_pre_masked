
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef char* LPCWSTR ;
typedef int HCRYPTPROV ;
typedef scalar_t__ HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*,char*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int*,int) ;
 int FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 () ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,scalar_t__,int,char*,int,char*) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int) ;
 char* FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*) ;

void FUNC_16(LPCWSTR VAR_9, LPCWSTR VAR_10, DWORD VAR_11, DWORD VAR_12, BOOL VAR_13, LPCWSTR VAR_14)
{
 HCRYPTPROV VAR_15, VAR_16;
 HCRYPTKEY VAR_17;
 DWORD VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = VAR_2, VAR_23 = VAR_9 ? (DWORD) FUNC_15(VAR_9) : 0, VAR_24;
 BOOL VAR_25;
 char *VAR_26, *VAR_27;
 wchar_t *VAR_28, *VAR_29;

 if(FUNC_0(&VAR_15, VAR_9, VAR_10, VAR_11, VAR_4 | VAR_12))
 {
  VAR_25 = FUNC_2(VAR_15, VAR_7, ((void*)0), &VAR_19, VAR_22);
  if((VAR_26 = (char *) FUNC_6(VAR_6, VAR_19)))
  {
   VAR_18 = 0;
   while(VAR_25)
   {
    if((VAR_25 = (FUNC_2(VAR_15, VAR_7, (BYTE *) VAR_26, &VAR_19, VAR_22))))
    {
     if((VAR_28 = FUNC_14(VAR_26)))
     {
      FUNC_10(L"    %u. %s\n", VAR_18, VAR_28);
      VAR_24 = (DWORD) FUNC_15(VAR_28);

      if((VAR_29 = (wchar_t *) FUNC_6(VAR_6, (VAR_23 + VAR_24 + 1) * sizeof(wchar_t))))
      {
       if(VAR_23)
        FUNC_9(VAR_29, VAR_9, VAR_23 * sizeof(wchar_t));
       FUNC_9(VAR_29 + VAR_23, VAR_28, VAR_24 * sizeof(wchar_t));

       if(FUNC_0(&VAR_16, VAR_29, VAR_10, VAR_11, VAR_12))
       {
        if(FUNC_2(VAR_16, VAR_8, ((void*)0), &VAR_20, 0))
        {
         if((VAR_27 = (char *) FUNC_6(VAR_6, VAR_20)))
         {
          if(FUNC_2(VAR_16, VAR_8, (BYTE *) VAR_27, &VAR_20, 0))
           FUNC_10(L"    %S\n", VAR_27);
          FUNC_7(VAR_27);
         }
        }

        for(VAR_21 = VAR_0, VAR_17 = 0; (VAR_21 <= VAR_1) && !FUNC_3(VAR_16, VAR_21, &VAR_17); VAR_21++);
        if(VAR_17)
        {
         FUNC_10(L"\tType           : %s (0x%08x)\n", FUNC_13(VAR_21), VAR_21);
         FUNC_12(0, VAR_17);
         if(VAR_13)
          FUNC_11(0, VAR_17, VAR_21, VAR_14, VAR_18, VAR_28);
         FUNC_1(VAR_17);
        }
        else FUNC_8(L"CryptGetUserKey");
       }
       FUNC_7(VAR_29);
      }
      FUNC_10(L"\n");
      FUNC_7(VAR_28);
     }
    }
    VAR_22 = VAR_3;
    VAR_18++;
   }
   if(FUNC_5() != VAR_5)
    FUNC_8(L"CryptGetProvParam");

   FUNC_4(VAR_15, 0);
   FUNC_7(VAR_26);
  }
 }
 else FUNC_8(L"CryptAcquireContext");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int SCARDHANDLE ;
typedef int SCARDCONTEXT ;
typedef scalar_t__* PBYTE ;
typedef int NTSTATUS ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__ LONG ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int ,int,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__*,int *,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__*,int *) ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int ,int ,int ,int *) ;
 int FUNC_13 (scalar_t__*,scalar_t__*,int ,int ,int *) ;
 int FUNC_14 (scalar_t__*,int ,int ,scalar_t__*,scalar_t__*,int ) ;
 scalar_t__* FUNC_15 (scalar_t__*) ;
 int FUNC_16 (int ,scalar_t__*) ;
 int FUNC_17 (scalar_t__*) ;
 int FUNC_18 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_19 (scalar_t__*) ;

NTSTATUS FUNC_20(int VAR_18, wchar_t * VAR_19[])
{
 SCARDCONTEXT VAR_20;
 SCARDHANDLE VAR_21;
 PBYTE VAR_22;
 LONG VAR_23;
 LPWSTR VAR_24 = ((void*)0), VAR_25, VAR_26 = ((void*)0), VAR_27, VAR_28 = ((void*)0), VAR_29;
 DWORD VAR_30 = VAR_5, VAR_31;

 VAR_23 = FUNC_4(VAR_13, ((void*)0), ((void*)0), &VAR_20);
 if(VAR_23 == VAR_15)
 {
  VAR_23 = FUNC_9(VAR_20, VAR_3, (LPWSTR) &VAR_24, &VAR_30);
  if(VAR_23 == VAR_15)
  {
   FUNC_11(L"SmartCard readers:");
   for(VAR_25 = VAR_24; *VAR_25; VAR_25 += FUNC_19(VAR_25) + 1)
   {
    FUNC_11(L"\n * %s\n", VAR_25);
    FUNC_16(VAR_20, VAR_25);
    if((VAR_29 = FUNC_15(VAR_25)))
    {
     VAR_23 = FUNC_2(VAR_20, VAR_25, VAR_14, VAR_7 | VAR_8, &VAR_21, &VAR_30);
     if(VAR_23 == VAR_15)
     {
      VAR_31 = VAR_5;
      VAR_23 = FUNC_6(VAR_21, VAR_4, (PBYTE) &VAR_22, &VAR_31);
      if(VAR_23 == VAR_15)
      {
       FUNC_11(L"   ATR  : ");
       FUNC_18(VAR_22, VAR_31, 0);
       FUNC_11(L"\n");
       VAR_30 = VAR_5;
       VAR_23 = FUNC_8(VAR_20, VAR_22, ((void*)0), 0, (LPWSTR) &VAR_26, &VAR_30);
       if(VAR_23 == VAR_15)
       {
        for(VAR_27 = VAR_26; VAR_27 && *VAR_27; VAR_27 += FUNC_19(VAR_27) + 1)
        {
         FUNC_11(L"   Model: %s\n", VAR_27);

         VAR_30 = VAR_5;
         VAR_23 = FUNC_7(VAR_20, VAR_27, VAR_12, (LPWSTR) &VAR_28, &VAR_30);
         if(VAR_23 == VAR_15)
         {
          FUNC_11(L"   PRIM : %s\n", VAR_28);
          FUNC_5(VAR_20, VAR_28);
         }
         else if(VAR_23 != VAR_1) FUNC_1(L"SCardGetCardTypeProviderName(PRIM): 0x%08x\n", VAR_23);

         VAR_30 = VAR_5;
         VAR_23 = FUNC_7(VAR_20, VAR_27, VAR_10, (LPWSTR) &VAR_28, &VAR_30);
         if(VAR_23 == VAR_15)
         {
          FUNC_11(L"   CSP  : %s\n", VAR_28);
          if((VAR_30 = FUNC_17(VAR_28)))
           FUNC_12(VAR_29, VAR_28, VAR_30, VAR_0, VAR_2, ((void*)0));
          FUNC_5(VAR_20, VAR_28);
         }
         else if(VAR_23 != VAR_1) FUNC_1(L"SCardGetCardTypeProviderName(CSP): 0x%08x\n", VAR_23);

         VAR_30 = VAR_5;
         VAR_23 = FUNC_7(VAR_20, VAR_27, VAR_11, (LPWSTR) &VAR_28, &VAR_30);
         if(VAR_23 == VAR_15)
         {
          FUNC_11(L"   KSP  : %s\n", VAR_28);
          FUNC_13(VAR_29, VAR_28, 0, VAR_2, ((void*)0));
          FUNC_5(VAR_20, VAR_28);
         }
         else if(VAR_23 != VAR_1) FUNC_1(L"SCardGetCardTypeProviderName(KSP): 0x%08x\n", VAR_23);

         VAR_30 = VAR_5;
         VAR_23 = FUNC_7(VAR_20, VAR_27, VAR_9, (LPWSTR) &VAR_28, &VAR_30);
         if(VAR_23 == VAR_15)
         {
          FUNC_11(L"   MDRV : %s\n", VAR_28);
          FUNC_14(VAR_28, VAR_20, VAR_21, VAR_27, VAR_22, VAR_31);
          FUNC_5(VAR_20, VAR_28);
         }
         else if(VAR_23 != VAR_1) FUNC_1(L"SCardGetCardTypeProviderName(MDR): 0x%08x\n", VAR_23);
        }
        FUNC_5(VAR_20, VAR_26);
       }
       else FUNC_1(L"SCardListCards: 0x%08x\n", VAR_23);
       FUNC_5(VAR_20, VAR_22);
      }
      else FUNC_1(L"SCardGetAttrib: 0x%08x (%u)\n", VAR_23, VAR_31);
      FUNC_3(VAR_21, VAR_6);
     }
     else if(VAR_23 != VAR_16)
      FUNC_1(L"SCardConnect: 0x%08x\n", VAR_23);
     FUNC_0(VAR_29);
    }
   }
   FUNC_5(VAR_20, VAR_24);
  }
  else FUNC_1(L"SCardListReaders: 0x%08x\n", VAR_23);
  FUNC_10(VAR_20);
 }
 else FUNC_1(L"SCardEstablishContext: 0x%08x\n", VAR_23);
 return VAR_17;
}

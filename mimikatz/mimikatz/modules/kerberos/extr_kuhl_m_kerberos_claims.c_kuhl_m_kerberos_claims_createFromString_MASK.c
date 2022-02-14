
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int ulClaimsCount; TYPE_3__* ClaimEntries; int usClaimsSourceType; } ;
struct TYPE_10__ {int ulClaimsArrayCount; TYPE_5__* ClaimsArrays; } ;
struct TYPE_7__ {int ValueCount; void** StringValues; } ;
struct TYPE_8__ {TYPE_1__ cs; } ;
struct TYPE_9__ {TYPE_2__ Values; void* Id; int Type; } ;
typedef int * PWCHAR ;
typedef TYPE_3__* PCLAIM_ENTRY ;
typedef TYPE_4__* PCLAIMS_SET ;
typedef TYPE_5__* PCLAIMS_ARRAY ;
typedef void* LPWSTR ;
typedef int * LPCWCHAR ;
typedef size_t DWORD ;
typedef int CLAIM_ENTRY ;
typedef int CLAIMS_SET ;
typedef int CLAIMS_ARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,int **) ;

PCLAIMS_SET FUNC_4(LPCWCHAR VAR_3)
{
 PCLAIMS_SET VAR_4 = ((void*)0);
 PWCHAR VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 DWORD VAR_16, VAR_17, VAR_18;

 if((VAR_4 = (PCLAIMS_SET) FUNC_0(VAR_2, sizeof(CLAIMS_SET))))
 {
  if((VAR_5 = FUNC_1(VAR_3)))
  {
   for(VAR_8 = ((void*)0), VAR_9 = FUNC_3(VAR_5, L";", &VAR_8); VAR_9; VAR_9 = FUNC_3(((void*)0), L";", &VAR_8))
    VAR_4->ulClaimsArrayCount++;
   FUNC_2(VAR_5);
  }
  if((VAR_4->ClaimsArrays = (PCLAIMS_ARRAY) FUNC_0(VAR_2, sizeof(CLAIMS_ARRAY) * VAR_4->ulClaimsArrayCount)))
  {
   if((VAR_5 = FUNC_1(VAR_3)))
   {
    for(VAR_8 = ((void*)0), VAR_16 = 0, VAR_9 = FUNC_3(VAR_5, L";", &VAR_8); VAR_9; VAR_16++, VAR_9 = FUNC_3(((void*)0), L";", &VAR_8))
    {
     VAR_4->ClaimsArrays[VAR_16].usClaimsSourceType = VAR_0;
     if((VAR_6 = FUNC_1(VAR_9)))
     {
      for(VAR_10 = ((void*)0), VAR_11 = FUNC_3(VAR_6, L",", &VAR_10); VAR_11; VAR_11 = FUNC_3(((void*)0), L",", &VAR_10))
       VAR_4->ClaimsArrays[VAR_16].ulClaimsCount++;
      FUNC_2(VAR_6);
     }
     if((VAR_4->ClaimsArrays[VAR_16].ClaimEntries = (PCLAIM_ENTRY) FUNC_0(VAR_2, sizeof(CLAIM_ENTRY) * VAR_4->ClaimsArrays[VAR_16].ulClaimsCount)))
     {
      for(VAR_10 = ((void*)0), VAR_17 = 0, VAR_11 = FUNC_3(VAR_9, L",", &VAR_10); VAR_11; VAR_17++, VAR_11 = FUNC_3(((void*)0), L",", &VAR_10))
      {
       VAR_4->ClaimsArrays[VAR_16].ClaimEntries[VAR_17].Type = VAR_1;
       VAR_12 = ((void*)0);
       if((VAR_13 = FUNC_3(VAR_11, L"=", &VAR_12)))
       {
        if((VAR_4->ClaimsArrays[VAR_16].ClaimEntries[VAR_17].Id = FUNC_1(VAR_13)))
        {
         if((VAR_13 = FUNC_3(((void*)0), L"=", &VAR_12)))
         {
          if((VAR_7 = FUNC_1(VAR_13)))
          {
           for(VAR_14 = ((void*)0), VAR_15 = FUNC_3(VAR_7, L"|", &VAR_14); VAR_15; VAR_15 = FUNC_3(((void*)0), L"|", &VAR_14))
            VAR_4->ClaimsArrays[VAR_16].ClaimEntries[VAR_17].Values.cs.ValueCount++;
           FUNC_2(VAR_7);
          }
          if((VAR_4->ClaimsArrays[VAR_16].ClaimEntries[VAR_17].Values.cs.StringValues = (LPWSTR *) FUNC_0(VAR_2, sizeof(LPWSTR) * VAR_4->ClaimsArrays[VAR_16].ClaimEntries[VAR_17].Values.cs.ValueCount)))
           for(VAR_14 = ((void*)0), VAR_18 = 0, VAR_15 = FUNC_3(VAR_13, L"|", &VAR_14); VAR_15; VAR_18++, VAR_15 = FUNC_3(((void*)0), L"|", &VAR_14))
            VAR_4->ClaimsArrays[VAR_16].ClaimEntries[VAR_17].Values.cs.StringValues[VAR_18] = FUNC_1(VAR_15);
         }
        }
       }
      }
     }
    }
    FUNC_2(VAR_5);
   }
  }
 }
 return VAR_4;
}

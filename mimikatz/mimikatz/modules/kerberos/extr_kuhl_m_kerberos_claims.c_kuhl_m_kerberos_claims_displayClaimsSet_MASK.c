
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {size_t ulClaimsArrayCount; TYPE_7__* ClaimsArrays; } ;
struct TYPE_16__ {size_t usClaimsSourceType; size_t ulClaimsCount; TYPE_6__* ClaimEntries; } ;
struct TYPE_13__ {size_t* BooleanValues; } ;
struct TYPE_12__ {size_t* StringValues; } ;
struct TYPE_11__ {size_t* Uint64Values; } ;
struct TYPE_10__ {size_t ValueCount; size_t* Int64Values; } ;
struct TYPE_14__ {TYPE_4__ cb; TYPE_3__ cs; TYPE_2__ cui64; TYPE_1__ ci64; } ;
struct TYPE_15__ {size_t Id; int Type; TYPE_5__ Values; } ;
typedef TYPE_8__* PCLAIMS_SET ;
typedef size_t DWORD ;






 int FUNC_0 (char*,size_t) ;

void FUNC_1(PCLAIMS_SET VAR_0)
{
 DWORD VAR_1, VAR_2, VAR_3;
 for(VAR_1 = 0; VAR_1 < VAR_0->ulClaimsArrayCount; VAR_1++)
 {
  FUNC_0(L"Claims[%u]\n", VAR_1);
  FUNC_0(L"  SourceType: %hu\n", VAR_0->ClaimsArrays[VAR_1].usClaimsSourceType);
  for(VAR_2 = 0; VAR_2 < VAR_0->ClaimsArrays[VAR_1].ulClaimsCount; VAR_2++)
  {
   FUNC_0(L"  Entries[%u]\n", VAR_2);
   FUNC_0(L"    Id: %s\n", VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Id);
   for(VAR_3 = 0; VAR_3 < VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Values.ci64.ValueCount; VAR_3++)
   {
    switch(VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Type)
    {
    case 130:
     FUNC_0(L"    [INT64 ] %ll\n", VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Values.ci64.Int64Values[VAR_3]);
     break;
    case 128:
     FUNC_0(L"    [UINT64] %ull\n", VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Values.cui64.Uint64Values[VAR_3]);
     break;
    case 129:
     FUNC_0(L"    [STRING] %s\n", VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Values.cs.StringValues[VAR_3]);
     break;
    case 131:
     FUNC_0(L"    [BOOL  ] %016llx\n", VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Values.cb.BooleanValues[VAR_3]);
     break;
    default:
     FUNC_0(L"    [!%hu!]\n", VAR_0->ClaimsArrays[VAR_1].ClaimEntries[VAR_2].Type);
    }
   }
  }
 }
}

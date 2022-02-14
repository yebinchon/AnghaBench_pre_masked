
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_6__ {int SEL_RES; int ATSLength; int ATS; int NFCIDLength; int NFCID1; int SENS_RES; } ;
struct TYPE_7__ {TYPE_1__ TypeA; } ;
struct TYPE_8__ {size_t BrTy; TYPE_2__ Target; int Tg; } ;
typedef TYPE_3__* PPN532_TARGET ;
typedef int * PBYTE ;
typedef int NTSTATUS ;
typedef size_t BYTE ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int,int ,int *,int ,size_t*,TYPE_3__**) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int) ;

NTSTATUS FUNC_7(int VAR_3, wchar_t * VAR_4[])
{
 BYTE VAR_5, VAR_6;
 PPN532_TARGET VAR_7;

 FUNC_5(&VAR_2, 0);
 if(FUNC_4(&VAR_2, 2, 0 , ((void*)0), 0, &VAR_6, &VAR_7))
 {
  for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  {
   FUNC_3(L"\nTarget: %hhu (0x%02x - %s)\n", VAR_7[VAR_5].Tg, VAR_7[VAR_5].BrTy, (VAR_7[VAR_5].BrTy < FUNC_0(VAR_0)) ? VAR_0[VAR_7[VAR_5].BrTy] : L"?");
   switch(VAR_7[VAR_5].BrTy)
   {
   case 0:
    FUNC_3(L"  SENS_RES: %02x %02x\n  SEL_RES : %02x\n    UID %scomplete\n    PICC %scompliant with ISO/IEC 14443-4\n    PICC %scompliant with ISO/IEC 18092 (NFC)\n",
     ((PBYTE) &VAR_7[VAR_5].Target.TypeA.SENS_RES)[0], ((PBYTE) &VAR_7[VAR_5].Target.TypeA.SENS_RES)[1], VAR_7[VAR_5].Target.TypeA.SEL_RES, (VAR_7[VAR_5].Target.TypeA.SEL_RES & 0x04) ? L"NOT " : L"", (VAR_7[VAR_5].Target.TypeA.SEL_RES & 0x20) ? L"" : L"NOT ", (VAR_7[VAR_5].Target.TypeA.SEL_RES & 0x40) ? L"" : L"NOT ");
    if(VAR_7[VAR_5].Target.TypeA.NFCIDLength && VAR_7[VAR_5].Target.TypeA.NFCID1)
    {
     FUNC_3(L"  NFCID1  : ");
     FUNC_6(VAR_7[VAR_5].Target.TypeA.NFCID1, VAR_7[VAR_5].Target.TypeA.NFCIDLength, 1);
     FUNC_3(L"\n");
    }
    if(VAR_7[VAR_5].Target.TypeA.ATSLength && VAR_7[VAR_5].Target.TypeA.ATS)
    {
     FUNC_3(L"  ATS     : ");
     FUNC_6(VAR_7[VAR_5].Target.TypeA.ATS, VAR_7[VAR_5].Target.TypeA.ATSLength, 1);
     FUNC_3(L"\n");
    }
    break;
   default:
    FUNC_2(L"Only BrTy = 0 (TypeA) at this time\n");
   }
  }
  FUNC_1(VAR_7);
 }
 FUNC_5(&VAR_2, 0);
 return VAR_1;
}

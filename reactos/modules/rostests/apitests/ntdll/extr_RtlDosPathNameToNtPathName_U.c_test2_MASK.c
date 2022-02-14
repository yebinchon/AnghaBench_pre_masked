
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Length; char* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int RTL_RELATIVE_NAME_U ;
typedef char* PWSTR ;
typedef int PCWSTR ;
typedef char* LPCWSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int *,int *) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (char*,char*,size_t const) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 size_t const FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(LPCWSTR VAR_1, LPCWSTR VAR_2, LPCWSTR VAR_3)
{
    UNICODE_STRING VAR_4;
    PWSTR VAR_5;
    RTL_RELATIVE_NAME_U VAR_6;
 BOOLEAN VAR_7;

 VAR_7 = FUNC_0(VAR_1, &VAR_4, (PCWSTR*)&VAR_5, &VAR_6);

 FUNC_1(VAR_7, "RtlDosPathNameToNtPathName_U failed");
 if (!VAR_7) {
  FUNC_3("input: \"%S\"\n", VAR_1);
  return;
 }
 VAR_7 = VAR_4.Length >= 8 &&
       FUNC_2(VAR_4.Buffer, L"\\??\\", 8) == 0;
 FUNC_1(VAR_7, "NtName does not start with \"\\??\\\"");
 if (!VAR_7) {
  return;
 }

 if (VAR_2) {
  PWSTR VAR_8 = VAR_4.Buffer + 4;
  const size_t VAR_9 = FUNC_6(VAR_2);
  const size_t VAR_10 = (VAR_4.Length - 8) / 2;
  VAR_7 = (VAR_9 == VAR_10) &&
        FUNC_2(VAR_8, VAR_2, VAR_9 * 2) == 0;
  FUNC_1(VAR_7, "NtName does not match expected");
  if (!VAR_7)
  {
   FUNC_3("input:  : %2Iu chars \"%S\"\n", FUNC_6(VAR_1), VAR_1);
   FUNC_3("Expected: %2Iu chars \"%S\"\n", VAR_9, VAR_2);
   FUNC_3("Actual  : %2Iu chars \"%S\"\n", VAR_10, VAR_10 ? VAR_8 : L"(null)");
   return;
  }
 } else
 if (VAR_4.Length)
 {
  PWSTR VAR_11 = VAR_4.Buffer + 4;
  const size_t VAR_12 = (VAR_4.Length - 8) / 2;
  FUNC_1(VAR_0, "Unexpected NtName (expected NULL)");
  FUNC_3("input:  : %2Iu chars \"%S\"\n", FUNC_6(VAR_1), VAR_1);
  FUNC_3("Actual  : %2Iu chars \"%S\"\n", VAR_12, VAR_11);
 }

 if (VAR_3) {
  const size_t VAR_13 = FUNC_6(VAR_3);
  const size_t VAR_14 = VAR_5 ? FUNC_6(VAR_5) : 0;
  VAR_7 = (VAR_13 == VAR_14) &&
        FUNC_5(VAR_5, VAR_3) == 0;
  FUNC_1(VAR_7, "PartName does not match expected");
  if (!VAR_7) {
   FUNC_3("input:  : %2Iu chars \"%S\"\n", FUNC_6(VAR_1), VAR_1);
   FUNC_3("Expected: %2Iu chars \"%S\"\n", VAR_13, VAR_3);
   FUNC_3("Actual  : %2Iu chars \"%S\"\n", VAR_14, VAR_14 ? VAR_5 : L"(null)");
   return;
  }
 } else
 if (VAR_5)
 {
  FUNC_1(VAR_0, "Unexpected PartName (expected NULL).");
  FUNC_3("input:  : %2Iu chars \"%S\"\n", FUNC_6(VAR_1), VAR_1);
  FUNC_3("Actual  : %2Iu chars %S\n", FUNC_6(VAR_5), VAR_5);
 }
}

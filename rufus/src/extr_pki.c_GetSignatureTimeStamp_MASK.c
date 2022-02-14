
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef long long uint64_t ;
typedef int * PVOID ;
typedef char* PCMSG_SIGNER_INFO ;
typedef int * HMODULE ;
typedef int * HCRYPTMSG ;
typedef int * HCERTSTORE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int ,scalar_t__*,scalar_t__*,scalar_t__*,int **,int **,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,char*,scalar_t__) ;
 int * FUNC_6 (int *) ;
 long long FUNC_7 (char*) ;
 long long FUNC_8 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (long long) ;
 int FUNC_10 () ;
 int FUNC_11 (long long) ;
 char* FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 char* FUNC_15 (char const*) ;
 char* FUNC_16 (char*) ;

uint64_t FUNC_17(const char* VAR_6)
{
 char *VAR_7 = ((void*)0);
 BOOL VAR_8;
 HMODULE VAR_9;
 HCERTSTORE VAR_10 = ((void*)0);
 HCRYPTMSG VAR_11 = ((void*)0);
 DWORD VAR_12, VAR_13, VAR_14, VAR_15;
 PCMSG_SIGNER_INFO VAR_16 = ((void*)0);
 DWORD VAR_17 = 0;
 wchar_t *VAR_18;
 uint64_t VAR_19 = 0ULL, VAR_20;


 if (VAR_6 == ((void*)0)) {
  VAR_18 = FUNC_12(VAR_5, sizeof(wchar_t));
  if (VAR_18 == ((void*)0))
   goto out;
  VAR_9 = FUNC_6(((void*)0));
  if (VAR_9 == ((void*)0)) {
   FUNC_14("PKI: Could not get current executable handle: %s", FUNC_10());
   goto out;
  }
  VAR_12 = FUNC_5(VAR_9, VAR_18, VAR_5);
  if ((VAR_12 == 0) || ((VAR_12 == VAR_5) && (FUNC_4() == VAR_4))) {
   FUNC_14("PKI: Could not get module filename: %s", FUNC_10());
   goto out;
  }
  VAR_7 = FUNC_16(VAR_18);
 } else {
  VAR_18 = FUNC_15(VAR_6);
 }


 VAR_8 = FUNC_3(VAR_2, VAR_18,
  VAR_0, VAR_1,
  0, &VAR_13, &VAR_14, &VAR_15, &VAR_10, &VAR_11, ((void*)0));
 if (!VAR_8) {
  FUNC_14("PKI: Failed to get signature for '%s': %s", (VAR_6==((void*)0))?VAR_7:VAR_6, FUNC_10());
  goto out;
 }


 VAR_8 = FUNC_2(VAR_11, VAR_3, 0, ((void*)0), &VAR_17);
 if (!VAR_8) {
  FUNC_14("PKI: Failed to get signer size: %s", FUNC_10());
  goto out;
 }


 VAR_16 = (PCMSG_SIGNER_INFO)FUNC_12(VAR_17, 1);
 if (!VAR_16) {
  FUNC_14("PKI: Could not allocate memory for signer information");
  goto out;
 }


 VAR_8 = FUNC_2(VAR_11, VAR_3, 0, (PVOID)VAR_16, &VAR_17);
 if (!VAR_8) {
  FUNC_14("PKI: Failed to get signer information: %s", FUNC_10());
  goto out;
 }


 VAR_19 = FUNC_8(VAR_16);
 if (VAR_19)
  FUNC_14("Note: '%s' has timestamp %s", (VAR_6==((void*)0))?VAR_7:VAR_6, FUNC_9(VAR_19));
 VAR_20 = FUNC_7(VAR_16);
 if (VAR_20)
  FUNC_14("Note: '%s' has nested timestamp %s", (VAR_6==((void*)0))?VAR_7:VAR_6, FUNC_9(VAR_20));
 if ((VAR_19 != 0ULL) && (VAR_20 != 0ULL)) {
  if (FUNC_11(VAR_20 - VAR_19) > 100) {
   FUNC_14("PKI: Signature timestamp and nested timestamp differ by more than a minute. "
    "This could indicate something very nasty...", VAR_19, VAR_20);
   VAR_19 = 0ULL;
  }
 }

out:
 FUNC_13(VAR_7);
 FUNC_13(VAR_18);
 FUNC_13(VAR_16);
 if (VAR_10 != ((void*)0))
  FUNC_0(VAR_10, 0);
 if (VAR_11 != ((void*)0))
  FUNC_1(VAR_11);
 return VAR_19;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int si ;
struct TYPE_9__ {int hThread; int hProcess; int member_0; } ;
struct TYPE_8__ {int member_0; int member_2; int * member_1; } ;
struct TYPE_7__ {int cb; int dwFlags; void* hStdError; void* hStdOutput; int wShowWindow; int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_3__ PROCESS_INFORMATION ;
typedef void* HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void**,void**,TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int *,char const*,int *,int *,int ,int,int *,char const*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (void*,int *,scalar_t__,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_6 (void*,char*,scalar_t__,scalar_t__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (char*,...) ;

DWORD FUNC_14(const char* VAR_11, const char* VAR_12, BOOL VAR_13)
{
 DWORD VAR_14, VAR_15, VAR_16, VAR_17 = 4096;
 STARTUPINFOA VAR_18 = {0};
 PROCESS_INFORMATION VAR_19 = {0};
 SECURITY_ATTRIBUTES VAR_20 = { sizeof(SECURITY_ATTRIBUTES), ((void*)0), &VAR_9 };
 HANDLE VAR_21 = VAR_2, VAR_22 = VAR_2;
 static char* VAR_23;

 VAR_18.cb = sizeof(VAR_18);
 if (VAR_13) {


  if (!FUNC_1(&VAR_21, &VAR_22, &VAR_20, VAR_17)) {
   VAR_14 = FUNC_4();
   FUNC_13("Could not set commandline pipe: %s", FUNC_9());
   goto out;
  }
  VAR_18.dwFlags = VAR_6 | VAR_7 | VAR_4 | VAR_5;
  VAR_18.wShowWindow = VAR_8;
  VAR_18.hStdOutput = VAR_22;
  VAR_18.hStdError = VAR_22;
 }

 if (!FUNC_2(((void*)0), VAR_11, ((void*)0), ((void*)0), VAR_9,
  VAR_3 | VAR_0, ((void*)0), VAR_12, &VAR_18, &VAR_19)) {
  VAR_14 = FUNC_4();
  FUNC_13("Unable to launch command '%s': %s", VAR_11, FUNC_9());
  goto out;
 }

 if (VAR_13) {
  while (1) {

   if (FUNC_5(VAR_21, ((void*)0), VAR_17, ((void*)0), &VAR_16, ((void*)0))) {
    if (VAR_16 != 0) {
     VAR_23 = FUNC_11(VAR_16 + 1);
     if ((VAR_23 != ((void*)0)) && (FUNC_6(VAR_21, VAR_23, VAR_16, &VAR_15, ((void*)0))) && (VAR_15 != 0)) {
      VAR_23[VAR_16] = 0;

      FUNC_13(VAR_23);
     }
     FUNC_10(VAR_23);
    }
   }
   if (FUNC_8(VAR_19.hProcess, 0) == VAR_10)
    break;
   FUNC_7(100);
  };
 } else {
  FUNC_8(VAR_19.hProcess, VAR_1);
 }

 if (!FUNC_3(VAR_19.hProcess, &VAR_14))
  VAR_14 = FUNC_4();
 FUNC_0(VAR_19.hProcess);
 FUNC_0(VAR_19.hThread);

out:
 FUNC_12(VAR_22);
 FUNC_12(VAR_21);
 return VAR_14;
}

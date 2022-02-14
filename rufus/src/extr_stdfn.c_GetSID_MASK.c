
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Sid; } ;
struct TYPE_6__ {TYPE_1__ User; } ;
typedef TYPE_2__ TOKEN_USER ;
typedef int * PSID ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,char**) ;
 int FUNC_1 (char*,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_2__*,int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static PSID FUNC_11(void) {
 TOKEN_USER* VAR_3 = ((void*)0);
 DWORD VAR_4;
 HANDLE VAR_5;
 PSID VAR_6 = ((void*)0);
 char* VAR_7 = ((void*)0);

 if (!FUNC_6(FUNC_2(), VAR_1, &VAR_5)) {
  FUNC_10("OpenProcessToken failed: %s\n", FUNC_7());
  return ((void*)0);
 }

 if (!FUNC_4(VAR_5, VAR_2, VAR_3, 0, &VAR_4)) {
  if (FUNC_3() != VAR_0) {
   FUNC_10("GetTokenInformation (pre) failed: %s\n", FUNC_7());
   return ((void*)0);
  }
  VAR_3 = (TOKEN_USER*)FUNC_8(1, VAR_4);
 }
 if (VAR_3 == ((void*)0)) {
  return ((void*)0);
 }

 if (FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4, &VAR_4)) {





  if (!FUNC_0(VAR_3->User.Sid, &VAR_7)) {
   FUNC_10("Unable to convert SID to string: %s\n", FUNC_7());
   VAR_6 = ((void*)0);
  } else {
   if (!FUNC_1(VAR_7, &VAR_6)) {
    FUNC_10("Unable to convert string back to SID: %s\n", FUNC_7());
    VAR_6 = ((void*)0);
   }

   FUNC_5(VAR_7);
  }
 } else {
  VAR_6 = ((void*)0);
  FUNC_10("GetTokenInformation (real) failed: %s\n", FUNC_7());
 }
 FUNC_9(VAR_3);
 return VAR_6;
}

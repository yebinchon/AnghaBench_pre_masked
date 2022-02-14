
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int si ;
typedef int pi ;
struct TYPE_3__ {int nLength; int * lpSecurityDescriptor; int bInheritHandle; } ;
typedef char STARTUPINFO ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef char PROCESS_INFORMATION ;
typedef void* HANDLE ;
typedef int FILE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void**,void**,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int *,int *,int ,int ,int *,int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,void*,int ,void**,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (void*,char*,int,scalar_t__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (void*,int) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (char*,int,int *) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int * FUNC_15 (char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (char*,char*) ;
 char* FUNC_17 (char*,char) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static char *
FUNC_19(char *VAR_9, char *VAR_10, int VAR_11)
{

 FILE *VAR_12;


 FUNC_9(VAR_8);
 FUNC_9(VAR_7);

 VAR_6 = 0;
 if ((VAR_12 = FUNC_15(VAR_9, "r")) == ((void*)0))
 {
  FUNC_14("popen failure");
  return ((void*)0);
 }

 VAR_6 = 0;
 if (FUNC_10(VAR_10, VAR_11, VAR_12) == ((void*)0))
 {
  if (FUNC_8(VAR_12))
   FUNC_11(VAR_7, "no data was returned by command \"%s\"\n", VAR_9);
  else
   FUNC_14("fgets failure");
  FUNC_12(VAR_12);
  return ((void*)0);
 }

 if (FUNC_13(VAR_12))
  return ((void*)0);

 return VAR_10;
}

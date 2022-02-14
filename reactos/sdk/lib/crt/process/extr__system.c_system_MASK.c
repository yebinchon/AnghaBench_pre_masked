
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hProcess; scalar_t__ hThread; } ;
struct TYPE_6__ {int cb; scalar_t__ cbReserved2; int * lpReserved2; int wShowWindow; int dwFlags; int * lpReserved; } ;
typedef int StartupInfo ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int*,intptr_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (scalar_t__) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char const*) ;
 char* FUNC_14 (char*,char) ;

int FUNC_15(const char *VAR_6)
{
  char *VAR_7 = ((void*)0);
  char *VAR_8 = ((void*)0);

  PROCESS_INFORMATION VAR_9;
  STARTUPINFOA VAR_10;
  char *VAR_11;
  BOOL VAR_12;

  int VAR_13;

  VAR_8 = FUNC_7("COMSPEC");



  if (VAR_6 == ((void*)0)) {
    if (VAR_8 == ((void*)0))
      return 0;
    else
      return 1;
  }

  if (VAR_8 == ((void*)0))
    return -1;




  if (VAR_8 == ((void*)0))
  {
    VAR_8 = "cmd.exe";
  }


  VAR_11 = FUNC_9(FUNC_14(VAR_8, '\\'), FUNC_14(VAR_8, '/'));
  if (VAR_11 == ((void*)0))
    VAR_11 = VAR_8;
  else
    VAR_11++;

  VAR_7 = FUNC_8(FUNC_13(VAR_11) + 4 + FUNC_13(VAR_6) + 1);
  if (VAR_7 == ((void*)0))
  {
     FUNC_5(VAR_1);
     return -1;
  }

  FUNC_12(VAR_7, VAR_11);
  VAR_11 = FUNC_14(VAR_7, '.');
  if (VAR_11)
    *VAR_11 = 0;
  FUNC_11(VAR_7, " /C ");
  FUNC_11(VAR_7, VAR_6);



  FUNC_10 (&VAR_10, 0, sizeof(VAR_10));
  VAR_10.cb = sizeof(VAR_10);
  VAR_10.lpReserved= ((void*)0);
  VAR_10.dwFlags = VAR_3;
  VAR_10.wShowWindow = VAR_4;
  VAR_10.lpReserved2 = ((void*)0);
  VAR_10.cbReserved2 = 0;
  VAR_12 = FUNC_1(VAR_8,
                   VAR_7,
     ((void*)0),
     ((void*)0),
     VAR_5,
     VAR_0,
     ((void*)0),
     ((void*)0),
     &VAR_10,
     &VAR_9);
  FUNC_6(VAR_7);

  if (VAR_12 == VAR_2)
  {
 FUNC_4(FUNC_2());
     return -1;
  }

  FUNC_0(VAR_9.hThread);


  FUNC_3(&VAR_13,(intptr_t)VAR_9.hProcess,0);
  FUNC_0(VAR_9.hProcess);

  return VAR_13;
}

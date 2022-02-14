
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_4__ {int Attributes; int Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int LUID ;
typedef int HANDLE ;


 int FUNC_0 (int ,int,TYPE_2__*,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static bool
FUNC_11(int VAR_9)
{
 HANDLE VAR_10;
 TOKEN_PRIVILEGES VAR_11;
 LUID VAR_12;

 if (!FUNC_5(FUNC_2(), VAR_6 | VAR_7, &VAR_10))
 {
  FUNC_6(VAR_9,
    (FUNC_10("could not enable Lock Pages in Memory user right: error code %lu", FUNC_3()),
     FUNC_8("Failed system call was %s.", "OpenProcessToken")));
  return VAR_3;
 }

 if (!FUNC_4(((void*)0), VAR_4, &VAR_12))
 {
  FUNC_6(VAR_9,
    (FUNC_10("could not enable Lock Pages in Memory user right: error code %lu", FUNC_3()),
     FUNC_8("Failed system call was %s.", "LookupPrivilegeValue")));
  FUNC_1(VAR_10);
  return VAR_3;
 }
 VAR_11.PrivilegeCount = 1;
 VAR_11.Privileges[0].Luid = VAR_12;
 VAR_11.Privileges[0].Attributes = VAR_5;

 if (!FUNC_0(VAR_10, VAR_3, &VAR_11, 0, ((void*)0), ((void*)0)))
 {
  FUNC_6(VAR_9,
    (FUNC_10("could not enable Lock Pages in Memory user right: error code %lu", FUNC_3()),
     FUNC_8("Failed system call was %s.", "AdjustTokenPrivileges")));
  FUNC_1(VAR_10);
  return VAR_3;
 }

 if (FUNC_3() != VAR_2)
 {
  if (FUNC_3() == VAR_1)
   FUNC_6(VAR_9,
     (FUNC_7(VAR_0),
      FUNC_10("could not enable Lock Pages in Memory user right"),
      FUNC_9("Assign Lock Pages in Memory user right to the Windows user account which runs PostgreSQL.")));
  else
   FUNC_6(VAR_9,
     (FUNC_10("could not enable Lock Pages in Memory user right: error code %lu", FUNC_3()),
      FUNC_8("Failed system call was %s.", "AdjustTokenPrivileges")));
  FUNC_1(VAR_10);
  return VAR_3;
 }

 FUNC_1(VAR_10);

 return VAR_8;
}

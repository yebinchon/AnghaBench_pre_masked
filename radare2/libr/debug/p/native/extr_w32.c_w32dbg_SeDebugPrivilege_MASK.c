
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_4__ {scalar_t__ Attributes; int Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int LUID ;
typedef int * HANDLE ;


 scalar_t__ FUNC_0 (int *,scalar_t__,TYPE_2__*,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int ,int **) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static bool FUNC_7() {




 bool VAR_4 = 1;
 TOKEN_PRIVILEGES VAR_5;
 HANDLE VAR_6 = ((void*)0);
 LUID VAR_7;
 if (!FUNC_5 (FUNC_2 (),
   VAR_3, &VAR_6))
  return 0;

 if (!FUNC_4 (((void*)0), VAR_1, &VAR_7)) {
  FUNC_1 (VAR_6);
  return 0;
 }

 VAR_5.PrivilegeCount = 1;
 VAR_5.Privileges[0].Luid = VAR_7;
 VAR_5.Privileges[0].Attributes = VAR_2;
 if (FUNC_0 (VAR_6, VAR_0, &VAR_5, 0, ((void*)0), ((void*)0)) != VAR_0) {
  if (VAR_5.Privileges[0].Attributes == VAR_2) {

  }



 } else {
  FUNC_6 ("Failed to change token privileges 0x%x\n", (int)FUNC_3());
  VAR_4 = 0;
 }
 FUNC_1 (VAR_6);
 return VAR_4;
}

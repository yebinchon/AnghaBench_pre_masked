
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


 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

bool FUNC_6(bool VAR_6) {
 HANDLE VAR_7;
 if (!FUNC_5 (FUNC_2 (), VAR_4 | VAR_5, &VAR_7)) {
  return 0;
 }
 bool VAR_8 = 0;
 LUID VAR_9;
 if (FUNC_4 (((void*)0), VAR_2, &VAR_9)) {
  TOKEN_PRIVILEGES VAR_10;
  VAR_10.PrivilegeCount = 1;
  VAR_10.Privileges[0].Luid = VAR_9;
  VAR_10.Privileges[0].Attributes = VAR_6 ? VAR_3 : 0;
  if (FUNC_0 (VAR_7, VAR_1, &VAR_10, 0, ((void*)0), ((void*)0))) {

   VAR_8 = FUNC_3 () == VAR_0;
  }
 }
 FUNC_1 (VAR_7);
 return VAR_8;
}

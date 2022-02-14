
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tp ;
struct TYPE_5__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_4__ {int Attributes; int Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int LUID ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int,TYPE_2__*,int,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int ,int const,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
 const DWORD VAR_4 = VAR_2 | VAR_3;
 TOKEN_PRIVILEGES VAR_5;
 HANDLE VAR_6;
 LUID VAR_7;

 if (!FUNC_4(FUNC_2(), VAR_4, &VAR_6)) {
  return;
 }

 if (!!FUNC_3(((void*)0), VAR_0, &VAR_7)) {
  VAR_5.PrivilegeCount = 1;
  VAR_5.Privileges[0].Luid = VAR_7;
  VAR_5.Privileges[0].Attributes = VAR_1;

  FUNC_0(VAR_6, 0, &VAR_5, sizeof(VAR_5), ((void*)0),
          ((void*)0));
 }

 FUNC_1(VAR_6);
}

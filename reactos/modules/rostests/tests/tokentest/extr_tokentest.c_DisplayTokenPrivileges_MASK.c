
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buffer ;
typedef int WCHAR ;
struct TYPE_7__ {int LowPart; int HighPart; } ;
struct TYPE_6__ {size_t PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_5__ {int Attributes; TYPE_3__ Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef size_t DWORD ;


 int FUNC_0 (int ,TYPE_3__*,int *,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(TOKEN_PRIVILEGES* VAR_3)
{
 WCHAR VAR_4[256];
 DWORD VAR_5;

 FUNC_1("\nprivileges:\n");
 for (VAR_5 = 0; VAR_5 < VAR_3->PrivilegeCount; VAR_5++)
 {
  DWORD VAR_6 = sizeof(VAR_4) / sizeof(VAR_4[0]);
  FUNC_0(0, &VAR_3->Privileges[VAR_5].Luid, VAR_4, &VAR_6);

  FUNC_1("%S{0x%08x, 0x%08x} [", VAR_4, VAR_3->Privileges[VAR_5].Luid.HighPart, VAR_3->Privileges[VAR_5].Luid.LowPart);

  if ( VAR_3->Privileges[VAR_5].Attributes & VAR_0 )
   FUNC_1("enabled,");
  if ( VAR_3->Privileges[VAR_5].Attributes & VAR_1 )
   FUNC_1("default,");
  if ( VAR_3->Privileges[VAR_5].Attributes & VAR_2 )
   FUNC_1("used");

  FUNC_1("]\n");
 }
}

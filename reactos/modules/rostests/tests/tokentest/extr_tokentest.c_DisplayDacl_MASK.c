
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
struct TYPE_12__ {scalar_t__ AceCount; } ;
struct TYPE_9__ {scalar_t__ AceType; } ;
struct TYPE_11__ {int AccessMask; TYPE_1__ Header; } ;
typedef TYPE_3__ ROS_ACE ;
typedef scalar_t__ PSID ;
typedef TYPE_4__* PACL ;
typedef int NTSTATUS ;
typedef char* LPWSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,TYPE_3__**) ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(PACL VAR_3)
{
 DWORD VAR_4;
 NTSTATUS VAR_5;

 if ( ! VAR_3 )
 {
  FUNC_4("\nNo Default Dacl.\n");
  return;
 }

 FUNC_4("\nDacl:\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->AceCount; VAR_4++)
 {
  UNICODE_STRING VAR_6;
  ROS_ACE* VAR_7;
  LPWSTR VAR_8 = 0;
  PSID VAR_9;

  VAR_5 = FUNC_3(VAR_3, VAR_4, (ROS_ACE**) &VAR_7);
  if ( ! FUNC_1(VAR_5) )
  {
   FUNC_4("RtlGetAce(): status = 0x%08x\n", VAR_5);
   break;
  }

  VAR_9 = (PSID) (VAR_7 + 1);
  if ( VAR_7->Header.AceType == VAR_0 )
   VAR_8 = L"allow";
  if ( VAR_7->Header.AceType == VAR_1 )
   VAR_8 = L"deny ";

  VAR_5 = FUNC_2(&VAR_6, VAR_9, VAR_2);
  if ( ! FUNC_1(VAR_5) )
  {
   FUNC_4("RtlConvertSidToUnicodeString(): status = 0x%08x\n", VAR_5);
   break;
  }

  FUNC_4("%d.) %S %wZ 0x%08x\n", VAR_4, VAR_8, &VAR_6, VAR_7->AccessMask);
  FUNC_0(VAR_6.Buffer);
 }
}

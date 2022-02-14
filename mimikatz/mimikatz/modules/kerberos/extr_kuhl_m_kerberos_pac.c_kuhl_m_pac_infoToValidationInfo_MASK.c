
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int RelativeId; } ;
struct TYPE_5__ {int UserAccountControl; int UserFlags; void* SidCount; scalar_t__ ExtraSids; int LogonDomainId; int LogonDomainName; TYPE_2__* GroupIds; void* GroupCount; int PrimaryGroupId; int UserId; int EffectiveName; int PasswordMustChange; int PasswordCanChange; int PasswordLastSet; int KickOffTime; int LogoffTime; int LogonTime; } ;
typedef TYPE_1__* PKERB_VALIDATION_INFO ;
typedef scalar_t__ PKERB_SID_AND_ATTRIBUTES ;
typedef int PISID ;
typedef TYPE_2__* PGROUP_MEMBERSHIP ;
typedef int * PFILETIME ;
typedef int LPCWSTR ;
typedef int KERB_VALIDATION_INFO ;
typedef void* DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

PKERB_VALIDATION_INFO FUNC_3(PFILETIME VAR_3, LPCWSTR VAR_4, LPCWSTR VAR_5, LPCWSTR VAR_6, PISID VAR_7, ULONG VAR_8, PGROUP_MEMBERSHIP VAR_9, DWORD VAR_10, PKERB_SID_AND_ATTRIBUTES VAR_11, DWORD VAR_12)
{
 PKERB_VALIDATION_INFO VAR_13 = ((void*)0);
 if((VAR_13 = (PKERB_VALIDATION_INFO) FUNC_1(VAR_0, sizeof(KERB_VALIDATION_INFO))))
 {
  VAR_13->LogonTime = *VAR_3;
  FUNC_0(&VAR_13->LogoffTime);
  FUNC_0(&VAR_13->KickOffTime);
  FUNC_0(&VAR_13->PasswordLastSet);
  FUNC_0(&VAR_13->PasswordCanChange);
  FUNC_0(&VAR_13->PasswordMustChange);
  FUNC_2(&VAR_13->EffectiveName, VAR_4);
  VAR_13->UserId = VAR_8;
  VAR_13->PrimaryGroupId = VAR_9[0].RelativeId;
  VAR_13->GroupCount = VAR_10;
  VAR_13->GroupIds = VAR_9;
  if(VAR_6)
   FUNC_2(&VAR_13->LogonDomainName, VAR_6);
  VAR_13->LogonDomainId = VAR_7;
  VAR_13->UserAccountControl = VAR_1 | VAR_2;
  VAR_13->SidCount = VAR_12;
  VAR_13->ExtraSids = VAR_11;



  if(VAR_13->ExtraSids && VAR_13->SidCount)
   VAR_13->UserFlags |= 0x20;


 }
 return VAR_13;
}

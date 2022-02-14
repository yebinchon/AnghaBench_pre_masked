
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AttributeCount; scalar_t__ Attributes; struct TYPE_4__* CredentialBlob; struct TYPE_4__* UserName; struct TYPE_4__* TargetAlias; struct TYPE_4__* Comment; struct TYPE_4__* TargetName; } ;
typedef TYPE_1__* PKULL_M_CRED_LEGACY_CRED_BLOB ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(PKULL_M_CRED_LEGACY_CRED_BLOB VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->TargetName)
   FUNC_0(VAR_0->TargetName);
  if(VAR_0->Comment)
   FUNC_0(VAR_0->Comment);
  if(VAR_0->TargetAlias)
   FUNC_0(VAR_0->TargetAlias);
  if(VAR_0->UserName)
   FUNC_0(VAR_0->UserName);
  if(VAR_0->CredentialBlob)
   FUNC_0(VAR_0->CredentialBlob);
  if(VAR_0->Attributes)
   FUNC_1(VAR_0->Attributes, VAR_0->AttributeCount);
  FUNC_0(VAR_0);
 }
}

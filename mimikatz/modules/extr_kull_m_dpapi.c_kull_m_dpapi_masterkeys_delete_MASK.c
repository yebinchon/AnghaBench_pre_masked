
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ DomainKey; scalar_t__ CredHist; scalar_t__ BackupKey; scalar_t__ MasterKey; } ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEYS ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(PKULL_M_DPAPI_MASTERKEYS VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->MasterKey)
   FUNC_1(VAR_0->MasterKey);
  if(VAR_0->BackupKey)
   FUNC_1(VAR_0->BackupKey);
  if(VAR_0->CredHist)
   FUNC_2(VAR_0->CredHist);
  if(VAR_0->DomainKey)
   FUNC_3(VAR_0->DomainKey);
  FUNC_0(VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Ticket; int Key; int Description; int AltTargetDomainName; int ClientName; int TargetDomainName; int TargetName; int DomainName; int ServiceName; } ;
typedef TYPE_1__* PKIWI_KERBEROS_TICKET ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(PKIWI_KERBEROS_TICKET VAR_0)
{
 if(VAR_0)
 {
  FUNC_1(VAR_0->ServiceName);
  FUNC_3(&VAR_0->DomainName);
  FUNC_1(VAR_0->TargetName);
  FUNC_3(&VAR_0->TargetDomainName);
  FUNC_1(VAR_0->ClientName);
  FUNC_3(&VAR_0->AltTargetDomainName);
  FUNC_3(&VAR_0->Description);
  FUNC_2(&VAR_0->Key);
  FUNC_2(&VAR_0->Ticket);
  FUNC_0(VAR_0);
 }
}

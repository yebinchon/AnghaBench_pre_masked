
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int Length; scalar_t__ Value; } ;
struct TYPE_7__ {int Length; scalar_t__ Value; } ;
struct TYPE_6__ {scalar_t__ Buffer; } ;
struct TYPE_9__ {TYPE_3__ Ticket; int TicketKvno; int TicketEncType; TYPE_2__ Key; int KeyType; int TicketFlags; TYPE_1__ Description; int AltTargetDomainName; int ClientName; int TargetDomainName; int TargetName; int DomainName; int ServiceName; int RenewUntil; int EndTime; int StartTime; } ;
typedef TYPE_4__* PKIWI_KERBEROS_TICKET ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ,int) ;

void FUNC_7(PKIWI_KERBEROS_TICKET VAR_0, BOOL VAR_1, BOOL VAR_2)
{
 FUNC_1(L"\n\t   Start/End/MaxRenew: ");
 FUNC_5(&VAR_0->StartTime); FUNC_1(L" ; ");
 FUNC_5(&VAR_0->EndTime); FUNC_1(L" ; ");
 FUNC_5(&VAR_0->RenewUntil);

 FUNC_2(L"\n\t   Service Name ", VAR_0->ServiceName, &VAR_0->DomainName);
 FUNC_2(L"\n\t   Target Name  ", VAR_0->TargetName, &VAR_0->TargetDomainName);
 FUNC_2(L"\n\t   Client Name  ", VAR_0->ClientName, &VAR_0->AltTargetDomainName);
 if(VAR_0->Description.Buffer)
  FUNC_1(L" ( %wZ )", &VAR_0->Description);
 FUNC_1(L"\n\t   Flags %08x    : ", VAR_0->TicketFlags);
 FUNC_3(VAR_0->TicketFlags);
 if(VAR_1)
 {
  FUNC_1(L"\n\t   Session Key       : 0x%08x - %s", VAR_0->KeyType, FUNC_4(VAR_0->KeyType));
  if(VAR_0->Key.Value)
  {
   FUNC_1(L"\n\t     ");
   FUNC_6(VAR_0->Key.Value, VAR_0->Key.Length, 0);
  }
 }
 FUNC_1(L"\n\t   Ticket            : 0x%08x - %s ; kvno = %u", VAR_0->TicketEncType, FUNC_4(VAR_0->TicketEncType), VAR_0->TicketKvno);

 if(VAR_2)
 {
  FUNC_1(L"\n\t     ");
  if(VAR_0->Ticket.Value)
   FUNC_6(VAR_0->Ticket.Value, VAR_0->Ticket.Length, 1);
  else FUNC_0(L"NULL Ticket Value !");
 }
 else FUNC_1(L"\t[...]");
}

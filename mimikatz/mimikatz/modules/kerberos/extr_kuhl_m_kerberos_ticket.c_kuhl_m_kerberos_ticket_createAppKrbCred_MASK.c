
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int bv_len; int bv_val; } ;
struct TYPE_10__ {int Length; int Value; } ;
struct TYPE_9__ {int Length; int Value; } ;
struct TYPE_11__ {int ServiceName; int DomainName; int RenewUntil; int EndTime; int StartTime; int TicketFlags; int ClientName; int AltTargetDomainName; TYPE_2__ Key; int KeyType; TYPE_1__ Ticket; int TicketKvno; int TicketEncType; } ;
typedef TYPE_3__* PKIWI_KERBEROS_TICKET ;
typedef TYPE_4__* PBERVAL ;
typedef int BerElement ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_4__**) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;

PBERVAL FUNC_13(PKIWI_KERBEROS_TICKET VAR_25, BOOL VAR_26)
{
 BerElement *VAR_27, *VAR_28;
 PBERVAL VAR_29 = ((void*)0), VAR_30 = ((void*)0);
 if((VAR_27 = FUNC_2(VAR_24)))
 {
  FUNC_6(VAR_27, "t{{t{i}t{i}t{", FUNC_0(VAR_2), FUNC_1(VAR_16), VAR_22, FUNC_1(VAR_15), VAR_2, FUNC_1(VAR_17));
  if(!VAR_26)
  {
   FUNC_6(VAR_27, "{t{{t{i}t{", FUNC_0(VAR_3), FUNC_1(VAR_21), VAR_22, FUNC_1(VAR_19));
   FUNC_11(VAR_27, &VAR_25->DomainName);
   FUNC_6(VAR_27, "}t{", FUNC_1(VAR_20));
   FUNC_9(VAR_27, VAR_25->ServiceName);
   FUNC_6(VAR_27, "}t{", FUNC_1(VAR_18));
   FUNC_7(VAR_27, VAR_25->TicketEncType, VAR_25->TicketKvno, VAR_25->Ticket.Value, VAR_25->Ticket.Length);
   FUNC_6(VAR_27, "}}}}");
  }
  else FUNC_6(VAR_27, "to", VAR_0, VAR_25->Ticket.Value, VAR_25->Ticket.Length);
  FUNC_6(VAR_27, "}t{", FUNC_1(VAR_14));
  if((VAR_28 = FUNC_2(VAR_24)))
  {
   FUNC_6(VAR_28, "t{{t{{{t{", FUNC_0(VAR_1), FUNC_1(VAR_4), FUNC_1(VAR_7));
   FUNC_8(VAR_28, VAR_25->KeyType, VAR_25->Key.Value, VAR_25->Key.Length);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_9));
   FUNC_11(VAR_28, &VAR_25->AltTargetDomainName);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_8));
   FUNC_9(VAR_28, VAR_25->ClientName);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_6));
   FUNC_10(VAR_28, VAR_25->TicketFlags);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_13));
   FUNC_12(VAR_28, &VAR_25->StartTime);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_5));
   FUNC_12(VAR_28, &VAR_25->EndTime);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_10));
   FUNC_12(VAR_28, &VAR_25->RenewUntil);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_12));
   FUNC_11(VAR_28, &VAR_25->DomainName);
   FUNC_6(VAR_28, "}t{", FUNC_1(VAR_11));
   FUNC_9(VAR_28, VAR_25->ServiceName);
   FUNC_6(VAR_28, "}}}}}}");

   if(FUNC_4(VAR_28, &VAR_30) >= 0)
    FUNC_7(VAR_27, VAR_23, 0, VAR_30->bv_val, VAR_30->bv_len);
   FUNC_5(VAR_28, 1);
  }
  FUNC_6(VAR_27, "}}}");
  FUNC_4(VAR_27, &VAR_29);
  if(VAR_30)
   FUNC_3(VAR_30);
  FUNC_5(VAR_27, 1);
 }
 return VAR_29;
}

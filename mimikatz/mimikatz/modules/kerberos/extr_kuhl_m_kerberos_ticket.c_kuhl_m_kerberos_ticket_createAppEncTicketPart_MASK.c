
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int bv_len; int bv_val; } ;
struct TYPE_8__ {int Length; int Value; } ;
struct TYPE_9__ {int RenewUntil; int EndTime; int StartTime; int ClientName; int AltTargetDomainName; TYPE_1__ Key; int KeyType; int TicketFlags; } ;
typedef TYPE_2__* PKIWI_KERBEROS_TICKET ;
typedef TYPE_3__* PBERVAL ;
typedef scalar_t__ LPCVOID ;
typedef int DWORD ;
typedef int BerElement ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__**) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

PBERVAL FUNC_12(PKIWI_KERBEROS_TICKET VAR_18, LPCVOID VAR_19, DWORD VAR_20)
{
 BerElement *VAR_21, *VAR_22;
 PBERVAL VAR_23 = ((void*)0), VAR_24 = ((void*)0);
 if((VAR_21 = FUNC_2(VAR_17)))
 {
  FUNC_6(VAR_21, "t{{t{", FUNC_0(VAR_0), FUNC_1(VAR_10));
  FUNC_9(VAR_21, VAR_18->TicketFlags);
  FUNC_6(VAR_21, "}t{", FUNC_1(VAR_11));
  FUNC_7(VAR_21, VAR_18->KeyType, VAR_18->Key.Value, VAR_18->Key.Length);
  FUNC_6(VAR_21, "}t{", FUNC_1(VAR_8));
  FUNC_10(VAR_21, &VAR_18->AltTargetDomainName);
  FUNC_6(VAR_21, "}t{", FUNC_1(VAR_7));
  FUNC_8(VAR_21, VAR_18->ClientName);
  FUNC_6(VAR_21, "}t{{t{i}t{o}}}t{", FUNC_1(VAR_14), FUNC_1(VAR_16), 0, FUNC_1(VAR_15), ((void*)0), 0, FUNC_1(VAR_6));
  FUNC_11(VAR_21, &VAR_18->StartTime);
  FUNC_6(VAR_21, "}t{", FUNC_1(VAR_13));
  FUNC_11(VAR_21, &VAR_18->StartTime);
  FUNC_6(VAR_21, "}t{", FUNC_1(VAR_9));
  FUNC_11(VAR_21, &VAR_18->EndTime);
  FUNC_6(VAR_21, "}t{", FUNC_1(VAR_12));
  FUNC_11(VAR_21, &VAR_18->RenewUntil);
  FUNC_6(VAR_21, "}");
  if(VAR_19 && VAR_20)
  {
   FUNC_6(VAR_21, "t{{{t{i}t{", FUNC_1(VAR_5), FUNC_1(VAR_4), VAR_1, FUNC_1(VAR_3));
   if((VAR_22 = FUNC_2(VAR_17)))
   {
    FUNC_6(VAR_22, "{{t{i}t{o}}}", FUNC_1(VAR_4), VAR_2, FUNC_1(VAR_3), VAR_19, VAR_20);
    if(FUNC_4(VAR_22, &VAR_24) >= 0)
     FUNC_6(VAR_21, "o", VAR_24->bv_val, VAR_24->bv_len);
    FUNC_5(VAR_22, 1);
   }
   FUNC_6(VAR_21, "}}}}");
  }
  FUNC_6(VAR_21, "}}");
  FUNC_4(VAR_21, &VAR_23);
  if(VAR_24)
   FUNC_3(VAR_24);
  FUNC_5(VAR_21, 1);
 }
 return VAR_23;
}

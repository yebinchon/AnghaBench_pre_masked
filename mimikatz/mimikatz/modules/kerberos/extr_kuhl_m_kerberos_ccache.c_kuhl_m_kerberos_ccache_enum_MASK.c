
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int USHORT ;
typedef int UNICODE_STRING ;
typedef int UCHAR ;
struct TYPE_14__ {int bv_len; int bv_val; } ;
struct TYPE_12__ {int Length; void* Value; } ;
struct TYPE_11__ {int Length; void* Value; } ;
struct TYPE_13__ {int TicketKvno; int TargetDomainName; TYPE_2__ Ticket; void* TicketFlags; int RenewUntil; int EndTime; int StartTime; TYPE_1__ Key; scalar_t__ TicketEncType; scalar_t__ KeyType; int DomainName; scalar_t__ ServiceName; int TargetName; int AltTargetDomainName; scalar_t__ ClientName; } ;
typedef int * PUSHORT ;
typedef void* PUCHAR ;
typedef TYPE_3__* PKIWI_KERBEROS_TICKET ;
typedef scalar_t__ PKERB_EXTERNAL_NAME ;
typedef int * PDWORD ;
typedef scalar_t__ PBYTE ;
typedef TYPE_4__* PBERVAL ;
typedef int NTSTATUS ;
typedef int KIWI_KERBEROS_TICKET ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (void*,scalar_t__,int) ;
 int FUNC_6 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (void*,int *) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int *) ;
 int * FUNC_13 (scalar_t__,TYPE_3__*,int ) ;
 int FUNC_14 (scalar_t__*) ;
 int FUNC_15 (scalar_t__*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (scalar_t__) ;
 TYPE_4__* FUNC_18 (TYPE_3__*,int ) ;
 int FUNC_19 (TYPE_3__*,int ,int ) ;
 int FUNC_20 (char*,scalar_t__,int *) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (TYPE_3__*) ;
 scalar_t__ FUNC_23 (int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_24 (int *,int ,int ) ;
 int FUNC_25 (int *,int *) ;
 int VAR_5 ;

NTSTATUS FUNC_26(int VAR_6, wchar_t * VAR_7[], BOOL VAR_8, BOOL VAR_9)
{
 PBYTE VAR_10, VAR_11;
 DWORD VAR_12, VAR_13;
 USHORT VAR_14;

 PKERB_EXTERNAL_NAME VAR_15; UNICODE_STRING VAR_16;
 PKIWI_KERBEROS_TICKET VAR_17;
 PBERVAL VAR_18;
 wchar_t * VAR_19;

 if(VAR_6)
 {
  if(FUNC_23(VAR_7[0], &VAR_10, &VAR_12))
  {
   VAR_11 = VAR_10;
   VAR_14 = FUNC_8(*(PUSHORT) VAR_11); VAR_11 += sizeof(USHORT);
   if((VAR_14 == 0x0504) || (VAR_14 == 0x0503))
   {
    if(VAR_14 == 0x0504)
     VAR_11 += sizeof(USHORT) + FUNC_8(*(PUSHORT) VAR_11);
    FUNC_12(&VAR_11, &VAR_15, &VAR_16);
    if(VAR_15)
    {
     FUNC_20(L"\nPrincipal : ", VAR_15, &VAR_16);
     for(VAR_13 = 0; VAR_11 < (VAR_10 + VAR_12); VAR_13++)
     {
      FUNC_10(L"\n\nData %u", VAR_13);
      if((VAR_17 = (PKIWI_KERBEROS_TICKET) FUNC_0(VAR_1, sizeof(KIWI_KERBEROS_TICKET))))
      {
       FUNC_12(&VAR_11, &VAR_17->ClientName, &VAR_17->AltTargetDomainName);
       FUNC_12(&VAR_11, &VAR_17->ServiceName, &VAR_17->DomainName);

       VAR_17->TargetName = FUNC_17(VAR_17->ServiceName);
       FUNC_25(&VAR_17->DomainName, &VAR_17->TargetDomainName);

       VAR_17->KeyType = FUNC_8(*(PUSHORT) VAR_11); VAR_11 += sizeof(USHORT);
       VAR_17->TicketEncType = FUNC_8(*(PUSHORT) VAR_11); VAR_11 += sizeof(USHORT);
       if(VAR_14 == 0x0504)
       {
        VAR_17->Key.Length = FUNC_8(*(PUSHORT) VAR_11); VAR_11 += sizeof(USHORT);
       }
       else
       {
        VAR_17->Key.Length = FUNC_7(*(PDWORD) VAR_11); VAR_11 += sizeof(DWORD);
       }
       if(VAR_17->Key.Length)
        if((VAR_17->Key.Value = (PUCHAR) FUNC_0(VAR_1, VAR_17->Key.Length)))
         FUNC_5(VAR_17->Key.Value, VAR_11, VAR_17->Key.Length);
       VAR_11 += VAR_17->Key.Length + sizeof(DWORD);

       FUNC_11(FUNC_7(*(PDWORD) VAR_11), &VAR_17->StartTime); VAR_11 += sizeof(DWORD);
       FUNC_11(FUNC_7(*(PDWORD) VAR_11), &VAR_17->EndTime); VAR_11 += sizeof(DWORD);
       FUNC_11(FUNC_7(*(PDWORD) VAR_11), &VAR_17->RenewUntil); VAR_11 += sizeof(DWORD) + sizeof(UCHAR);

       VAR_17->TicketFlags = FUNC_7(*(PDWORD) VAR_11); VAR_11 += sizeof(DWORD);
       FUNC_15(&VAR_11);
       FUNC_15(&VAR_11);

       VAR_17->Ticket.Length = FUNC_7(*(PDWORD) VAR_11); VAR_11 += sizeof(DWORD);
       VAR_17->TicketKvno = 2;
       if(VAR_17->Ticket.Length)
        if((VAR_17->Ticket.Value = (PUCHAR) FUNC_0(VAR_1, VAR_17->Ticket.Length)))
         FUNC_5(VAR_17->Ticket.Value, VAR_11, VAR_17->Ticket.Length);
       VAR_11 += VAR_17->Ticket.Length;
       FUNC_14(&VAR_11);

       if(!FUNC_6(&VAR_5, &VAR_17->TargetDomainName, VAR_4))
       {
        FUNC_19(VAR_17, VAR_4, VAR_0);
        if(VAR_9 || VAR_8)
        {
         if((VAR_18 = FUNC_18(VAR_17, VAR_4)))
         {
          if(VAR_8)
          {
           FUNC_10(L"\n\t   * Injecting ticket : ");
           if(FUNC_2(FUNC_16(VAR_18->bv_val, VAR_18->bv_len)))
            FUNC_10(L"OK\n");
          }
          else
          {
           if((VAR_19 = FUNC_13(VAR_13, VAR_17, VAR_2)))
           {
            if(FUNC_24(VAR_19, VAR_18->bv_val, VAR_18->bv_len))
             FUNC_10(L"\n\t   * Saved to file %s !", VAR_19);
            else FUNC_4(L"kull_m_file_writeData");

            FUNC_1(VAR_19);
           }
          }
          FUNC_9(VAR_18);
         }
        }
       }
       else FUNC_10(L"\n\t* %wZ entry? *", &VAR_5);
       FUNC_22(VAR_17);
      }
     }
     FUNC_21(VAR_15);
    }
   }
   else FUNC_3(L"ccache version != 0x0504 or version != 0x0503\n");
   FUNC_1(VAR_10);
  }
  else FUNC_4(L"kull_m_file_readData");
 }
 else FUNC_3(L"At least one filename is needed\n");
 return VAR_3;
}

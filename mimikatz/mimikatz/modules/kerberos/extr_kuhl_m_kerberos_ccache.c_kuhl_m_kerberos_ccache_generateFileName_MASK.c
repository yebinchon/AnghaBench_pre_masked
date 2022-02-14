
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_8__ {int TicketFlags; TYPE_2__* ServiceName; TYPE_1__* ClientName; } ;
struct TYPE_7__ {int * Names; } ;
struct TYPE_6__ {int * Names; } ;
typedef TYPE_3__* PKIWI_KERBEROS_TICKET ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,size_t,char*,int const,int,char*,...) ;

wchar_t * FUNC_5(const DWORD VAR_1, PKIWI_KERBEROS_TICKET VAR_2, LPCWSTR VAR_3)
{
 wchar_t * VAR_4;
 size_t VAR_5 = 0x1000;
 BOOL VAR_6 = FUNC_2(VAR_2);

 if((VAR_4 = (wchar_t *) FUNC_0(VAR_0, VAR_5 * sizeof(wchar_t))))
 {
  if(VAR_6)
   VAR_6 = FUNC_4(VAR_4, VAR_5, L"%u-%08x-%wZ@%wZ-%wZ.%s", VAR_1, VAR_2->TicketFlags, &VAR_2->ClientName->Names[0], &VAR_2->ServiceName->Names[0], &VAR_2->ServiceName->Names[1], VAR_3) > 0;
  else
   VAR_6 = FUNC_4(VAR_4, VAR_5, L"%u-%08x.%s", VAR_1, VAR_2->TicketFlags, VAR_3) > 0;

  if(VAR_6)
   FUNC_3(VAR_4);
  else
   VAR_4 = (wchar_t *) FUNC_1(VAR_4);
 }
 return VAR_4;
}

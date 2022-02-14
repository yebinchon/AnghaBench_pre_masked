
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int (* kuhl_m_lsadump_dcshadow_bind_DRSR_function ) (TYPE_2__*,int *) ;
typedef int ULONG ;
struct TYPE_11__ {int cb; int dwFlags; int dwReplEpoch; } ;
struct TYPE_9__ {int InvocationId; } ;
struct TYPE_10__ {TYPE_1__ realDc; int dwReplEpoch; int szDCFQDN; } ;
typedef int RPC_BINDING_HANDLE ;
typedef TYPE_2__* PDCSHADOW_DOMAIN_INFO ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef int * DRS_HANDLE ;
typedef TYPE_4__ DRS_EXTENSIONS_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,char*,int ,int *,char*,int ,int ,int *,int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int *,int *,int **,TYPE_4__*) ;

ULONG FUNC_6(PDCSHADOW_DOMAIN_INFO VAR_9, kuhl_m_lsadump_dcshadow_bind_DRSR_function VAR_10)
{
 NTSTATUS VAR_11 = VAR_6;
 RPC_BINDING_HANDLE VAR_12;
 DRS_HANDLE VAR_13 = ((void*)0);
 DRS_EXTENSIONS_INT VAR_14;

 if(FUNC_3(((void*)0), L"ncacn_ip_tcp", VAR_9->szDCFQDN, ((void*)0), L"ldap", VAR_7, (VAR_2 < 6) ? VAR_3 : VAR_4, ((void*)0), VAR_5, &VAR_12, VAR_8))
 {
  FUNC_2(&VAR_14, sizeof(DRS_EXTENSIONS_INT));
  VAR_14.cb = sizeof(DRS_EXTENSIONS_INT) - sizeof(DWORD);
  VAR_14.dwFlags = VAR_0 | VAR_1;
  VAR_14.dwReplEpoch = VAR_9->dwReplEpoch;
  if(FUNC_5(&VAR_12, &(VAR_9->realDc.InvocationId), &VAR_13, &VAR_14))
  {
   VAR_11 = VAR_10(VAR_9, VAR_13);
   FUNC_0(&VAR_13);
  }
  FUNC_4(&VAR_12);
 }
 else FUNC_1(L"Domain not present, or doesn\'t look like a FQDN\n");
 return VAR_11;
}

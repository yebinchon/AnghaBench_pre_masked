
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int InvocationId; int InstanceId; } ;
struct TYPE_10__ {int * request; int szFakeFQDN; TYPE_3__ mimiDc; TYPE_3__ realDc; int szDCFQDN; int fUseSchemaSignature; } ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef int DWORD ;
typedef int DCSHADOW_DOMAIN_DC_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_3__*) ;
 int FUNC_7 (int *) ;

BOOL FUNC_8(PDCSHADOW_DOMAIN_INFO VAR_1)
{
 BOOL VAR_2 = VAR_0;
 DWORD VAR_3 = 0;

 FUNC_1(L"** Domain Info **\n\n");
 VAR_2 = FUNC_4(VAR_1)
  && (!VAR_1->fUseSchemaSignature || FUNC_5(VAR_1));
 if(VAR_2)
 {
  VAR_2 = FUNC_3(VAR_1);
 }
 FUNC_1(L"\n");
 if(VAR_2)
 {
  FUNC_1(L"** Server Info **\n\n");
  if((VAR_2 = FUNC_6(VAR_1, VAR_1->szDCFQDN, &VAR_1->realDc)))
  {
   FUNC_1(L"Server: %s\n  InstanceId  : ", VAR_1->szDCFQDN);
   FUNC_7(&VAR_1->realDc.InstanceId);
   FUNC_1(L"\n  InvocationId: ");
   FUNC_7(&VAR_1->realDc.InvocationId);
   FUNC_1(L"\n");
  }
  FUNC_0(&VAR_1->mimiDc, sizeof(DCSHADOW_DOMAIN_DC_INFO));
  if(FUNC_6(VAR_1, VAR_1->szFakeFQDN, &VAR_1->mimiDc))
  {
   FUNC_1(L"Fake Server (already registered): %s\n  InstanceId  : ", VAR_1->szFakeFQDN);
   FUNC_7(&VAR_1->mimiDc.InstanceId);
   FUNC_1(L"\n  InvocationId: ");
   FUNC_7(&VAR_1->mimiDc.InvocationId);
   FUNC_1(L"\n");
  }
  else FUNC_1(L"Fake Server (not already registered): %s\n", VAR_1->szFakeFQDN);
  FUNC_1(L"\n");
 }
 if(VAR_2 && VAR_1->request != ((void*)0))
  VAR_2 = FUNC_2(VAR_1);
 return VAR_2;
}

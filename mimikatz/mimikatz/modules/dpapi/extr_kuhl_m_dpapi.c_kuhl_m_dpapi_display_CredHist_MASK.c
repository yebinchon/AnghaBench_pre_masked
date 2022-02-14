
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int guid; } ;
struct TYPE_5__ {TYPE_1__ header; int pSid; } ;
typedef int PWSTR ;
typedef TYPE_2__* PKULL_M_DPAPI_CREDHIST_ENTRY ;
typedef int LPCVOID ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int ,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

void FUNC_7(PKULL_M_DPAPI_CREDHIST_ENTRY VAR_2, LPCVOID VAR_3, LPCVOID VAR_4)
{
 PWSTR VAR_5;
 FUNC_2(L"   "); FUNC_5(VAR_2->pSid); FUNC_2(L" -- "); FUNC_4(&VAR_2->header.guid); FUNC_2(L"\n");
 FUNC_2(L"   > NTLM: "); FUNC_6(VAR_3, VAR_0, 0); FUNC_2(L"\n");
 FUNC_2(L"   > SHA1: "); FUNC_6(VAR_4, VAR_1, 0); FUNC_2(L"\n");
 if(FUNC_0(VAR_2->pSid, &VAR_5))
 {
  FUNC_3(VAR_5, &VAR_2->header.guid, VAR_3, VAR_4, ((void*)0), ((void*)0));
  FUNC_1(VAR_5);
 }
}

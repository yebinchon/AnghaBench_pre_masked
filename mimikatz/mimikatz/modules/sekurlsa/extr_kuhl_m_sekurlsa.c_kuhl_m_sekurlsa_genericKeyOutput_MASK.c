
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int type; scalar_t__ cbData; int * pbData; } ;
typedef TYPE_1__* PKIWI_CREDENTIAL_KEY ;
typedef int LPCWSTR ;






 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int *,int *,int *,int *,int *) ;
 int FUNC_2 (int *,scalar_t__,int ) ;

VOID FUNC_3(PKIWI_CREDENTIAL_KEY VAR_0, LPCWSTR VAR_1)
{
 if(VAR_0 && VAR_0->cbData)
 {
  switch(VAR_0->type)
  {
  case 130:
   FUNC_0(L"\n\t * NTLM     : ");
   if(VAR_1)
    FUNC_1(VAR_1, ((void*)0), VAR_0->pbData, ((void*)0), ((void*)0), ((void*)0));
   break;
  case 128:
   FUNC_0(L"\n\t * SHA1     : ");
   if(VAR_1)
    FUNC_1(VAR_1, ((void*)0), ((void*)0), VAR_0->pbData, ((void*)0), ((void*)0));
   break;
  case 129:
   FUNC_0(L"\n\t * RootKey  : ");
   break;
  case 131:
   FUNC_0(L"\n\t * DPAPI    : ");
   if(VAR_1)
    FUNC_1(VAR_1, ((void*)0), ((void*)0), ((void*)0), VAR_0->pbData, ((void*)0));
   break;
  default:
   FUNC_0(L"\n\t * %08x : ", VAR_0->type);
  }
  FUNC_2(VAR_0->pbData, VAR_0->cbData, 0);
 }
}

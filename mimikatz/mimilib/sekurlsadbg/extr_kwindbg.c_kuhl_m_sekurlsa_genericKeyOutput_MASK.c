
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int type; int cbData; int pbData; } ;
typedef TYPE_1__* PKIWI_CREDENTIAL_KEY ;






 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ) ;

VOID FUNC_2(PKIWI_CREDENTIAL_KEY VAR_0)
{
 switch(VAR_0->type)
 {
 case 130:
  FUNC_0("\n\t * NTLM     : ");
  break;
 case 128:
  FUNC_0("\n\t * SHA1     : ");
  break;
 case 129:
  FUNC_0("\n\t * RootKey  : ");
  break;
 case 131:
  FUNC_0("\n\t * DPAPI    : ");
  break;
 default:
  FUNC_0("\n\t * %08x : ", VAR_0->type);
 }
 FUNC_1(VAR_0->pbData, VAR_0->cbData, 0);
}

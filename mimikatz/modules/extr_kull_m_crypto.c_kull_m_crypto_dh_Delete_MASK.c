
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pbPublicKey; } ;
struct TYPE_7__ {scalar_t__ hProvParty; scalar_t__ hSessionKey; scalar_t__ hPrivateKey; TYPE_1__ publicKey; } ;
typedef TYPE_2__* PKIWI_DH ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

PKIWI_DH FUNC_3(PKIWI_DH VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->publicKey.pbPublicKey)
   FUNC_2(VAR_0->publicKey.pbPublicKey);
  if(VAR_0->hPrivateKey)
   FUNC_0(VAR_0->hPrivateKey);
  if(VAR_0->hSessionKey)
   FUNC_0(VAR_0->hSessionKey);
  if(VAR_0->hProvParty)
   FUNC_1(VAR_0->hProvParty, 0);
  VAR_0 = (PKIWI_DH) FUNC_2(VAR_0);
 }
 return VAR_0;
}

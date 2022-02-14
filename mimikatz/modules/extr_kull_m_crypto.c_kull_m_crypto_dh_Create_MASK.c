
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int g; int p; } ;
struct TYPE_6__ {int cbPublicKey; int * pbPublicKey; int sessionType; } ;
struct TYPE_7__ {TYPE_1__ publicKey; int hPrivateKey; int hProvParty; } ;
typedef TYPE_2__* PKIWI_DH ;
typedef int * PBYTE ;
typedef int KIWI_DH ;
typedef scalar_t__ BOOL ;
typedef int ALG_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *,int*) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 TYPE_3__ VAR_12 ;

PKIWI_DH FUNC_6(ALG_ID VAR_13)
{
 PKIWI_DH VAR_14 = ((void*)0);
 BOOL VAR_15 = VAR_4;

 if((VAR_14 = (PKIWI_DH) FUNC_4(VAR_8, sizeof(KIWI_DH))))
 {
  VAR_14->publicKey.sessionType = VAR_13;
  if(FUNC_0(&VAR_14->hProvParty, ((void*)0), VAR_9, VAR_10, VAR_3))
   if(FUNC_2(VAR_14->hProvParty, VAR_0, (1024 << 16) | VAR_1 | VAR_2, &VAR_14->hPrivateKey))
    if(FUNC_3(VAR_14->hPrivateKey, VAR_6, (PBYTE) &VAR_12.p, 0))
     if(FUNC_3(VAR_14->hPrivateKey, VAR_5, (PBYTE) &VAR_12.g, 0))
      if(FUNC_3(VAR_14->hPrivateKey, VAR_7, ((void*)0), 0))
       if(FUNC_1(VAR_14->hPrivateKey, 0, VAR_11, 0, ((void*)0), &VAR_14->publicKey.cbPublicKey))
        if((VAR_14->publicKey.pbPublicKey = (PBYTE) FUNC_4(VAR_8, VAR_14->publicKey.cbPublicKey)))
         VAR_15 = FUNC_1(VAR_14->hPrivateKey, 0, VAR_11, 0, VAR_14->publicKey.pbPublicKey, &VAR_14->publicKey.cbPublicKey);
  if(!VAR_15)
   VAR_14 = (PKIWI_DH) FUNC_5(VAR_14);
 }
 return VAR_14;
}

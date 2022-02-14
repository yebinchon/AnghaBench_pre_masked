
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int member_0; int member_1; } ;
struct TYPE_13__ {int Value; int pszObjId; int fCritical; } ;
struct TYPE_10__ {int cbData; int pbData; } ;
struct TYPE_12__ {TYPE_1__ PublicKey; } ;
struct TYPE_11__ {int digest; } ;
typedef TYPE_2__ SHA_DIGEST ;
typedef int SHA_CTX ;
typedef TYPE_3__* PCERT_PUBLIC_KEY_INFO ;
typedef TYPE_4__* PCERT_EXTENSION ;
typedef TYPE_5__ CRYPT_DATA_BLOB ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_5__*,int *) ;
 int VAR_1 ;

BOOL FUNC_4(PCERT_EXTENSION VAR_2, PCERT_PUBLIC_KEY_INFO VAR_3)
{
 SHA_CTX VAR_4;
 SHA_DIGEST VAR_5;
 CRYPT_DATA_BLOB VAR_6 = {sizeof(VAR_5.digest), VAR_5.digest};
 FUNC_1(&VAR_4);
 FUNC_2(&VAR_4, VAR_3->PublicKey.pbData, VAR_3->PublicKey.cbData);
 FUNC_0(&VAR_4, &VAR_5);
 VAR_2->pszObjId = VAR_1;
 VAR_2->fCritical = VAR_0;
 return FUNC_3(VAR_2->pszObjId, &VAR_6, &VAR_2->Value);
}

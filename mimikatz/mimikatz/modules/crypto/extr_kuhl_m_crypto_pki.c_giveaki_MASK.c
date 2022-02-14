
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int * member_1; int member_0; } ;
struct TYPE_15__ {int * member_1; int member_0; } ;
struct TYPE_14__ {int member_0; int member_1; } ;
struct TYPE_20__ {TYPE_4__ member_2; TYPE_3__ member_1; TYPE_2__ member_0; } ;
struct TYPE_19__ {int Value; int pszObjId; int fCritical; } ;
struct TYPE_13__ {int cbData; int pbData; } ;
struct TYPE_18__ {TYPE_1__ PublicKey; } ;
struct TYPE_17__ {int digest; } ;
typedef TYPE_5__ SHA_DIGEST ;
typedef int SHA_CTX ;
typedef TYPE_6__* PCERT_PUBLIC_KEY_INFO ;
typedef TYPE_7__* PCERT_EXTENSION ;
typedef TYPE_8__ CERT_AUTHORITY_KEY_ID2_INFO ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_8__*,int *) ;
 int VAR_1 ;

BOOL FUNC_4(PCERT_EXTENSION VAR_2, PCERT_PUBLIC_KEY_INFO VAR_3)
{
 SHA_CTX VAR_4;
 SHA_DIGEST VAR_5;
 CERT_AUTHORITY_KEY_ID2_INFO VAR_6 = {{sizeof(VAR_5.digest), VAR_5.digest}, {0, ((void*)0)}, {0, ((void*)0)}};
 FUNC_1(&VAR_4);
 FUNC_2(&VAR_4, VAR_3->PublicKey.pbData, VAR_3->PublicKey.cbData);
 FUNC_0(&VAR_4, &VAR_5);
 VAR_2->pszObjId = VAR_1;
 VAR_2->fCritical = VAR_0;
 return FUNC_3(VAR_2->pszObjId, &VAR_6, &VAR_2->Value);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pszObjId; } ;
struct TYPE_6__ {int hContentEncryptKey; int hCryptProv; TYPE_1__ ContentEncryptionAlgorithm; } ;
typedef int (* PFN_CMSG_GEN_CONTENT_ENCRYPT_KEY ) (TYPE_2__*,int ,int *) ;
typedef int * HCRYPTOIDFUNCSET ;
typedef int HCRYPTOIDFUNCADDR ;
typedef TYPE_2__ CMSG_CONTENT_ENCRYPT_INFO ;
typedef int BOOL ;
typedef int ALG_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ,int ,void**,int *) ;
 int * FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_4(CMSG_CONTENT_ENCRYPT_INFO *VAR_3, ALG_ID VAR_4)
{
    static HCRYPTOIDFUNCSET VAR_5 = ((void*)0);
    PFN_CMSG_GEN_CONTENT_ENCRYPT_KEY VAR_6 = ((void*)0);
    HCRYPTOIDFUNCADDR VAR_7;
    BOOL VAR_8;

    if (!VAR_5)
        VAR_5 = FUNC_3(VAR_0, 0);
    FUNC_2(VAR_5, VAR_2,
     VAR_3->ContentEncryptionAlgorithm.pszObjId, 0, (void **)&VAR_6, &VAR_7);
    if (VAR_6)
    {
        VAR_8 = VAR_6(VAR_3, 0, ((void*)0));
        FUNC_0(VAR_7, 0);
    }
    else
        VAR_8 = FUNC_1(VAR_3->hCryptProv, VAR_4, VAR_1,
         &VAR_3->hContentEncryptKey);
    return VAR_8;
}

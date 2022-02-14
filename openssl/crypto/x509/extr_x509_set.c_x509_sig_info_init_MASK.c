
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int mdnid; int pknid; int secbits; int flags; } ;
typedef TYPE_1__ X509_SIG_INFO ;
struct TYPE_10__ {int algorithm; } ;
typedef TYPE_2__ X509_ALGOR ;
struct TYPE_11__ {scalar_t__ (* siginf_set ) (TYPE_1__*,TYPE_2__ const*,int const*) ;} ;
typedef TYPE_3__ EVP_PKEY_ASN1_METHOD ;
typedef int EVP_MD ;
typedef int ASN1_STRING ;


 int FUNC_0 (int const*) ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int) ;




 int VAR_0 ;
 int FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__ const*,int const*) ;

__attribute__((used)) static void FUNC_6(X509_SIG_INFO *VAR_3, const X509_ALGOR *VAR_4,
                               const ASN1_STRING *VAR_5)
{
    int VAR_6, VAR_7;
    const EVP_MD *VAR_8;

    VAR_3->mdnid = VAR_0;
    VAR_3->pknid = VAR_0;
    VAR_3->secbits = -1;
    VAR_3->flags = 0;
    if (!FUNC_3(FUNC_4(VAR_4->algorithm), &VAR_7, &VAR_6)
            || VAR_6 == VAR_0)
        return;
    VAR_3->pknid = VAR_6;
    if (VAR_7 == VAR_0) {

        const EVP_PKEY_ASN1_METHOD *VAR_9 = FUNC_1(((void*)0), VAR_6);
        if (VAR_9 == ((void*)0) || VAR_9->siginf_set == ((void*)0)
                || VAR_9->siginf_set(VAR_3, VAR_4, VAR_5) == 0)
            return;
        VAR_3->flags |= VAR_2;
        return;
    }
    VAR_3->flags |= VAR_2;
    VAR_3->mdnid = VAR_7;
    VAR_8 = FUNC_2(VAR_7);
    if (VAR_8 == ((void*)0))
        return;

    VAR_3->secbits = FUNC_0(VAR_8) * 4;
    switch (VAR_7) {
        case 131:
        case 130:
        case 129:
        case 128:
        VAR_3->flags |= VAR_1;
    }
}

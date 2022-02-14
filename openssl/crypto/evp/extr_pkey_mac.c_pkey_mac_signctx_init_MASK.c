
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int length; int data; } ;
struct TYPE_12__ {TYPE_1__* pmeth; } ;
struct TYPE_11__ {scalar_t__ type; int ctx; } ;
struct TYPE_10__ {int flags; } ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ MAC_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef TYPE_4__ ASN1_OCTET_STRING ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(EVP_PKEY_CTX *VAR_6, EVP_MD_CTX *VAR_7)
{
    MAC_PKEY_CTX *VAR_8 = FUNC_7(VAR_6);
    ASN1_OCTET_STRING *VAR_9 = ((void*)0);
    int VAR_10 = 1;
    int VAR_11 =
        VAR_8->type == VAR_2
        && (VAR_6->pmeth->flags & VAR_1) != 0;

    if (VAR_11) {
        if (!FUNC_2(FUNC_0(VAR_8->ctx),
                          FUNC_10(FUNC_9(FUNC_6(VAR_6)))))
            return 0;
        VAR_9 = FUNC_8(FUNC_6(VAR_6));
        if (VAR_9 == ((void*)0))
            return 0;
    }

    FUNC_3(VAR_7, VAR_0);
    FUNC_4(VAR_7, VAR_5);


    {
        OSSL_PARAM VAR_12[3];
        size_t VAR_13 = 0;
        int VAR_14 = FUNC_5(VAR_7, ~VAR_0);


        VAR_12[VAR_13++] =
            FUNC_12(VAR_3, &VAR_14);
        if (VAR_11)
            VAR_12[VAR_13++] =
                FUNC_13(VAR_4,
                                                  VAR_9->data, VAR_9->length);
        VAR_12[VAR_13++] = FUNC_11();
        VAR_10 = FUNC_1(VAR_8->ctx, VAR_12);
    }
    return VAR_10;
}

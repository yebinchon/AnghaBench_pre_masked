
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int point_conversion_form_t ;
struct TYPE_6__ {long version; int * cofactor; int * order; int * base; int curve; int fieldID; } ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef TYPE_1__ ECPARAMETERS ;
typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 void* FUNC_2 (int const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int VAR_0 ;
 int * FUNC_5 (int const*) ;
 int * FUNC_6 (int const*) ;
 int * FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 size_t FUNC_9 (int const*,int const*,int ,unsigned char**,int *) ;
 int VAR_1 ;
 int FUNC_10 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (unsigned char*) ;
 int FUNC_12 (int const*,int ) ;
 int FUNC_13 (int const*,int ) ;

ECPARAMETERS *FUNC_14(const EC_GROUP *VAR_5,
                                               ECPARAMETERS *VAR_6)
{
    size_t VAR_7 = 0;
    ECPARAMETERS *VAR_8 = ((void*)0);
    const BIGNUM *VAR_9;
    unsigned char *VAR_10 = ((void*)0);
    const EC_POINT *VAR_11 = ((void*)0);
    point_conversion_form_t VAR_12;
    ASN1_INTEGER *VAR_13;

    if (VAR_6 == ((void*)0)) {
        if ((VAR_8 = FUNC_4()) == ((void*)0)) {
            FUNC_10(VAR_0, VAR_4);
            goto err;
        }
    } else
        VAR_8 = VAR_6;


    VAR_8->version = (long)0x1;


    if (!FUNC_13(VAR_5, VAR_8->fieldID)) {
        FUNC_10(VAR_0, VAR_3);
        goto err;
    }


    if (!FUNC_12(VAR_5, VAR_8->curve)) {
        FUNC_10(VAR_0, VAR_3);
        goto err;
    }


    if ((VAR_11 = FUNC_6(VAR_5)) == ((void*)0)) {
        FUNC_10(VAR_0, VAR_1);
        goto err;
    }

    VAR_12 = FUNC_8(VAR_5);

    VAR_7 = FUNC_9(VAR_5, VAR_11, VAR_12, &VAR_10, ((void*)0));
    if (VAR_7 == 0) {
        FUNC_10(VAR_0, VAR_3);
        goto err;
    }
    if (VAR_8->base == ((void*)0) && (VAR_8->base = FUNC_0()) == ((void*)0)) {
        FUNC_11(VAR_10);
        FUNC_10(VAR_0, VAR_4);
        goto err;
    }
    FUNC_1(VAR_8->base, VAR_10, VAR_7);


    VAR_9 = FUNC_7(VAR_5);
    if (VAR_9 == ((void*)0)) {
        FUNC_10(VAR_0, VAR_3);
        goto err;
    }
    VAR_8->order = FUNC_2(VAR_9, VAR_13 = VAR_8->order);
    if (VAR_8->order == ((void*)0)) {
        VAR_8->order = VAR_13;
        FUNC_10(VAR_0, VAR_2);
        goto err;
    }


    VAR_9 = FUNC_5(VAR_5);
    if (VAR_9 != ((void*)0)) {
        VAR_8->cofactor = FUNC_2(VAR_9, VAR_13 = VAR_8->cofactor);
        if (VAR_8->cofactor == ((void*)0)) {
            VAR_8->cofactor = VAR_13;
            FUNC_10(VAR_0, VAR_2);
            goto err;
        }
    }

    return VAR_8;

 err:
    if (VAR_6 == ((void*)0))
        FUNC_3(VAR_8);
    return ((void*)0);
}

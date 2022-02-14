
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int param ;
struct TYPE_9__ {int * s; int * r; } ;
struct TYPE_8__ {TYPE_1__* meth; int libctx; } ;
struct TYPE_7__ {int (* point_get_affine_coordinates ) (TYPE_2__ const*,int const*,int *,int *,int *) ;} ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef TYPE_2__ EC_GROUP ;
typedef TYPE_3__ ECDSA_SIG ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_5 ;
 int FUNC_15 (unsigned char*,unsigned char const*,int) ;
 int FUNC_16 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_17 (unsigned int,unsigned char*,int *,int ) ;
 int FUNC_18 (TYPE_2__ const*,int const*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_19(const unsigned char *VAR_6, int VAR_7,
                                        const ECDSA_SIG *VAR_8, EC_KEY *VAR_9,
                                        unsigned int VAR_10, int VAR_11)
{
    unsigned char VAR_12[VAR_5];
    int VAR_13 = -1;
    BN_CTX *VAR_14;
    BIGNUM *VAR_15, *VAR_16;
    const EC_GROUP *VAR_17;
    const EC_POINT *VAR_18;
    int VAR_19;

    VAR_17 = FUNC_7(VAR_9);
    VAR_18 = FUNC_8(VAR_9);
    if (VAR_9 == ((void*)0) || VAR_17 == ((void*)0) || VAR_18 == ((void*)0) || VAR_8 == ((void*)0)) {
        FUNC_9(VAR_0, VAR_2);
        return -1;
    }

    if (!FUNC_6(VAR_9)) {
        FUNC_9(VAR_0,
              VAR_1);
        return -1;
    }

    VAR_14 = FUNC_3(VAR_17->libctx);
    if (VAR_14 == ((void*)0)) {
        FUNC_9(VAR_0, VAR_4);
        return -1;
    }

    FUNC_4(VAR_14);

    VAR_15 = FUNC_2(VAR_14);
    VAR_16 = FUNC_2(VAR_14);
    if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0)) {
        FUNC_9(VAR_0, VAR_4);
        goto ret;
    }

    FUNC_16(VAR_12, 0, sizeof(VAR_12));
    VAR_19 = VAR_11 - (VAR_7 > VAR_11 ? VAR_11 : VAR_7);
    FUNC_15(VAR_12 + FUNC_10(VAR_11) + VAR_19, VAR_6, VAR_11 - VAR_19);

    if (VAR_17->meth->point_get_affine_coordinates(VAR_17, VAR_18,
                                                  VAR_15, VAR_16, VAR_14) != 1
        || FUNC_5(VAR_8->r, VAR_12 + FUNC_11(VAR_11), VAR_11) == -1
        || FUNC_5(VAR_8->s, VAR_12 + FUNC_12(VAR_11), VAR_11) == -1
        || FUNC_5(VAR_15, VAR_12 + FUNC_13(VAR_11), VAR_11) == -1
        || FUNC_5(VAR_16, VAR_12 + FUNC_14(VAR_11), VAR_11) == -1) {
        FUNC_9(VAR_0, VAR_3);
        goto ret;
    }

    VAR_13 = FUNC_17(VAR_10, VAR_12, ((void*)0), 0) == 0 ? 1 : 0;
ret:
    FUNC_0(VAR_14);
    FUNC_1(VAR_14);
    return VAR_13;
}

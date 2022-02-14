
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int param ;
struct TYPE_5__ {int * s; int * r; } ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef TYPE_1__ ECDSA_SIG ;
typedef int const BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int const*,unsigned char*,int) ;
 int FUNC_2 (int const*) ;
 void* FUNC_3 () ;
 int const* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int const* FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (unsigned char*,int) ;
 unsigned int VAR_7 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_18 (int const*,int const*,int const*,int *) ;
 int FUNC_19 (unsigned char*,unsigned char const*,int) ;
 int FUNC_20 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_21 (unsigned int,unsigned char*,int *,int ) ;

__attribute__((used)) static ECDSA_SIG *FUNC_22(const unsigned char *VAR_9,
                                             int VAR_10,
                                             const BIGNUM *VAR_11,
                                             const BIGNUM *VAR_12,
                                             EC_KEY *VAR_13,
                                             unsigned int VAR_14, int VAR_15)
{
    unsigned char VAR_16[VAR_8];
    int VAR_17 = 0;
    BIGNUM *VAR_18;
    ECDSA_SIG *VAR_19;
    const EC_GROUP *VAR_20;
    const BIGNUM *VAR_21;
    int VAR_22;

    VAR_20 = FUNC_8(VAR_13);
    VAR_21 = FUNC_9(VAR_13);
    if (VAR_20 == ((void*)0) || VAR_21 == ((void*)0)) {
        FUNC_10(VAR_0, VAR_2);
        return ((void*)0);
    }

    if (!FUNC_7(VAR_13)) {
        FUNC_10(VAR_0,
              VAR_1);
        return ((void*)0);
    }

    VAR_18 = FUNC_4();
    VAR_19 = FUNC_6();
    if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0)) {
        FUNC_10(VAR_0, VAR_6);
        goto ret;
    }

    VAR_19->r = FUNC_3();
    VAR_19->s = FUNC_3();
    if (VAR_19->r == ((void*)0) || VAR_19->s == ((void*)0)) {
        FUNC_10(VAR_0, VAR_6);
        goto ret;
    }

    FUNC_20(VAR_16, 0, sizeof(VAR_16));
    VAR_22 = VAR_15 - (VAR_10 > VAR_15 ? VAR_15 : VAR_10);
    FUNC_19(VAR_16 + FUNC_13(VAR_15) + VAR_22, VAR_9, VAR_15 - VAR_22);

    if (FUNC_1(VAR_21, VAR_16 + FUNC_14(VAR_15), VAR_15) == -1) {
        FUNC_10(VAR_0, VAR_4);
        goto ret;
    }

    if (VAR_12 == ((void*)0) || VAR_11 == ((void*)0)) {






         if (FUNC_12(VAR_16 + FUNC_16(VAR_15), VAR_15) != 1) {
             FUNC_10(VAR_0,
                   VAR_3);
             goto ret;
         }
    } else {

        if (FUNC_18(VAR_20, VAR_18, VAR_11, ((void*)0)) == 0
            || FUNC_1(VAR_18, VAR_16 + FUNC_16(VAR_15), VAR_15) == -1) {
            FUNC_10(VAR_0, VAR_4);
            goto ret;
        }

        VAR_14 |= VAR_7;
    }

    if (FUNC_21(VAR_14, VAR_16, ((void*)0), 0) != 0) {
        FUNC_10(VAR_0, VAR_5);
        goto ret;
    }

    if (FUNC_0(VAR_16 + FUNC_15(VAR_15), VAR_15, VAR_19->r) == ((void*)0)
        || FUNC_0(VAR_16 + FUNC_17(VAR_15), VAR_15, VAR_19->s) == ((void*)0)) {
        FUNC_10(VAR_0, VAR_4);
        goto ret;
    }

    VAR_17 = 1;
ret:
    FUNC_11(VAR_16 + FUNC_14(VAR_15), 2 * VAR_15);
    if (VAR_17 != 1) {
        FUNC_5(VAR_19);
        VAR_19 = ((void*)0);
    }
    FUNC_2(VAR_18);
    return VAR_19;
}

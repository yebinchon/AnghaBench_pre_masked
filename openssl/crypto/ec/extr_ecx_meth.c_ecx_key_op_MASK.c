
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ecx_key_op_t ;
typedef int X509_ALGOR ;
struct TYPE_5__ {unsigned char* pubkey; unsigned char* privkey; } ;
typedef int EVP_PKEY ;
typedef TYPE_1__ ECX_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (int *,unsigned char*,unsigned char*) ;
 int VAR_2 ;




 int FUNC_3 (int *,int,TYPE_1__*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (unsigned char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (unsigned char*,unsigned char*) ;
 int VAR_7 ;
 int FUNC_11 (unsigned char*,unsigned char*) ;
 int FUNC_12 (int *,int*,int *,int const*) ;
 int FUNC_13 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_14(EVP_PKEY *VAR_8, int VAR_9, const X509_ALGOR *VAR_10,
                      const unsigned char *VAR_11, int VAR_12, ecx_key_op_t VAR_13)
{
    ECX_KEY *VAR_14 = ((void*)0);
    unsigned char *VAR_15, *VAR_16;

    if (VAR_13 != VAR_3) {
        if (VAR_10 != ((void*)0)) {
            int VAR_17;


            FUNC_12(((void*)0), &VAR_17, ((void*)0), VAR_10);
            if (VAR_17 != VAR_5) {
                FUNC_0(VAR_0, VAR_1);
                return 0;
            }
        }

        if (VAR_11 == ((void*)0) || VAR_12 != FUNC_4(VAR_9)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
    }

    VAR_14 = FUNC_8(sizeof(*VAR_14));
    if (VAR_14 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_16 = VAR_14->pubkey;

    if (VAR_13 == VAR_4) {
        FUNC_13(VAR_16, VAR_11, VAR_12);
    } else {
        VAR_15 = VAR_14->privkey = FUNC_7(FUNC_4(VAR_9));
        if (VAR_15 == ((void*)0)) {
            FUNC_0(VAR_0, VAR_2);
            goto err;
        }
        if (VAR_13 == VAR_3) {
            if (FUNC_9(VAR_15, FUNC_4(VAR_9)) <= 0) {
                FUNC_6(VAR_15);
                VAR_14->privkey = ((void*)0);
                goto err;
            }
            if (VAR_9 == 129) {
                VAR_15[0] &= 248;
                VAR_15[VAR_6 - 1] &= 127;
                VAR_15[VAR_6 - 1] |= 64;
            } else if (VAR_9 == 128) {
                VAR_15[0] &= 252;
                VAR_15[VAR_7 - 1] |= 128;
            }
        } else {
            FUNC_13(VAR_15, VAR_11, FUNC_4(VAR_9));
        }
        switch (VAR_9) {
        case 129:
            FUNC_10(VAR_16, VAR_15);
            break;
        case 131:
            FUNC_1(VAR_16, VAR_15);
            break;
        case 128:
            FUNC_11(VAR_16, VAR_15);
            break;
        case 130:




            FUNC_2(((void*)0), VAR_16, VAR_15);
            break;
        }
    }

    FUNC_3(VAR_8, VAR_9, VAR_14);
    return 1;
 err:
    FUNC_5(VAR_14);
    return 0;
}

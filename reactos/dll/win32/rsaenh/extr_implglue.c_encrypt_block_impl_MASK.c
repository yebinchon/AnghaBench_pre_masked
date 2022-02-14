
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int N; } ;
struct TYPE_4__ {TYPE_2__ rsa; int aes; int des; int des3; int rc2; } ;
typedef TYPE_1__ KEY_CONTEXT ;
typedef int DWORD ;
typedef int const BYTE ;
typedef int BOOL ;
typedef int ALG_ID ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int const* FUNC_1 (int ,int ,unsigned long) ;
 int FUNC_2 (int ,int ,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int const*,int const*,int *) ;
 int FUNC_5 (int const*,int const*,int *) ;
 int FUNC_6 (int const*,int const*,int *) ;
 int FUNC_7 (int const*,int const*,int *) ;
 int FUNC_8 (int const*,int const*,int *) ;
 int FUNC_9 (int const*,int const*,int *) ;
 int FUNC_10 (int const*,int const*,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int const*,int const*,int *) ;
 int FUNC_13 (int const*,int const*,int *) ;
 int FUNC_14 (int const*,unsigned long) ;
 int FUNC_15 (int const*,unsigned long,int const*,unsigned long*,int ,TYPE_2__*) ;

BOOL FUNC_16(ALG_ID VAR_6, DWORD VAR_7, KEY_CONTEXT *VAR_8, const BYTE *VAR_9,
                        BYTE *VAR_10, DWORD VAR_11)
{
    unsigned long VAR_12, VAR_13;
    BYTE *VAR_14 = ((void*)0);

    switch (VAR_6) {
        case 131:
            if (VAR_11) {
                FUNC_13(VAR_9, VAR_10, &VAR_8->rc2);
            } else {
                FUNC_12(VAR_9, VAR_10, &VAR_8->rc2);
            }
            break;

        case 138:
        case 137:
            if (VAR_11) {
                FUNC_7(VAR_9, VAR_10, &VAR_8->des3);
            } else {
                FUNC_6(VAR_9, VAR_10, &VAR_8->des3);
            }
            break;

        case 132:
            if (VAR_11) {
                FUNC_9(VAR_9, VAR_10, &VAR_8->des);
            } else {
                FUNC_8(VAR_9, VAR_10, &VAR_8->des);
            }
            break;

        case 136:
        case 135:
        case 134:
        case 133:
            if (VAR_11) {
                FUNC_5(VAR_9, VAR_10, &VAR_8->aes);
            } else {
                FUNC_4(VAR_9, VAR_10, &VAR_8->aes);
            }
            break;

        case 130:
        case 129:
        case 128:
            VAR_13 = VAR_12 = (FUNC_11(&VAR_8->rsa.N)+7)/8;
            if (VAR_11) {
                if (FUNC_15(VAR_9, VAR_12, VAR_10, &VAR_13, VAR_7, &VAR_8->rsa) != VAR_0) {
                    FUNC_3(VAR_3);
                    return VAR_1;
                }
                FUNC_14(VAR_10, VAR_13);
            } else {
                VAR_14 = FUNC_1(FUNC_0(), 0, VAR_12);
                if (!VAR_14) {
                    FUNC_3(VAR_4);
                    return VAR_1;
                }
                FUNC_10(VAR_14, VAR_9, VAR_12);
                FUNC_14(VAR_14, VAR_12);
                if (FUNC_15(VAR_14, VAR_12, VAR_10, &VAR_13, VAR_7, &VAR_8->rsa) != VAR_0) {
                    FUNC_2(FUNC_0(), 0, VAR_14);
                    FUNC_3(VAR_3);
                    return VAR_1;
                }
                FUNC_2(FUNC_0(), 0, VAR_14);
            }
            break;

        default:
            FUNC_3(VAR_2);
            return VAR_1;
    }

    return VAR_5;
}

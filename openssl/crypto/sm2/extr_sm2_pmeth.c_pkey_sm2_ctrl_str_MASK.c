
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,long*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int,void*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(EVP_PKEY_CTX *VAR_6,
                             const char *VAR_7, const char *VAR_8)
{
    uint8_t *VAR_9;
    long VAR_10 = 0;
    int VAR_11 = 0;

    if (FUNC_9(VAR_7, "ec_paramgen_curve") == 0) {
        int VAR_12 = VAR_2;

        if (((VAR_12 = FUNC_0(VAR_8)) == VAR_2)
            && ((VAR_12 = FUNC_4(VAR_8)) == VAR_2)
            && ((VAR_12 = FUNC_3(VAR_8)) == VAR_2)) {
            FUNC_7(VAR_4, VAR_5);
            return 0;
        }
        return FUNC_2(VAR_6, VAR_12);
    } else if (FUNC_9(VAR_7, "ec_param_enc") == 0) {
        int VAR_13;

        if (FUNC_9(VAR_8, "explicit") == 0)
            VAR_13 = 0;
        else if (FUNC_9(VAR_8, "named_curve") == 0)
            VAR_13 = VAR_3;
        else
            return -2;
        return FUNC_1(VAR_6, VAR_13);
    } else if (FUNC_9(VAR_7, "sm2_id") == 0) {
        return FUNC_8(VAR_6, VAR_1,
                             (int)FUNC_10(VAR_8), (void *)VAR_8);
    } else if (FUNC_9(VAR_7, "sm2_hex_id") == 0) {





        VAR_9 = FUNC_6((const char *)VAR_8, &VAR_10);
        if (VAR_9 == ((void*)0)) {
            FUNC_7(VAR_4, VAR_0);
            return 0;
        }
        VAR_11 = FUNC_8(VAR_6, VAR_1, (int)VAR_10,
                            (void *)VAR_9);
        FUNC_5(VAR_9);
        return VAR_11;
    }

    return -2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int X509 ;
typedef int WPACKET ;
typedef int SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int*,int *) ;
 int FUNC_6 (int *,int const**,size_t*) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int) ;

EXT_RETURN FUNC_10(SSL *VAR_10, WPACKET *VAR_11,
                                               unsigned int VAR_12, X509 *VAR_13,
                                               size_t VAR_14)
{
    const uint16_t *VAR_15 = ((void*)0);
    size_t VAR_16 = 0, VAR_17;
    int VAR_18, VAR_19, VAR_20;

    VAR_20 = FUNC_5(VAR_10, &VAR_18, &VAR_19, ((void*)0));
    if (VAR_20 != 0) {
        FUNC_0(VAR_10, VAR_4,
                 VAR_5, VAR_20);
        return VAR_1;
    }





    if (!FUNC_9(VAR_10, VAR_19) && VAR_19 < VAR_7)
        return VAR_2;





    FUNC_6(VAR_10, &VAR_15, &VAR_16);

    if (!FUNC_2(VAR_11, VAR_8)

            || !FUNC_4(VAR_11)
            || !FUNC_4(VAR_11)
            || !FUNC_3(VAR_11, VAR_9)) {
        FUNC_0(VAR_10, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
        uint16_t VAR_21 = VAR_15[VAR_17];

        if (FUNC_8(VAR_10, VAR_21, VAR_19)
                && FUNC_7(VAR_10, VAR_21, VAR_6)) {
            if (!FUNC_2(VAR_11, VAR_21)) {
                FUNC_0(VAR_10, VAR_4,
                         VAR_5,
                         VAR_0);
                return VAR_1;
            }
        }
    }
    if (!FUNC_1(VAR_11) || !FUNC_1(VAR_11)) {
        FUNC_0(VAR_10, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}

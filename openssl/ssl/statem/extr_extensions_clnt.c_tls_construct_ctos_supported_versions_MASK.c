
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int *,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int*,int *) ;

EXT_RETURN FUNC_6(SSL *VAR_8, WPACKET *VAR_9,
                                                 unsigned int VAR_10, X509 *VAR_11,
                                                 size_t VAR_12)
{
    int VAR_13, VAR_14, VAR_15, VAR_16;

    VAR_16 = FUNC_5(VAR_8, &VAR_14, &VAR_15, ((void*)0));
    if (VAR_16 != 0) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5, VAR_16);
        return VAR_1;
    }





    if (VAR_15 < VAR_6)
        return VAR_2;

    if (!FUNC_2(VAR_9, VAR_7)
            || !FUNC_3(VAR_9)
            || !FUNC_4(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    for (VAR_13 = VAR_15; VAR_13 >= VAR_14; VAR_13--) {
        if (!FUNC_2(VAR_9, VAR_13)) {
            FUNC_0(VAR_8, VAR_4,
                     VAR_5,
                     VAR_0);
            return VAR_1;
        }
    }
    if (!FUNC_1(VAR_9) || !FUNC_1(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}

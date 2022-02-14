
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,size_t) ;
 int FUNC_5 (int *,int*,int*,int *) ;
 int FUNC_6 (int *,unsigned char const**,size_t*) ;
 int FUNC_7 (int *,int) ;

EXT_RETURN FUNC_8(SSL *VAR_7, WPACKET *VAR_8,
                                            unsigned int VAR_9, X509 *VAR_10,
                                            size_t VAR_11)
{
    const unsigned char *VAR_12;
    size_t VAR_13;
    int VAR_14, VAR_15, VAR_16;

    VAR_14 = FUNC_5(VAR_7, &VAR_15, &VAR_16, ((void*)0));
    if (VAR_14 != 0) {
        FUNC_0(VAR_7, VAR_4,
                 VAR_5, VAR_14);
        return VAR_1;
    }
    if (!FUNC_7(VAR_7, VAR_16))
        return VAR_2;


    FUNC_6(VAR_7, &VAR_12, &VAR_13);

    if (!FUNC_2(VAR_8, VAR_6)

            || !FUNC_3(VAR_8)
            || !FUNC_4(VAR_8, VAR_12, VAR_13)
            || !FUNC_1(VAR_8)) {
        FUNC_0(VAR_7, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }

    return VAR_3;
}

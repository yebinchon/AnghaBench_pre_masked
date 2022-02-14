
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (char*,int *,int const*,int,int const*,size_t) ;

int FUNC_2(SSL *VAR_3,
                                    const uint8_t *VAR_4,
                                    size_t VAR_5,
                                    const uint8_t *VAR_6,
                                    size_t VAR_7)
{
    if (VAR_5 < 8) {
        FUNC_0(VAR_3, VAR_1,
                 VAR_2, VAR_0);
        return 0;
    }


    return FUNC_1("RSA",
                          VAR_3,
                          VAR_4,
                          8,
                          VAR_6,
                          VAR_7);
}

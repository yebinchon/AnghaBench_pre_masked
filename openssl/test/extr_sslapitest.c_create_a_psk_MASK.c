
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int const SSL_SESSION ;
typedef int SSL_CIPHER ;
typedef int SSL ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int const*,unsigned char const*,int) ;
 int FUNC_4 (int const*,int const*) ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SSL_SESSION *FUNC_8(SSL *VAR_2)
{
    const SSL_CIPHER *VAR_3 = ((void*)0);
    const unsigned char VAR_4[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,
        0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,
        0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20,
        0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b,
        0x2c, 0x2d, 0x2e, 0x2f
    };
    SSL_SESSION *VAR_5 = ((void*)0);

    VAR_3 = FUNC_0(VAR_2, VAR_0);
    VAR_5 = FUNC_2();
    if (!FUNC_6(VAR_5)
            || !FUNC_6(VAR_3)
            || !FUNC_7(FUNC_3(VAR_5, VAR_4,
                                                      sizeof(VAR_4)))
            || !FUNC_7(FUNC_4(VAR_5, VAR_3))
            || !FUNC_7(
                    FUNC_5(VAR_5,
                                                     VAR_1))) {
        FUNC_1(VAR_5);
        return ((void*)0);
    }
    return VAR_5;
}

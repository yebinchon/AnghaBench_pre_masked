
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expected_ciphers ;
typedef int SSL ;


 int FUNC_0 (int*) ;
 size_t FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (int *,unsigned char const**) ;
 int FUNC_3 (int *,unsigned char const**) ;
 int FUNC_4 (int *,int**,size_t*) ;
 int FUNC_5 (unsigned char const,int ) ;
 int FUNC_6 (unsigned char const*,size_t,unsigned char const*,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int*,int const*,size_t) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(SSL *VAR_3, int *VAR_4, void *VAR_5)
{
    int *VAR_6 = VAR_5;
    const unsigned char *VAR_7;
    int *VAR_8;




    const unsigned char VAR_9[] = {0x00, 0x9d, 0xc0,
                                              0x2c, 0x00, 0xff};

    const int VAR_10[] = {

                                       11, 10,

                                       35, 22, 23, 13};
    size_t VAR_11;


    if ((*VAR_6)++ == 0)
        return VAR_1;

    VAR_11 = FUNC_2(VAR_3, &VAR_7);
    if (!FUNC_6(VAR_7, VAR_11, VAR_9, sizeof(VAR_9))
            || !FUNC_7(
                       FUNC_3(VAR_3, &VAR_7), 1)
            || !FUNC_5(*VAR_7, 0))
        return VAR_0;
    if (!FUNC_4(VAR_3, &VAR_8, &VAR_11))
        return VAR_0;
    if (VAR_11 != FUNC_1(VAR_10) ||
        FUNC_8(VAR_8, VAR_10, VAR_11 * sizeof(*VAR_8)) != 0) {
        FUNC_9("ClientHello callback expected extensions mismatch\n");
        FUNC_0(VAR_8);
        return VAR_0;
    }
    FUNC_0(VAR_8);
    return VAR_2;
}

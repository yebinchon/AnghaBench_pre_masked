
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROV_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_1,
                            unsigned char *VAR_2, size_t *VAR_3, size_t VAR_4,
                            const unsigned char *VAR_5, size_t VAR_6)
{
    PROV_CIPHER_CTX *VAR_7 = (PROV_CIPHER_CTX *)VAR_1;
    int VAR_8;

    *VAR_3 = 0;
    if (VAR_4 < VAR_6) {
        FUNC_0(0, VAR_0);
        return 0;
    }

    VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_5, VAR_6);
    if (VAR_8 <= 0)
        return 0;

    *VAR_3 = VAR_8;
    return 1;
}

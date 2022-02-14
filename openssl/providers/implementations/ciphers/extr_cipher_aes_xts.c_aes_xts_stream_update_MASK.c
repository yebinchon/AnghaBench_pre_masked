
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROV_AES_XTS_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned char*,size_t*,size_t,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, unsigned char *VAR_4, size_t *VAR_5,
                                 size_t VAR_6, const unsigned char *VAR_7,
                                 size_t VAR_8)
{
    PROV_AES_XTS_CTX *VAR_9 = (PROV_AES_XTS_CTX *)VAR_3;

    if (VAR_6 < VAR_8) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_1(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return 1;
}

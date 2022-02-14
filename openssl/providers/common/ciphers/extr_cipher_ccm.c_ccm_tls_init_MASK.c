
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; size_t tls_aad_len; size_t m; int enc; } ;
typedef TYPE_1__ PROV_CCM_CTX ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_1(PROV_CCM_CTX *VAR_2, unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5;

    if (VAR_4 != VAR_0)
        return 0;


    FUNC_0(VAR_2->buf, VAR_3, VAR_4);
    VAR_2->tls_aad_len = VAR_4;

    VAR_5 = VAR_2->buf[VAR_4 - 2] << 8 | VAR_2->buf[VAR_4 - 1];
    if (VAR_5 < VAR_1)
        return 0;


    VAR_5 -= VAR_1;

    if (!VAR_2->enc) {
        if (VAR_5 < VAR_2->m)
            return 0;

        VAR_5 -= VAR_2->m;
    }
    VAR_2->buf[VAR_4 - 2] = (unsigned char)(VAR_5 >> 8);
    VAR_2->buf[VAR_4 - 1] = (unsigned char)(VAR_5 & 0xff);


    return VAR_2->m;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; size_t tls_aad_len; int enc; scalar_t__ tls_enc_records; } ;
typedef TYPE_1__ PROV_GCM_CTX ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_1(PROV_GCM_CTX *VAR_3, unsigned char *VAR_4, size_t VAR_5)
{
    unsigned char *VAR_6;
    size_t VAR_7;

    if (VAR_5 != VAR_0)
       return 0;


    VAR_6 = VAR_3->buf;
    FUNC_0(VAR_6, VAR_4, VAR_5);
    VAR_3->tls_aad_len = VAR_5;
    VAR_3->tls_enc_records = 0;

    VAR_7 = VAR_6[VAR_5 - 2] << 8 | VAR_6[VAR_5 - 1];

    if (VAR_7 < VAR_1)
        return 0;
    VAR_7 -= VAR_1;


    if (!VAR_3->enc) {
        if (VAR_7 < VAR_2)
            return 0;
        VAR_7 -= VAR_2;
    }
    VAR_6[VAR_5 - 2] = (unsigned char)(VAR_7 >> 8);
    VAR_6[VAR_5 - 1] = (unsigned char)(VAR_7 & 0xff);

    return VAR_2;
}

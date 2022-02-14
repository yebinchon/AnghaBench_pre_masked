
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ext_len; int sig_len; size_t sct_len; int sct; int ext; int timestamp; int log_id; int version; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,unsigned char**) ;
 int FUNC_5 (int ,unsigned char*) ;
 int FUNC_6 (unsigned char*,int ,size_t) ;
 int FUNC_7 (int,unsigned char*) ;

int FUNC_8(const SCT *VAR_5, unsigned char **VAR_6)
{
    size_t VAR_7;
    unsigned char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

    if (!FUNC_3(VAR_5)) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }






    if (VAR_5->version == VAR_4)
        VAR_7 = 43 + VAR_5->ext_len + 4 + VAR_5->sig_len;
    else
        VAR_7 = VAR_5->sct_len;

    if (VAR_6 == ((void*)0))
        return VAR_7;

    if (*VAR_6 != ((void*)0)) {
        VAR_8 = *VAR_6;
        *VAR_6 += VAR_7;
    } else {
        VAR_9 = VAR_8 = FUNC_2(VAR_7);
        if (VAR_8 == ((void*)0)) {
            FUNC_0(VAR_0, VAR_3);
            goto err;
        }
        *VAR_6 = VAR_8;
    }

    if (VAR_5->version == VAR_4) {
        *VAR_8++ = VAR_5->version;
        FUNC_6(VAR_8, VAR_5->log_id, VAR_2);
        VAR_8 += VAR_2;
        FUNC_5(VAR_5->timestamp, VAR_8);
        FUNC_7(VAR_5->ext_len, VAR_8);
        if (VAR_5->ext_len > 0) {
            FUNC_6(VAR_8, VAR_5->ext, VAR_5->ext_len);
            VAR_8 += VAR_5->ext_len;
        }
        if (FUNC_4(VAR_5, &VAR_8) <= 0)
            goto err;
    } else {
        FUNC_6(VAR_8, VAR_5->sct, VAR_7);
    }

    return VAR_7;
err:
    FUNC_1(VAR_9);
    return -1;
}

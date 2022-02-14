
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ version; int sig_len; int sig; int sig_alg; int hash_alg; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int,unsigned char*) ;

int FUNC_6(const SCT *VAR_5, unsigned char **VAR_6)
{
    size_t VAR_7;
    unsigned char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

    if (!FUNC_3(VAR_5)) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }

    if (VAR_5->version != VAR_4) {
        FUNC_0(VAR_0, VAR_2);
        goto err;
    }






    VAR_7 = 4 + VAR_5->sig_len;

    if (VAR_6 != ((void*)0)) {
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

        *VAR_8++ = VAR_5->hash_alg;
        *VAR_8++ = VAR_5->sig_alg;
        FUNC_5(VAR_5->sig_len, VAR_8);
        FUNC_4(VAR_8, VAR_5->sig, VAR_5->sig_len);
    }

    return VAR_7;
err:
    FUNC_1(VAR_9);
    return -1;
}

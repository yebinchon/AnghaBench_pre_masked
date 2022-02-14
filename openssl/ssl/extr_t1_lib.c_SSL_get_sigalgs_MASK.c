
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int sig; int hash; int sigandhash; } ;
struct TYPE_7__ {int* peer_sigalgs; size_t peer_sigalgslen; } ;
struct TYPE_8__ {TYPE_1__ tmp; } ;
struct TYPE_9__ {TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ SIGALG_LOOKUP ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int) ;

int FUNC_1(SSL *VAR_2, int VAR_3,
                    int *VAR_4, int *VAR_5, int *VAR_6,
                    unsigned char *VAR_7, unsigned char *VAR_8)
{
    uint16_t *VAR_9 = VAR_2->s3.tmp.peer_sigalgs;
    size_t VAR_10 = VAR_2->s3.tmp.peer_sigalgslen;
    if (VAR_9 == ((void*)0) || VAR_10 > VAR_0)
        return 0;
    if (VAR_3 >= 0) {
        const SIGALG_LOOKUP *VAR_11;

        if (VAR_3 >= (int)VAR_10)
            return 0;
        VAR_9 += VAR_3;
        if (VAR_8 != ((void*)0))
            *VAR_8 = (unsigned char)((*VAR_9 >> 8) & 0xff);
        if (VAR_7 != ((void*)0))
            *VAR_7 = (unsigned char)(*VAR_9 & 0xff);
        VAR_11 = FUNC_0(*VAR_9);
        if (VAR_4 != ((void*)0))
            *VAR_4 = VAR_11 != ((void*)0) ? VAR_11->sig : VAR_1;
        if (VAR_5 != ((void*)0))
            *VAR_5 = VAR_11 != ((void*)0) ? VAR_11->hash : VAR_1;
        if (VAR_6 != ((void*)0))
            *VAR_6 = VAR_11 != ((void*)0) ? VAR_11->sigandhash : VAR_1;
    }
    return (int)VAR_10;
}

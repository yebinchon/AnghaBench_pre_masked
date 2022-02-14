
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hash; int sig; int sigandhash; int sigalg; } ;
struct TYPE_4__ {scalar_t__ shared_sigalgslen; TYPE_2__** shared_sigalgs; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ SIGALG_LOOKUP ;


 scalar_t__ VAR_0 ;

int FUNC_0(SSL *VAR_1, int VAR_2,
                           int *VAR_3, int *VAR_4, int *VAR_5,
                           unsigned char *VAR_6, unsigned char *VAR_7)
{
    const SIGALG_LOOKUP *VAR_8;
    if (VAR_1->shared_sigalgs == ((void*)0)
        || VAR_2 < 0
        || VAR_2 >= (int)VAR_1->shared_sigalgslen
        || VAR_1->shared_sigalgslen > VAR_0)
        return 0;
    VAR_8 = VAR_1->shared_sigalgs[VAR_2];
    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_8->hash;
    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_8->sig;
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_8->sigandhash;
    if (VAR_6 != ((void*)0))
        *VAR_6 = (unsigned char)(VAR_8->sigalg & 0xff);
    if (VAR_7 != ((void*)0))
        *VAR_7 = (unsigned char)((VAR_8->sigalg >> 8) & 0xff);
    return (int)VAR_1->shared_sigalgslen;
}

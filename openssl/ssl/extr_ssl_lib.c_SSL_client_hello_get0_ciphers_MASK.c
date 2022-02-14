
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* clienthello; } ;
struct TYPE_4__ {int ciphersuites; } ;
typedef TYPE_2__ SSL ;


 unsigned char* FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;

size_t FUNC_2(SSL *VAR_0, const unsigned char **VAR_1)
{
    if (VAR_0->clienthello == ((void*)0))
        return 0;
    if (VAR_1 != ((void*)0))
        *VAR_1 = FUNC_0(&VAR_0->clienthello->ciphersuites);
    return FUNC_1(&VAR_0->clienthello->ciphersuites);
}

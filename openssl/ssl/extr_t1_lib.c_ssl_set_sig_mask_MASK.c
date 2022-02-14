
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int sig_idx; } ;
struct TYPE_6__ {int amask; } ;
typedef TYPE_1__ SSL_CERT_LOOKUP ;
typedef int SSL ;
typedef TYPE_2__ SIGALG_LOOKUP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 size_t FUNC_1 (int *,int,int const**) ;
 scalar_t__ FUNC_2 (int *,int,TYPE_2__ const*) ;
 TYPE_2__* FUNC_3 (int const) ;

void FUNC_4(uint32_t *VAR_3, SSL *VAR_4, int VAR_5)
{
    const uint16_t *VAR_6;
    size_t VAR_7, VAR_8;
    uint32_t VAR_9 = VAR_2 | VAR_0 | VAR_1;




    VAR_8 = FUNC_1(VAR_4, 1, &VAR_6);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++, VAR_6++) {
        const SIGALG_LOOKUP *VAR_10 = FUNC_3(*VAR_6);
        const SSL_CERT_LOOKUP *VAR_11;

        if (VAR_10 == ((void*)0))
            continue;

        VAR_11 = FUNC_0(VAR_10->sig_idx);
        if (VAR_11 == ((void*)0))
                continue;


        if ((VAR_11->amask & VAR_9) != 0
                && FUNC_2(VAR_4, VAR_5, VAR_10))
            VAR_9 &= ~VAR_11->amask;
    }
    *VAR_3 |= VAR_9;
}

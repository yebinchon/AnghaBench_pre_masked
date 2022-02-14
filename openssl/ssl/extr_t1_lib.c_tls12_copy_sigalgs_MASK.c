
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int WPACKET ;
struct TYPE_4__ {scalar_t__ sig; scalar_t__ hash; } ;
typedef int SSL ;
typedef TYPE_1__ SIGALG_LOOKUP ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (int *,int ,TYPE_1__ const*) ;
 TYPE_1__* FUNC_4 (int const) ;

int FUNC_5(SSL *VAR_6, WPACKET *VAR_7,
                       const uint16_t *VAR_8, size_t VAR_9)
{
    size_t VAR_10;
    int VAR_11 = 0;

    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_8++) {
        const SIGALG_LOOKUP *VAR_12 = FUNC_4(*VAR_8);

        if (!FUNC_3(VAR_6, VAR_5, VAR_12))
            continue;
        if (!FUNC_2(VAR_7, *VAR_8))
            return 0;




        if (VAR_11 == 0 && (!FUNC_0(VAR_6)
            || (VAR_12->sig != VAR_0
                && VAR_12->hash != VAR_1
                && VAR_12->hash != VAR_2)))
            VAR_11 = 1;
    }
    if (VAR_11 == 0)
        FUNC_1(VAR_3, VAR_4);
    return VAR_11;
}
